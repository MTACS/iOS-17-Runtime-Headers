
@interface _DPPrioCountMinSketchValueRandomizer : NSObject <_DPStringRandomizer> {
    double  _epsilon;
    unsigned long long  _k;
    unsigned long long  _m;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double epsilon;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long k;
@property (nonatomic, readonly) unsigned long long m;
@property (readonly) Class superclass;

+ (id)randomizerWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3;

- (double)epsilon;
- (id)init;
- (id)initWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3;
- (unsigned long long)k;
- (unsigned long long)m;
- (id)randomize:(id)arg1 metadata:(id)arg2;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeStrings:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;

@end
