
@interface PBFPowerLogger : NSObject

+ (void)logUpdate:(long long)arg1 reason:(long long)arg2;
+ (void)logUpdate:(long long)arg1 reason:(long long)arg2 inServiceOfBundleIdentifier:(id)arg3;
+ (short)powerLogClientIdentifier;

@end
