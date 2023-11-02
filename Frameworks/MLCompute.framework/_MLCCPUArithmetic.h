
@interface _MLCCPUArithmetic : _MLCCPULayer

+ (int)arithmeticOperatorTypeFor:(int)arg1;
+ (unsigned int)bnnsArithmeticFunctionFor:(int)arg1;
+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (id)layerWithDevice:(id)arg1 operation:(int)arg2;

- (id)initWithDevice:(id)arg1 operation:(int)arg2;

@end
