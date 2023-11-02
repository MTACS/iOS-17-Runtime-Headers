
@interface VSFeatureFlags : NSObject

+ (bool)isLowPowerDeviceNeuralEnabled;
+ (bool)isTrialEnabled;
+ (bool)lowInactiveMemory;
+ (bool)useSiriTTSService;
+ (bool)useSiriTTSServiceV2;

@end
