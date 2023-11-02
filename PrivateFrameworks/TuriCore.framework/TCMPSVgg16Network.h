
@interface TCMPSVgg16Network : NSObject {
    TCMPSVgg16Block1 * _block1;
    TCMPSVgg16Block1 * _block2;
    TCMPSVgg16Block2 * _block3;
    TCMPSVgg16Block2 * _block4;
    MPSNNImageNode * _output;
    MPSNNImageNode * _reluOut1;
    MPSNNImageNode * _reluOut2;
    MPSNNImageNode * _reluOut3;
    MPSNNImageNode * _reluOut4;
}

@property (nonatomic, retain) TCMPSVgg16Block1 *block1;
@property (nonatomic, retain) TCMPSVgg16Block1 *block2;
@property (nonatomic, retain) TCMPSVgg16Block2 *block3;
@property (nonatomic, retain) TCMPSVgg16Block2 *block4;
@property (nonatomic, retain) MPSNNImageNode *output;
@property (nonatomic, retain) MPSNNImageNode *reluOut1;
@property (nonatomic, retain) MPSNNImageNode *reluOut2;
@property (nonatomic, retain) MPSNNImageNode *reluOut3;
@property (nonatomic, retain) MPSNNImageNode *reluOut4;

- (void).cxx_destruct;
- (id)backwardPass:(id)arg1;
- (id)block1;
- (id)block2;
- (id)block3;
- (id)block4;
- (id)initWithParameters:(id)arg1 inputNode:(id)arg2 device:(id)arg3 cmdQueue:(id)arg4 descriptor:(id)arg5 initWeights:(id)arg6;
- (id)output;
- (id)reluOut1;
- (id)reluOut2;
- (id)reluOut3;
- (id)reluOut4;
- (void)setBlock1:(id)arg1;
- (void)setBlock2:(id)arg1;
- (void)setBlock3:(id)arg1;
- (void)setBlock4:(id)arg1;
- (void)setLearningRate:(float)arg1;
- (void)setOutput:(id)arg1;
- (void)setReluOut1:(id)arg1;
- (void)setReluOut2:(id)arg1;
- (void)setReluOut3:(id)arg1;
- (void)setReluOut4:(id)arg1;

@end
