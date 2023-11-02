
@interface MLCMultiheadAttentionLayer : MLCLayer {
    NSArray * _attentionBiases;
    NSArray * _biases;
    NSArray * _biasesParameters;
    MLCMultiheadAttentionDescriptor * _descriptor;
    NSArray * _weights;
    NSArray * _weightsParameters;
}

@property (nonatomic, readonly, retain) NSArray *attentionBiases;
@property (nonatomic, readonly, retain) NSArray *biases;
@property (nonatomic, readonly, retain) NSArray *biasesParameters;
@property (nonatomic, readonly, copy) MLCMultiheadAttentionDescriptor *descriptor;
@property (nonatomic, readonly, retain) NSArray *weights;
@property (nonatomic, readonly, retain) NSArray *weightsParameters;

+ (id)layerWithDescriptor:(id)arg1 weights:(id)arg2 biases:(id)arg3 attentionBiases:(id)arg4;

- (void).cxx_destruct;
- (bool)allocateDataForOptimizer:(id)arg1;
- (void)allocateGradientsForParameters;
- (unsigned long long)allocatedDataSizeForTraining:(bool)arg1 optimizer:(id)arg2;
- (id)attentionBiases;
- (id)biases;
- (id)biasesParameters;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attentionBias:(id)arg4;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (void)linkAssociatedTensors;
- (unsigned long long)parametersCount;
- (id)resultTensorFromSources:(id)arg1;
- (id)summarizedDOTDescription;
- (void)unlinkAssociatedTensors;
- (id)weights;
- (id)weightsParameters;

@end
