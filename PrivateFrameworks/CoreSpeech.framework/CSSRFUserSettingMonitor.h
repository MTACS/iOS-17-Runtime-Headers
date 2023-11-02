
@interface CSSRFUserSettingMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (bool)isSiriRestrictedOnLockScreen;

@end
