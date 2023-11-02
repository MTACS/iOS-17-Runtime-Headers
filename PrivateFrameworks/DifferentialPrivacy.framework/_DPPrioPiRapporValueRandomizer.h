
@interface _DPPrioPiRapporValueRandomizer : NSObject <_DPStringRandomizer> {
    bool  _dynamicVectorSize;
    double  _epsilon;
    unsigned long long  _p;
    double  _piRapporAlpha0;
    double  _piRapporAlpha1;
    unsigned int  _piRapporPrime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dynamicVectorSize;
@property (nonatomic, readonly) double epsilon;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long p;
@property (nonatomic, readonly) double piRapporAlpha0;
@property (nonatomic, readonly) double piRapporAlpha1;
@property (nonatomic, readonly) unsigned int piRapporPrime;
@property (readonly) Class superclass;

+ (id)randomizerWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 dynamicVectorSize:(bool)arg3 piRapporPrime:(unsigned int)arg4 piRapporAlpha0:(double)arg5 piRapporAlpha1:(double)arg6;

- (id)createDPPrioRecordFromPrivatizedShares:(id)arg1 forKey:(id)arg2 withMetadata:(id)arg3 withCreationDate:(double)arg4;
- (bool)dynamicVectorSize;
- (id)encodeClassIndices:(id)arg1 withDimensionality:(unsigned long long)arg2;
- (double)epsilon;
- (unsigned long long)getAllocationSizeWithPiRapporAlgorithm:(id)arg1 numberOfEncodedIndices:(unsigned long long)arg2;
- (id)init;
- (id)initWithEpsilon:(double)arg1 dimensionality:(unsigned long long)arg2 dynamicVectorSize:(bool)arg3 piRapporPrime:(unsigned int)arg4 piRapporAlpha0:(double)arg5 piRapporAlpha1:(double)arg6;
- (unsigned long long)p;
- (double)piRapporAlpha0;
- (double)piRapporAlpha1;
- (unsigned int)piRapporPrime;
- (id)randomize:(id)arg1 metadata:(id)arg2;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeBitValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (id)randomizeBitVectors:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeVector:(id)arg1 metadata:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;

@end
