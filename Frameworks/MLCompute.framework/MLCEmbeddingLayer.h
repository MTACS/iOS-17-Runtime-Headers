
@interface MLCEmbeddingLayer : MLCLayer {
    MLCEmbeddingDescriptor * _descriptor;
    MLCTensor * _weights;
    MLCTensorParameter * _weightsParameter;
}

@property (nonatomic, readonly, copy) MLCEmbeddingDescriptor *descriptor;
@property (nonatomic, readonly, retain) MLCTensor *weights;
@property (nonatomic, readonly, retain) MLCTensorParameter *weightsParameter;

+ (id)layerWithDescriptor:(id)arg1 weights:(id)arg2;
+ (bool)supportsDataType:(int)arg1 onDevice:(id)arg2;

- (void).cxx_destruct;
- (bool)allocateDataForOptimizer:(id)arg1;
- (void)allocateGradientsForParameters;
- (unsigned long long)allocatedDataSizeForTraining:(bool)arg1 optimizer:(id)arg2;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1 weight:(id)arg2;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (void)linkAssociatedTensors;
- (unsigned long long)parametersCount;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;
- (id)weights;
- (id)weightsParameter;

@end
