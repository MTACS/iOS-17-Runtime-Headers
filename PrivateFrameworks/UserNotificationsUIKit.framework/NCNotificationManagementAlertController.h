
@interface NCNotificationManagementAlertController : UIAlertController <NCNotificationManagementController> {
    NCNotificationRequest * _request;
    <NCNotificationManagementControllerSettingsDelegate> * _settingsDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationRequest *request;
@property (nonatomic) <NCNotificationManagementControllerSettingsDelegate> *settingsDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureView;
- (id)initWithRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)setSettingsDelegate:(id)arg1;
- (id)settingsDelegate;
- (bool)shouldAutorotate;
- (void)viewDidLoad;

@end
