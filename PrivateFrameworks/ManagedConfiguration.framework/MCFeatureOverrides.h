
@interface MCFeatureOverrides : NSObject

+ (id)_numberForDefaultsKey:(id)arg1 isPresent:(bool*)arg2;
+ (double)accountRemovalTimeoutWithDefaultValue:(double)arg1;
+ (bool)allowUnsupervisedWatchEnrollment;
+ (bool)allowVPNInUserEnrollment;
+ (bool)boolForDefaultsKey:(id)arg1;
+ (bool)boolForDefaultsKey:(id)arg1 isPresent:(bool*)arg2;
+ (bool)isAppleInternal;
+ (bool)isDevFused;
+ (int)profileEventsExpirationInterval;
+ (unsigned long long)profileEventsMaxLength;
+ (bool)shouldDisablePlatformPayloadFilter;
+ (bool)shouldSimulatorSupportMDM;

@end
