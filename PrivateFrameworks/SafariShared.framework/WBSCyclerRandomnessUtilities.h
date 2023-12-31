
@interface WBSCyclerRandomnessUtilities : NSObject

+ (id)_randomStringWithCharactersFromString:(id)arg1;
+ (void)initialize;
+ (id)randomElementOfArray:(id)arg1;
+ (id)randomElementOfArray:(id)arg1 relativeProbabilities:(id)arg2;
+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)arg1;
+ (id)randomString;
+ (id)randomURL;
+ (void)reseed;
+ (unsigned long long)seed;
+ (void)setSeed:(unsigned long long)arg1;

@end
