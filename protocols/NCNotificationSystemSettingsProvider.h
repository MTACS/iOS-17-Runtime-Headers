
@protocol NCNotificationSystemSettingsProvider <NSObject>

@required

- (NCNotificationSystemSettings *)notificationSystemSettingsForDestination:(id <NCNotificationDestination>)arg1;

@end
