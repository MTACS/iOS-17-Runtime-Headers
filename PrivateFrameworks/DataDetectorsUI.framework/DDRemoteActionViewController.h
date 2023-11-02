
@interface DDRemoteActionViewController : _UIRemoteViewController <DDRemoteActionPresenter, _UIRemoteViewControllerContaining> {
    DDAction * _action;
    DDActionController * _actionController;
    bool  _proxyConfigured;
    bool  _receivedActionDidFinish;
    bool  _waitingForRemoteConfiguration;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic) DDAction *action;
@property (nonatomic) DDActionController *actionController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)controllerIsAvailable;
+ (id)exportedInterface;
+ (id)prepareViewController:(id)arg1 forAction:(id)arg2 actionController:(id)arg3;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (void)_prepareForAction:(id)arg1 inActionController:(id)arg2;
- (id)action;
- (void)actionCanBeCancelledExternally:(bool)arg1;
- (id)actionController;
- (void)actionDidFinishShouldDismiss:(bool)arg1;
- (void)adaptForPresentationInPopover:(bool)arg1;
- (void)getIsBeingPresentedInPopover:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setAction:(id)arg1;
- (void)setActionController:(id)arg1;
- (void)viewControllerReady;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
