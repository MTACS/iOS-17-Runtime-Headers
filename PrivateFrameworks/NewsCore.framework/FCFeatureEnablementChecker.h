
@interface FCFeatureEnablementChecker : NSObject

+ (unsigned long long)currentSeedTestBit;
+ (bool)enabledForCurrentLevel:(unsigned long long)arg1;
+ (bool)enabledInConfig:(id)arg1 forKey:(id)arg2 withDefaultLevel:(unsigned long long)arg3;

@end
