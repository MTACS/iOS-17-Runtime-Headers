
@interface MLCArithmeticLayer : MLCLayer {
    bool  _binaryOperation;
    int  _operation;
}

@property (nonatomic, readonly) bool binaryOperation;
@property (nonatomic, readonly) int operation;

+ (id)layerWithOperation:(int)arg1;

- (bool)binaryOperation;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (unsigned long long)deviceMemorySizeWithOptimizer:(id)arg1 device:(id)arg2;
- (id)initWithArithmeticOperation:(int)arg1;
- (bool)isSupportedShapeForTensorSources:(id)arg1;
- (int)operation;
- (id)resultTensorFromSources:(id)arg1;
- (bool)skipGradientComputationForSourceTensor:(id)arg1 resultTensor:(id)arg2;
- (id)summarizedDOTDescription;

@end
