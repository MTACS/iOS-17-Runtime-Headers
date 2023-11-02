
@interface _DPPrioSeedablePRNG : NSObject

+ (id)generateSeed;
+ (id)randomDataFromSeed:(id)arg1 length:(unsigned long long)arg2;
+ (unsigned long long)seedLength;

@end
