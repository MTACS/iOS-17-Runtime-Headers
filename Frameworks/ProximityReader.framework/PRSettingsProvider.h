
@interface PRSettingsProvider : NSObject

+ (bool)getAlwaysPlaySoundForBundleID:(id)arg1;
+ (bool)getPINPrivacyLockForBundleID:(id)arg1;
+ (bool)hasEntitlement:(id)arg1;
+ (bool)isProximityReaderSupported:(id)arg1;
+ (void)removeMDMAppAttribute:(long long)arg1 forBundleID:(id)arg2;
+ (void)setAlwaysPlaySound:(bool)arg1 forBundleID:(id)arg2;
+ (void)setMDMAppAttribute:(long long)arg1 withValue:(bool)arg2 forBundleID:(id)arg3;
+ (void)setPINPrivacyLock:(bool)arg1 forBundleID:(id)arg2;
+ (bool)shouldDisablePINPrivacyLockForBundleID:(id)arg1;
+ (bool)shouldShowPINPrivacyLockForBundleID:(id)arg1;

@end
