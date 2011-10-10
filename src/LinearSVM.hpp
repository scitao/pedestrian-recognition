#ifndef LINEAR_SVM_HPP
#define LINEAR_SVM_HPP

#include <vector>
#include <string>

class LinearSVM {
    struct model *modelSVM;

  public:
    LinearSVM(std::vector <std::vector <double> > descriptor, std::vector <int> answers);
    LinearSVM(std::string fileName);
    ~LinearSVM();

    void save(std::string fileName);
    int classify(std::vector <double> descriptor);
};

#endif  // LINEAR_SVM_HPP
