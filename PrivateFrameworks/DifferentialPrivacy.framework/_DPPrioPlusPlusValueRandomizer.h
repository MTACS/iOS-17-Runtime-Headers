
@interface _DPPrioPlusPlusValueRandomizer : NSObject <_DPStringRandomizer> {
    double  _delta;
    double  _epsilon;
    unsigned long long  _n;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delta;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double epsilon;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long n;
@property (readonly) Class superclass;

+ (id)randomizerWithEpsilon:(double)arg1 delta:(double)arg2 maxLength:(unsigned long long)arg3;

- (bool)checkAlgorithmParametersIn:(id)arg1;
- (double)delta;
- (double)epsilon;
- (id)init;
- (id)initWithEpsilon:(double)arg1 delta:(double)arg2 maxLength:(unsigned long long)arg3;
- (unsigned long long)n;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeFloatVector:(id)arg1 metadata:(id)arg2;
- (id)randomizeFloatVectors:(id)arg1 forKey:(id)arg2;
- (id)randomizeFloatVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;

@end
