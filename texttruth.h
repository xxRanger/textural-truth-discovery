//
// Created by anxin on 2020-02-21.
//

#ifndef ANONYMOUS_PAYMENT_TEXTTRUTH_H
#define ANONYMOUS_PAYMENT_TEXTTRUTH_H

#include <vector>

using namespace std;


typedef vector<float> Keyword;  // A single keyword
typedef vector<Keyword> Answer;
typedef vector<int> AnswerLabel; // cluster label of a answer, sizeof keyword length
typedef vector<int> TruthLabel; // indicator truth label for user, sizeof cluster
typedef vector<int> FactorLabel; // for cluster factor  , size of k clusters
typedef vector<float> Score;  // scores for user for a questions, sizeof user num

typedef vector<float> Cluster;  // A cluster
typedef vector<vector<Answer >> Dataset;
typedef vector<int> PriorCount; // n(0,0), n(0,1), n(1,0), n(1,1)

vector<AnswerLabel> sphere_kmeans(vector<Answer> &answers, int cluster_number, int max_iter = 300, float tol = 1e-4);
vector<Score> texttruth(Dataset &dataset, int try_round = 1000);

#endif //ANONYMOUS_PAYMENT_TEXTTRUTH_H
