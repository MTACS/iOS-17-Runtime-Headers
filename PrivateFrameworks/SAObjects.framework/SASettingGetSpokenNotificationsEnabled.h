
@interface SASettingGetSpokenNotificationsEnabled : SASettingGetBool

@property (nonatomic, copy) NSString *appBundleId;

+ (id)getSpokenNotificationsEnabled;
+ (id)getSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAppBundleId:(id)arg1;

@end
