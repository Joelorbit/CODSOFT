#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string description;
    bool completed;
};

std::vector<Task> tasks;

void addTask() {
    Task newTask;
    std::cout << "Enter task description: ";
    std::cin.ignore();
    std::getline(std::cin, newTask.description);
    newTask.completed = false;
    tasks.push_back(newTask);
    std::cout << "Task added successfully!\n";
}

void viewTasks() {
    if (tasks.empty()) {
        std::cout << "No tasks available.\n";
        return;
    }
    std::cout << "\nTo-Do List:\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        std::cout << i + 1 << ". " << (tasks[i].completed ? "[Completed] " : "[Pending] ") << tasks[i].description << "\n";
    }
}

void markTaskCompleted() {
    viewTasks();
    std::cout << "Enter task number to mark as completed: ";
    int taskNumber;
    std::cin >> taskNumber;
    if (taskNumber > 0 && taskNumber <= tasks.size()) {
        tasks[taskNumber - 1].completed = true;
        std::cout << "Task marked as completed!\n";
    } else {
        std::cout << "Invalid task number.\n";
    }
}

void removeTask() {
    viewTasks();
    std::cout << "Enter task number to remove: ";
    int taskNumber;
    std::cin >> taskNumber;
    if (taskNumber > 0 && taskNumber <= tasks.size()) {
        tasks.erase(tasks.begin() + taskNumber - 1);
        std::cout << "Task removed successfully!\n";
    } else {
        std::cout << "Invalid task number.\n";
    }
}

int main() {
    int choice;
    do {
        std::cout << "\nTo-Do List Manager\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Mark Task as Completed\n";
        std::cout << "4. Remove Task\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: markTaskCompleted(); break;
            case 4: removeTask(); break;
            case 5: std::cout << "Exiting program.\n"; break;
            default: std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
