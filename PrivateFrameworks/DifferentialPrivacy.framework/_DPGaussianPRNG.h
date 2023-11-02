
@interface _DPGaussianPRNG : NSObject

+ (bool)generateGaussianFloatsWithMean:(double)arg1 stddev:(double)arg2 x:(int)arg3 y:(int)arg4 out1:(float*)arg5 out2:(float*)arg6;
+ (id)generateSeed;
+ (id)randomFloatVectorFromSeed:(id)arg1 length:(unsigned long long)arg2 mean:(double)arg3 stddev:(double)arg4;
+ (unsigned long long)seedLength;

@end
