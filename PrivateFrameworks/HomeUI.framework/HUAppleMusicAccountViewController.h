
@interface HUAppleMusicAccountViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUAppleMusicAccountModuleControllerDelegate, UITextViewDelegate> {
    NAFuture * _accountArbitrationFuture;
    HUAppleMusicAccountModuleController * _appleMusicAccountModuleController;
    UIAlertController * _appleMusicLoadingViewController;
    NADeallocationSentinel * _appleMusicLoadingViewControllerDeallocationSentinel;
    HUPrimaryUserSettingsItemModuleController * _primaryUserModuleController;
}

@property (nonatomic, retain) NAFuture *accountArbitrationFuture;
@property (nonatomic, retain) HUAppleMusicAccountModuleController *appleMusicAccountModuleController;
@property (nonatomic, retain) UIAlertController *appleMusicLoadingViewController;
@property (nonatomic, retain) NADeallocationSentinel *appleMusicLoadingViewControllerDeallocationSentinel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUPrimaryUserSettingsItemModuleController *primaryUserModuleController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_accessorySupportsMultiUser;
- (id)_appleMusicFooterMessage;
- (id)_appleMusicFooterView;
- (id)accountArbitrationFuture;
- (id)appleMusicAccountModuleController;
- (id)appleMusicLoadingViewController;
- (id)appleMusicLoadingViewControllerDeallocationSentinel;
- (void)appleMusicModuleController:(id)arg1 willPresentContext:(id)arg2 account:(id)arg3;
- (void)appleMusicModuleControllerDidUpdateAuthenticationState:(id)arg1;
- (void)appleMusicModuleControllerPresentSignInFlow:(id)arg1;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;
- (id)initWithHFItem:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)itemModuleControllers;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)primaryUserModuleController;
- (void)setAccountArbitrationFuture:(id)arg1;
- (void)setAppleMusicAccountModuleController:(id)arg1;
- (void)setAppleMusicLoadingViewController:(id)arg1;
- (void)setAppleMusicLoadingViewControllerDeallocationSentinel:(id)arg1;
- (void)setPrimaryUserModuleController:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewDidLoad;

@end
