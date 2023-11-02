
@interface MLCLSTMLayer : MLCLayer {
    NSArray * _biases;
    NSArray * _biasesParameters;
    MLCLSTMDescriptor * _descriptor;
    NSArray * _gateActivations;
    NSArray * _hiddenWeights;
    NSArray * _hiddenWeightsParameters;
    NSArray * _inputWeights;
    NSArray * _inputWeightsParameters;
    MLCActivationDescriptor * _outputResultActivation;
    NSArray * _peepholeWeights;
    NSArray * _peepholeWeightsParameters;
}

@property (nonatomic, readonly, retain) NSArray *biases;
@property (nonatomic, readonly, retain) NSArray *biasesParameters;
@property (nonatomic, readonly, copy) MLCLSTMDescriptor *descriptor;
@property (nonatomic, readonly, copy) NSArray *gateActivations;
@property (nonatomic, readonly, retain) NSArray *hiddenWeights;
@property (nonatomic, readonly, retain) NSArray *hiddenWeightsParameters;
@property (nonatomic, readonly, retain) NSArray *inputWeights;
@property (nonatomic, readonly, retain) NSArray *inputWeightsParameters;
@property (nonatomic, readonly, copy) MLCActivationDescriptor *outputResultActivation;
@property (nonatomic, readonly, retain) NSArray *peepholeWeights;
@property (nonatomic, readonly, retain) NSArray *peepholeWeightsParameters;

// Image: /System/Library/Frameworks/MLCompute.framework/MLCompute

+ (id)layerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 biases:(id)arg4;
+ (id)layerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biases:(id)arg5;
+ (id)layerWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biases:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7;

- (void).cxx_destruct;
- (bool)allocateDataForOptimizer:(id)arg1;
- (void)allocateGradientsForParameters;
- (unsigned long long)allocatedDataSizeForTraining:(bool)arg1 optimizer:(id)arg2;
- (id)biases;
- (id)biasesParameters;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)descriptor;
- (id)gateActivations;
- (id)hiddenWeights;
- (id)hiddenWeightsParameters;
- (id)initWithDescriptor:(id)arg1 inputWeights:(id)arg2 hiddenWeights:(id)arg3 peepholeWeights:(id)arg4 biases:(id)arg5 gateActivations:(id)arg6 outputResultActivation:(id)arg7;
- (id)inputWeights;
- (id)inputWeightsParameters;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (void)linkAssociatedTensors;
- (id)outputResultActivation;
- (unsigned long long)parametersCount;
- (id)peepholeWeights;
- (id)peepholeWeightsParameters;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (id)resultStateTensorWithSources:(id)arg1;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)uniDirectionalLSTMLayer:(const void*)arg1 error:(id*)arg2;

@end
