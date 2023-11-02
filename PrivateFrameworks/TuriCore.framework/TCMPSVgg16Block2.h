
@interface TCMPSVgg16Block2 : NSObject {
    MPSCNNConvolutionNode * _conv1;
    MPSCNNConvolutionNode * _conv2;
    MPSCNNConvolutionNode * _conv3;
    MPSNNImageNode * _features;
    MPSNNImageNode * _output;
    MPSCNNPoolingAverageNode * _pooling;
    MPSCNNNeuronReLUNode * _relu1;
    MPSCNNNeuronReLUNode * _relu2;
    MPSCNNNeuronReLUNode * _relu3;
}

@property (nonatomic, retain) MPSCNNConvolutionNode *conv1;
@property (nonatomic, retain) MPSCNNConvolutionNode *conv2;
@property (nonatomic, retain) MPSCNNConvolutionNode *conv3;
@property (nonatomic, retain) MPSNNImageNode *features;
@property (nonatomic, retain) MPSNNImageNode *output;
@property (nonatomic, retain) MPSCNNPoolingAverageNode *pooling;
@property (nonatomic, retain) MPSCNNNeuronReLUNode *relu1;
@property (nonatomic, retain) MPSCNNNeuronReLUNode *relu2;
@property (nonatomic, retain) MPSCNNNeuronReLUNode *relu3;

- (void).cxx_destruct;
- (id)backwardPass:(id)arg1;
- (id)conv1;
- (id)conv2;
- (id)conv3;
- (id)features;
- (id)initWithParameters:(id)arg1 inputNode:(id)arg2 device:(id)arg3 cmdQueue:(id)arg4 descriptor:(id)arg5 initWeights:(id)arg6;
- (id)output;
- (id)pooling;
- (id)relu1;
- (id)relu2;
- (id)relu3;
- (void)setConv1:(id)arg1;
- (void)setConv2:(id)arg1;
- (void)setConv3:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setLearningRate:(float)arg1;
- (void)setOutput:(id)arg1;
- (void)setPooling:(id)arg1;
- (void)setRelu1:(id)arg1;
- (void)setRelu2:(id)arg1;
- (void)setRelu3:(id)arg1;

@end
