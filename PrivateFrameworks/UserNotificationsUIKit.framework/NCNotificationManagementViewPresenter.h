
@interface NCNotificationManagementViewPresenter : NSObject <NCNotificationManagementControllerSettingsDelegate> {
    <NCNotificationManagementViewPresenterDelegate> * _delegate;
    UIAlertController * _notificationManagementAlertViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationManagementViewPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIAlertController *notificationManagementAlertViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (bool)dismissManagementViewIfPresentedAnimated:(bool)arg1;
- (id)notificationManagementAlertViewController;
- (id)notificationManagementController:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementController:(id)arg1 setAllowsCriticalAlerts:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setAllowsTimeSensitive:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setDeliverQuietly:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setMuted:(bool)arg2 untilDate:(id)arg3 forNotificationRequest:(id)arg4 withSectionIdentifier:(id)arg5 threadIdentifier:(id)arg6;
- (void)notificationManagementController:(id)arg1 setScheduledDelivery:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementControllerDidDismissManagementView:(id)arg1;
- (id)notificationManagementControllerRequestsSystemSettings:(id)arg1;
- (void)presentNotificationManagementViewType:(unsigned long long)arg1 forNotificationRequest:(id)arg2 withPresentingViewController:(id)arg3 withPresentingView:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)setNotificationManagementAlertViewController:(id)arg1;

@end
