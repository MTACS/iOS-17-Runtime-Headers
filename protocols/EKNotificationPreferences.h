
@protocol EKNotificationPreferences <NSObject>

@optional

- (bool)invitationNotificationsDisabled;
- (void)setInvitationNotificationsDisabled:(bool)arg1;
- (void)setSharedCalendarNotificationsDisabled:(bool)arg1;
- (bool)sharedCalendarNotificationsDisabled;

@end
