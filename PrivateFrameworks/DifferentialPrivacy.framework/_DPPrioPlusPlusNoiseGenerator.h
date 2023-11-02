
@interface _DPPrioPlusPlusNoiseGenerator : NSObject

+ (bool)isValidDimension:(unsigned long long)arg1;
+ (bool)isValidSigma:(double)arg1;
+ (id)randomize:(id)arg1 dimension:(unsigned long long)arg2 stddev:(double)arg3;

@end
