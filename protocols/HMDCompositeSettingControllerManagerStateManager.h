
@protocol HMDCompositeSettingControllerManagerStateManager

@required

- (<HMDCompositeSettingControllerManagerStateManagerDataSource> *)dataSource;
- (<HMDCompositeSettingControllerManagerStateTransitionDelegate> *)delegate;
- (<HMDCompositeSettingNotificationRegistrationProviding> *)notificationRegistrationProvider;
- (long long)stateForHomeUUID:(NSUUID *)arg1;
- (NSUUID *)uuid;

@end
