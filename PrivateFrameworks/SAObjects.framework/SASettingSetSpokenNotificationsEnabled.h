
@interface SASettingSetSpokenNotificationsEnabled : SASettingSetBool

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSDate *timeToReEnable;

+ (id)setSpokenNotificationsEnabled;
+ (id)setSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAppBundleId:(id)arg1;
- (void)setTimeToReEnable:(id)arg1;
- (id)timeToReEnable;

@end
