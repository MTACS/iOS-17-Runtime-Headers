
@interface FARemoteServiceViewController : UIViewController <FARemoteServiceProtocol, RUIPresentationHandling> {
    FACircleContext * _circleContext;
    bool  _isFlowStarted;
    NSXPCConnection * _lookupConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_dismissAndExit;
- (void)_main_dismissAndExit;
- (void)_presentAsChildViewController:(id)arg1;
- (void)_removeChildViewControllers;
- (void)_showFamilyFlow;
- (void)_showLoadingView;
- (void)dealloc;
- (void)dismissModalRUIController:(id)arg1 completion:(id /* block */)arg2;
- (void)presentModalRUIController:(id)arg1 completion:(id /* block */)arg2;
- (void)replaceModalRUIController:(id)arg1 byController:(id)arg2 completion:(id /* block */)arg3;
- (void)ruiDidDismissAlertController:(id)arg1;
- (void)ruiPresentAlertController:(id)arg1;
- (void)startFlowWithContext:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
