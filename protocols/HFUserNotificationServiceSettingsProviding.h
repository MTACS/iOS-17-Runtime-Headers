
@protocol HFUserNotificationServiceSettingsProviding <HFHomeKitObject>

@required

- (NAFuture *)hf_updateUserNotificationSettings:(HFUserNotificationServiceSettings *)arg1;
- (HFUserNotificationServiceSettings *)hf_userNotificationSettings;

@end
