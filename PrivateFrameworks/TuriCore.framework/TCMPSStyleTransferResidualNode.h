
@interface TCMPSStyleTransferResidualNode : NSObject {
    MPSNNAdditionNode * _add;
    MPSCNNConvolutionNode * _conv1;
    MPSCNNConvolutionNode * _conv2;
    MPSCNNInstanceNormalizationNode * _instNorm1;
    MPSCNNInstanceNormalizationNode * _instNorm2;
    MPSNNImageNode * _output;
    MPSCNNNeuronReLUNode * _relu1;
}

@property (nonatomic, retain) MPSNNAdditionNode *add;
@property (nonatomic, retain) MPSCNNConvolutionNode *conv1;
@property (nonatomic, retain) MPSCNNConvolutionNode *conv2;
@property (nonatomic, retain) MPSCNNInstanceNormalizationNode *instNorm1;
@property (nonatomic, retain) MPSCNNInstanceNormalizationNode *instNorm2;
@property (nonatomic, retain) MPSNNImageNode *output;
@property (nonatomic, retain) MPSCNNNeuronReLUNode *relu1;

- (void).cxx_destruct;
- (id)add;
- (id)backwardPass:(id)arg1;
- (id)conv1;
- (id)conv2;
- (id)exportWeights:(id)arg1;
- (id)initWithParameters:(id)arg1 inputNode:(id)arg2 device:(id)arg3 cmdQueue:(id)arg4 descriptor:(id)arg5 initWeights:(id)arg6;
- (id)instNorm1;
- (id)instNorm2;
- (id)output;
- (id)relu1;
- (void)setAdd:(id)arg1;
- (void)setConv1:(id)arg1;
- (void)setConv2:(id)arg1;
- (void)setInstNorm1:(id)arg1;
- (void)setInstNorm2:(id)arg1;
- (void)setLearningRate:(float)arg1;
- (void)setOutput:(id)arg1;
- (void)setRelu1:(id)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;

@end
