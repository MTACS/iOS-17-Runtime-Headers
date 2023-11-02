
@interface AXMDataRegressionModel : NSObject {
    double * _bestFitParameters;
    double  _error;
    bool  _isDisqualified;
    int  _iterations;
    int  _n;
    double  _score;
    double * _x;
    double * _y;
}

@property (nonatomic, readonly) double*bestFitParameters;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) bool dataSatisfiesInitialConditions;
@property (nonatomic, readonly) double error;
@property (nonatomic) bool isDisqualified;
@property (nonatomic, readonly) int iterations;
@property (nonatomic, readonly) NSString *modelDescription;
@property (nonatomic, readonly) id /* block */ modelFunction;
@property (nonatomic, readonly) int modelParameterCount;
@property (nonatomic, readonly) int n;
@property (nonatomic, readonly) NSArray *partialDerivatives;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) double*x;
@property (nonatomic, readonly) double*y;

+ (id)getModelForX:(double*)arg1 y:(double*)arg2 n:(int)arg3;

- (double*)bestFitParameters;
- (void)computeScore;
- (double)confidence;
- (bool)dataSatisfiesInitialConditions;
- (void)dealloc;
- (void)disqualifyModelIfNecessary;
- (double)error;
- (double)fitDataWithModelParams:(double*)arg1 finalParams:(double*)arg2;
- (void)getDiagonal:(double*)arg1 size:(int)arg2 result:(double*)arg3;
- (void)getGradientForX:(double)arg1 parameterValues:(double*)arg2 result:(double*)arg3;
- (void)getIdentityMatrixWithSize:(int)arg1 scalar:(double)arg2 result:(double*)arg3;
- (void)getInitialParams:(double*)arg1;
- (void)getJacobianForParameters:(double*)arg1 gradient:(double*)arg2 result:(double*)arg3;
- (int)getMatrixInverse:(double*)arg1 size:(int)arg2 pivot:(int*)arg3 tmp:(double*)arg4 result:(double*)arg5;
- (void)getResidualsVector:(double*)arg1 result:(double*)arg2;
- (void)getSMA:(double*)arg1 lookback:(int)arg2;
- (id)initWithXValues:(double*)arg1 yValues:(double*)arg2 count:(int)arg3;
- (bool)isDisqualified;
- (int)iterations;
- (double)magnitude:(double*)arg1 size:(int)arg2;
- (id)modelDescription;
- (id /* block */)modelFunction;
- (id)modelFunctionStringForParameters:(double*)arg1 significantFigures:(int)arg2;
- (int)modelParameterCount;
- (int)n;
- (id)partialDerivatives;
- (void)printMatrix:(double*)arg1 rows:(int)arg2 cols:(int)arg3;
- (double)roundNumber:(double)arg1 withSignificantFigures:(unsigned long long)arg2;
- (double)score;
- (void)setIsDisqualified:(bool)arg1;
- (void)sortDataPoints;
- (double*)x;
- (double*)y;

@end
