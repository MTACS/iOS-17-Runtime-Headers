
@interface _DPPrioPlusPlusMetadataValueRandomizer : NSObject <_DPStringRandomizer> {
    bool  _dynamicVectorSize;
    double  _epsilon;
    unsigned long long  _p;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dynamicVectorSize;
@property (nonatomic, readonly) double epsilon;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long p;
@property (readonly) Class superclass;

+ (id)randomizerWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 dynamicVectorSize:(bool)arg3;

- (bool)dynamicVectorSize;
- (double)epsilon;
- (id)init;
- (id)initWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 dynamicVectorSize:(bool)arg3;
- (unsigned long long)p;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeBitVector:(id)arg1 metadata:(id)arg2;
- (id)randomizeBitVectors:(id)arg1 forKey:(id)arg2;
- (id)randomizeBitVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;

@end
