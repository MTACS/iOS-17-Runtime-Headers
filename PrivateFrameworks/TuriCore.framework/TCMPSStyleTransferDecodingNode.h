
@interface TCMPSStyleTransferDecodingNode : NSObject {
    MPSCNNConvolutionNode * _conv;
    MPSCNNInstanceNormalizationNode * _instNorm;
    MPSNNImageNode * _output;
    MPSCNNNeuronReLUNode * _relu;
    MPSCNNUpsamplingNearestNode * _upsample;
}

@property (nonatomic, retain) MPSCNNConvolutionNode *conv;
@property (nonatomic, retain) MPSCNNInstanceNormalizationNode *instNorm;
@property (nonatomic, retain) MPSNNImageNode *output;
@property (nonatomic, retain) MPSCNNNeuronReLUNode *relu;
@property (nonatomic, retain) MPSCNNUpsamplingNearestNode *upsample;

- (void).cxx_destruct;
- (id)backwardPass:(id)arg1;
- (id)conv;
- (id)exportWeights:(id)arg1;
- (id)initWithParameters:(id)arg1 inputNode:(id)arg2 device:(id)arg3 cmdQueue:(id)arg4 descriptor:(id)arg5 initWeights:(id)arg6;
- (id)instNorm;
- (id)output;
- (id)relu;
- (void)setConv:(id)arg1;
- (void)setInstNorm:(id)arg1;
- (void)setLearningRate:(float)arg1;
- (void)setOutput:(id)arg1;
- (void)setRelu:(id)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (void)setUpsample:(id)arg1;
- (id)upsample;

@end
