
@interface NeuralNetworks.BatchNormOperation : NeuralNetworks.BaseForwardNormalizeOperation {
    void backward;
    void learningPhase;
}

@end
