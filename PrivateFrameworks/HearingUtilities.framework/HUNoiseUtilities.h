
@interface HUNoiseUtilities : NSObject

+ (double)attenuationFor298WithExposure:(double)arg1 andListeningState:(long long)arg2;
+ (double)attenuationFor515WithExposure:(double)arg1 andListeningState:(long long)arg2;
+ (double)attenuationFor698WithExposure:(double)arg1 andListeningState:(long long)arg2;
+ (double)attenuationForExposure:(double)arg1 deviceType:(long long)arg2 andListeningState:(long long)arg3;

@end
