
@interface DESGaussianAlgorithmParameters : NSObject <AlgorithmParametersProtocol> {
    double  _clippingBound;
    double  _delta;
    double  _epsilon;
    NSString * _key;
    NSDictionary * _momentsAccountantParameters;
    NSMutableDictionary * _parameters;
    double  _sigma;
}

@property (nonatomic, readonly) double clippingBound;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) double sigma;

- (void).cxx_destruct;
- (void)addPerChunkParametersWith:(double)arg1 numChunks:(unsigned long long)arg2;
- (bool)calculateAndVerifyPerChunkClippingBoundsIn:(id)arg1 withOverallClippingBound:(double)arg2;
- (double)clippingBound;
- (id)initWith:(id)arg1 epsilon:(double)arg2 delta:(double)arg3 clippingBound:(double)arg4;
- (id)initWith:(id)arg1 epsilon:(double)arg2 delta:(double)arg3 clippingBound:(double)arg4 momentsAccountantParameters:(id)arg5;
- (id)initWith:(id)arg1 recipe:(id)arg2;
- (id)key;
- (id)parameters;
- (double)sigma;

@end
