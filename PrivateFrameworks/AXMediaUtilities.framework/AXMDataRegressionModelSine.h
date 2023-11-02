
@interface AXMDataRegressionModelSine : AXMDataRegressionModel

- (void)disqualifyModelIfNecessary;
- (double)estimatedRadianFrequency;
- (void)getInitialParams:(double*)arg1;
- (id)modelDescription;
- (id /* block */)modelFunction;
- (id)modelFunctionStringForParameters:(double*)arg1 significantFigures:(int)arg2;
- (int)modelParameterCount;
- (id)partialDerivatives;

@end
