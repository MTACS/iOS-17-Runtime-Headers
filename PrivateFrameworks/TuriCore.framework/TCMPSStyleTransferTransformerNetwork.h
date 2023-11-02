
@interface TCMPSStyleTransferTransformerNetwork : NSObject {
    MPSCNNConvolutionNode * _conv;
    TCMPSStyleTransferDecodingNode * _decoding1;
    TCMPSStyleTransferDecodingNode * _decoding2;
    TCMPSStyleTransferEncodingNode * _encoding1;
    TCMPSStyleTransferEncodingNode * _encoding2;
    TCMPSStyleTransferEncodingNode * _encoding3;
    MPSNNImageNode * _forwardPass;
    MPSCNNInstanceNormalizationNode * _instNorm;
    TCMPSStyleTransferResidualNode * _residual1;
    TCMPSStyleTransferResidualNode * _residual2;
    TCMPSStyleTransferResidualNode * _residual3;
    TCMPSStyleTransferResidualNode * _residual4;
    TCMPSStyleTransferResidualNode * _residual5;
    MPSCNNNeuronSigmoidNode * _sigmoid;
}

@property (nonatomic, retain) MPSCNNConvolutionNode *conv;
@property (nonatomic, retain) TCMPSStyleTransferDecodingNode *decoding1;
@property (nonatomic, retain) TCMPSStyleTransferDecodingNode *decoding2;
@property (nonatomic, retain) TCMPSStyleTransferEncodingNode *encoding1;
@property (nonatomic, retain) TCMPSStyleTransferEncodingNode *encoding2;
@property (nonatomic, retain) TCMPSStyleTransferEncodingNode *encoding3;
@property (nonatomic, retain) MPSNNImageNode *forwardPass;
@property (nonatomic, retain) MPSCNNInstanceNormalizationNode *instNorm;
@property (nonatomic, retain) TCMPSStyleTransferResidualNode *residual1;
@property (nonatomic, retain) TCMPSStyleTransferResidualNode *residual2;
@property (nonatomic, retain) TCMPSStyleTransferResidualNode *residual3;
@property (nonatomic, retain) TCMPSStyleTransferResidualNode *residual4;
@property (nonatomic, retain) TCMPSStyleTransferResidualNode *residual5;
@property (nonatomic, retain) MPSCNNNeuronSigmoidNode *sigmoid;

- (void).cxx_destruct;
- (id)backwardPass:(id)arg1;
- (id)conv;
- (id)decoding1;
- (id)decoding2;
- (id)encoding1;
- (id)encoding2;
- (id)encoding3;
- (id)exportWeights:(id)arg1;
- (id)forwardPass;
- (id)initWithParameters:(id)arg1 inputNode:(id)arg2 device:(id)arg3 cmdQueue:(id)arg4 descriptor:(id)arg5 initWeights:(id)arg6;
- (id)instNorm;
- (id)residual1;
- (id)residual2;
- (id)residual3;
- (id)residual4;
- (id)residual5;
- (void)setConv:(id)arg1;
- (void)setDecoding1:(id)arg1;
- (void)setDecoding2:(id)arg1;
- (void)setEncoding1:(id)arg1;
- (void)setEncoding2:(id)arg1;
- (void)setEncoding3:(id)arg1;
- (void)setForwardPass:(id)arg1;
- (void)setInstNorm:(id)arg1;
- (void)setLearningRate:(float)arg1;
- (void)setResidual1:(id)arg1;
- (void)setResidual2:(id)arg1;
- (void)setResidual3:(id)arg1;
- (void)setResidual4:(id)arg1;
- (void)setResidual5:(id)arg1;
- (void)setSigmoid:(id)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (id)sigmoid;

@end
