
@interface PKProxCardAlertViewController : SBUIRemoteAlertServiceViewController <PRXFlowDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecureForRemoteViewService;

- (bool)_canShowWhileLocked;
- (void)_dismiss;
- (id)_proxCardControllerForRequest:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleButtonActions:(id)arg1;
- (void)proxCardFlowDidDismiss;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;

@end
