
@protocol NCNotificationSectionSettingsProvider <NSObject>

@required

- (NSSet *)notificationSectionSettingsForDestination:(id <NCNotificationDestination>)arg1;
- (NCNotificationSectionSettings *)notificationSectionSettingsForDestination:(id <NCNotificationDestination>)arg1 forSectionIdentifier:(NSString *)arg2;

@end
