
@interface TCMPSStyleTransferPreProcessing : NSObject {
    MPSNNMultiplicationNode * _multiplicationNode;
    MPSNNImageNode * _output;
    MPSNNSubtractionNode * _subtractionNode;
}

@property (nonatomic, retain) MPSNNMultiplicationNode *multiplicationNode;
@property (nonatomic, retain) MPSNNImageNode *output;
@property (nonatomic, retain) MPSNNSubtractionNode *subtractionNode;

- (void).cxx_destruct;
- (id)backwardPass:(id)arg1;
- (id)initWithParameters:(id)arg1 inputNode:(id)arg2 scaleNode:(id)arg3 meanNode:(id)arg4;
- (id)multiplicationNode;
- (id)output;
- (void)setMultiplicationNode:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)setSubtractionNode:(id)arg1;
- (id)subtractionNode;

@end
