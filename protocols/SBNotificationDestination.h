
@protocol SBNotificationDestination <NCNotificationDestination, SBFNotificationExtensionVisibilityProviding, SBFNotificationLongLookPresenting>

@required

- (SBNCAlertingController *)alertingController;
- (void)setAlertingController:(SBNCAlertingController *)arg1;

@end
