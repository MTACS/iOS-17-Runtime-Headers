
@interface NCNotificationManagementViewController : UIViewController <NCNotificationManagementController, NCNotificationManagementControllerSettingsDelegate, NCNotificationManagementViewPresenterDelegate> {
    bool  _isDeliveredQuietly;
    NCNotificationManagementView * _platterView;
    NCNotificationRequest * _request;
    <NCNotificationManagementControllerSettingsDelegate> * _settingsDelegate;
    NSURL * _settingsURL;
    NCNotificationManagementViewPresenter * _viewPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationRequest *request;
@property (nonatomic) <NCNotificationManagementControllerSettingsDelegate> *settingsDelegate;
@property (nonatomic, retain) NSURL *settingsURL;
@property (readonly) Class superclass;

+ (id)notificationManagementAlertControllerForNotificationRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3;

- (void).cxx_destruct;
- (void)_deliveryButtonTapped:(id)arg1;
- (id)_newManagementView;
- (void)_onOffToggleButtonTapped:(id)arg1;
- (id)_sectionSettingsForSectionIdentifier:(id)arg1;
- (void)_setAllowsCriticalAlerts:(bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)_setAllowsNotifications:(bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)_setAllowsTimeSensitive:(bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)_setDeliverQuietly:(bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (void)_setMuted:(bool)arg1 untilDate:(id)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5;
- (void)_setScheduledDelivery:(bool)arg1 forNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;
- (id)_systemSettings;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)initWithRequest:(id)arg1;
- (void)loadView;
- (id)notificationManagementController:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementController:(id)arg1 setAllowsCriticalAlerts:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setAllowsTimeSensitive:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setDeliverQuietly:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementController:(id)arg1 setMuted:(bool)arg2 untilDate:(id)arg3 forNotificationRequest:(id)arg4 withSectionIdentifier:(id)arg5 threadIdentifier:(id)arg6;
- (void)notificationManagementController:(id)arg1 setScheduledDelivery:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)notificationManagementControllerRequestsSystemSettings:(id)arg1;
- (id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsTimeSensitive:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (void)notificationManagementViewPresenter:(id)arg1 setMuted:(bool)arg2 untilDate:(id)arg3 forNotificationRequest:(id)arg4 withSectionIdentifier:(id)arg5 threadIdentifier:(id)arg6;
- (void)notificationManagementViewPresenter:(id)arg1 setScheduledDelivery:(bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
- (id)notificationManagementViewPresenterRequestsSystemSettings:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)setSettingsDelegate:(id)arg1;
- (void)setSettingsURL:(id)arg1;
- (id)settingsDelegate;
- (id)settingsURL;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
