
@interface TCMLComputeObjectDetectorDescriptor : NSObject {
    MLCTensor * _inputTensor;
    unsigned long long  _outputChannels;
    NSDictionary * _weights;
}

@property (nonatomic, retain) MLCTensor *inputTensor;
@property (nonatomic) unsigned long long outputChannels;
@property (nonatomic, retain) NSDictionary *weights;

- (void).cxx_destruct;
- (id)addCommonLayersWithIndex:(unsigned long long)arg1 outputChannels:(unsigned long long)arg2 source:(id)arg3 graph:(id)arg4;
- (id)batchNormLayerForIndex:(unsigned long long)arg1;
- (id)convLayerForIndex:(unsigned long long)arg1 outputChannels:(unsigned long long)arg2;
- (id)inputTensor;
- (bool)isComplete;
- (unsigned long long)outputChannels;
- (void)setInputTensor:(id)arg1;
- (void)setOutputChannels:(unsigned long long)arg1;
- (void)setWeights:(id)arg1;
- (id)weights;

@end
