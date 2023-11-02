
@interface MLCFullyConnectedLayer : MLCLayer {
    int  _accumulatorPrecisionOption;
    MLCTensor * _biases;
    MLCTensorParameter * _biasesParameter;
    MLCConvolutionDescriptor * _descriptor;
    MLCTensor * _weights;
    MLCTensorParameter * _weightsParameter;
}

@property (nonatomic, readonly) int accumulatorPrecisionOption;
@property (nonatomic, readonly, retain) MLCTensor *biases;
@property (nonatomic, readonly, retain) MLCTensorParameter *biasesParameter;
@property (nonatomic, readonly, copy) MLCConvolutionDescriptor *descriptor;
@property (nonatomic, readonly, retain) MLCTensor *weights;
@property (nonatomic, readonly, retain) MLCTensorParameter *weightsParameter;

// Image: /System/Library/Frameworks/MLCompute.framework/MLCompute

+ (id)layerWithWeights:(id)arg1 biases:(id)arg2 descriptor:(id)arg3;

- (void).cxx_destruct;
- (int)accumulatorPrecisionOption;
- (bool)allocateDataForOptimizer:(id)arg1;
- (unsigned long long)allocatedDataSizeForTraining:(bool)arg1 optimizer:(id)arg2;
- (id)biases;
- (id)biasesParameter;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)descriptor;
- (id)initWithWeights:(id)arg1 biases:(id)arg2 descriptor:(id)arg3;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (void)linkAssociatedTensors;
- (unsigned long long)parametersCount;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;
- (id)weights;
- (id)weightsParameter;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (id)innerProductLayer:(const void*)arg1 error:(id*)arg2;
+ (id)innerProductLayerWithBatchedMatMulParams:(const void*)arg1 error:(id*)arg2;

@end
