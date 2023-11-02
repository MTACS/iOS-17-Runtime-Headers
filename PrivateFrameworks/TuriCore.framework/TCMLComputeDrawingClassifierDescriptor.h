
@interface TCMLComputeDrawingClassifierDescriptor : NSObject {
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
- (id)addConvLayer:(unsigned long long)arg1 outputChannels:(unsigned long long)arg2 source:(id)arg3 graph:(id)arg4;
- (id)addDenseLayer:(unsigned long long)arg1 outputChannels:(unsigned long long)arg2 source:(id)arg3 graph:(id)arg4;
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
