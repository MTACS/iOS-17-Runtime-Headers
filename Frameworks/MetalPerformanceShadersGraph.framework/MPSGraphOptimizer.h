
@interface MPSGraphOptimizer : MPSGraphObject {
    MPSGraph * _graph;
    MPSGraphTensor * _learningRateTensor;
    NSString * _name;
    NSArray * _trainableVariables;
    NSDictionary * _variablesToGradientTensorMap;
    NSDictionary * _variablesToUpdateOpMap;
}

@property (nonatomic, readonly) MPSGraphTensor *learningRateTensor;
@property (nonatomic, readonly) NSArray *updateOperations;
@property (nonatomic, readonly) NSDictionary *variablesToGradientTensorMap;
@property (nonatomic, readonly) NSDictionary *variablesToUpdateOpMap;

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 learningRateTensor:(id)arg2 trainableVariables:(id)arg3 variablesToGradientTensorMap:(id)arg4 name:(id)arg5;
- (id)initWithGraph:(id)arg1 lossTensor:(id)arg2 learningRateTensor:(id)arg3 trainableVariables:(id)arg4 name:(id)arg5;
- (id)learningRateTensor;
- (id)updateOperations;
- (id)variablesToGradientTensorMap;
- (id)variablesToUpdateOpMap;

@end
