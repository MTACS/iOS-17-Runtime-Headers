
@interface TCMLComputeActivityClassifierDescriptor : NSObject {
    MLCTensor * _inputTensor;
    unsigned long long  _outputChannels;
    MLCTensor * _outputTensor;
    NSDictionary * _weights;
}

@property (nonatomic, retain) MLCTensor *inputTensor;
@property (nonatomic) unsigned long long outputChannels;
@property (nonatomic, retain) MLCTensor *outputTensor;
@property (nonatomic, retain) NSDictionary *weights;

- (void).cxx_destruct;
- (id)addBatchNormLayerWithSource:(id)arg1 graph:(id)arg2;
- (id)addConvLayerWithOutputChannels:(unsigned long long)arg1 source:(id)arg2 graph:(id)arg3;
- (id)addDenseLayerWithIndex:(unsigned long long)arg1 outputChannels:(unsigned long long)arg2 source:(id)arg3 graph:(id)arg4;
- (id)addLSTMLayerWithInputSize:(unsigned long long)arg1 outputSize:(unsigned long long)arg2 source:(id)arg3 graph:(id)arg4;
- (id)inputTensor;
- (bool)isComplete;
- (unsigned long long)outputChannels;
- (id)outputTensor;
- (void)setInputTensor:(id)arg1;
- (void)setOutputChannels:(unsigned long long)arg1;
- (void)setOutputTensor:(id)arg1;
- (void)setWeights:(id)arg1;
- (id)weights;

@end
