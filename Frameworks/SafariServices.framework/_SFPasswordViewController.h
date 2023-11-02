
@interface _SFPasswordViewController : UIViewController <SFPasswordRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate> {
    _UIAsyncInvocation * _cancelViewServiceRequest;
    <_SFPasswordViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFPasswordViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_addRemoteViewAsChild;
- (void)_connectToService;
- (id)_connectToServiceWithCompletion:(id /* block */)arg1;
- (void)_dismissPasswordViewController;
- (id)_remoteViewController;
- (void)_setUpServiceProxyIfNeeded;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)delegate;
- (id)init;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
