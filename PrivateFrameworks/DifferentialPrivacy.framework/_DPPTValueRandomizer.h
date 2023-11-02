
@interface _DPPTValueRandomizer : NSObject <_DPStringRandomizer> {
    unsigned int  _bucketCount;
    double  _chancePMinusQ;
    double  _epsilon;
    unsigned long long  _mask;
    unsigned int  _numGroups;
}

@property (nonatomic) unsigned int bucketCount;
@property (nonatomic) double chancePMinusQ;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double epsilon;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mask;
@property (nonatomic) unsigned int numGroups;
@property (readonly) Class superclass;

+ (id)randomizerWithEpsilon:(double)arg1 numberOfGroups:(unsigned int)arg2;

- (unsigned int)bucketCount;
- (double)chancePMinusQ;
- (double)epsilon;
- (id)init;
- (id)initWithEpsilon:(double)arg1 numberOfGroups:(unsigned int)arg2;
- (unsigned long long)mask;
- (unsigned int)numGroups;
- (id)randomize:(id)arg1;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;
- (void)setBucketCount:(unsigned int)arg1;
- (void)setChancePMinusQ:(double)arg1;
- (void)setEpsilon:(double)arg1;
- (void)setMask:(unsigned long long)arg1;
- (void)setNumGroups:(unsigned int)arg1;

@end
