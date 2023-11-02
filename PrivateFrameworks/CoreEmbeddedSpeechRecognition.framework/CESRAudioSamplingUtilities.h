
@interface CESRAudioSamplingUtilities : NSObject

+ (bool)isUniformlySampled:(unsigned long long)arg1 fromTotal:(unsigned long long)arg2;
+ (bool)isUniformlySampledWithPercentage:(unsigned long long)arg1;
+ (bool)isUniformlySampledWithSamplingRate:(float)arg1;

@end
