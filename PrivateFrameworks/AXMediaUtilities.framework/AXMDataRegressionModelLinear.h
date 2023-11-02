
@interface AXMDataRegressionModelLinear : AXMDataRegressionModel {
    double  _rSquared;
}

@property (nonatomic, readonly) double rSquared;

- (double)fitDataWithModelParams:(double*)arg1 finalParams:(double*)arg2;
- (void)getInitialParams:(double*)arg1;
- (id)modelDescription;
- (id /* block */)modelFunction;
- (id)modelFunctionStringForParameters:(double*)arg1 significantFigures:(int)arg2;
- (int)modelParameterCount;
- (id)partialDerivatives;
- (double)rSquared;

@end
