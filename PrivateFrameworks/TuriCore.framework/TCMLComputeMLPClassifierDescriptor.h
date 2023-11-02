
@interface TCMLComputeMLPClassifierDescriptor : NSObject {
    MLCTensor * _fcFinalTensor;
    MLCTensor * _inputTensor;
    NSArray * _layerSizes;
    unsigned long long  _outputChannels;
    NSDictionary * _tensors;
}

@property (nonatomic, retain) MLCTensor *fcFinalTensor;
@property (nonatomic, retain) MLCTensor *inputTensor;
@property (nonatomic, retain) NSArray *layerSizes;
@property (nonatomic) unsigned long long outputChannels;
@property (nonatomic, retain) NSDictionary *tensors;

- (void).cxx_destruct;
- (id)addFullyConnectedLayerWithIndex:(unsigned long long)arg1 outputChannels:(unsigned long long)arg2 source:(id)arg3 graph:(id)arg4;
- (id)fcFinalTensor;
- (id)fullyConnectedLayerForIndex:(unsigned long long)arg1 outputChannels:(unsigned long long)arg2;
- (id)inputTensor;
- (bool)isComplete;
- (id)layerSizes;
- (unsigned long long)outputChannels;
- (void)setFcFinalTensor:(id)arg1;
- (void)setInputTensor:(id)arg1;
- (void)setLayerSizes:(id)arg1;
- (void)setOutputChannels:(unsigned long long)arg1;
- (void)setTensors:(id)arg1;
- (id)tensors;

@end
