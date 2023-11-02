
@interface NeuralNetworks.BaseForwardNormalizeOperation : NeuralNetworks.BaseNormalizeOperation {
    void momentum;
    void runningMean;
    void runningVariance;
}

@end
