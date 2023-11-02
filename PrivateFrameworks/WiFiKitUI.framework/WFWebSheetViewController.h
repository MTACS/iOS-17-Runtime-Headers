
@interface WFWebSheetViewController : UIViewController <WFNetworkView, WFRemoteWebSheetViewControllerDelegate> {
    _UIAsyncInvocation * _cancelServiceInvocation;
    <WFWebSheetViewControllerDelegate> * _delegate;
    WFRemoteWebSheetViewController * _remoteViewController;
}

@property (nonatomic, retain) _UIAsyncInvocation *cancelServiceInvocation;
@property (nonatomic) <WFWebSheetViewControllerDelegate> *delegate;
@property (nonatomic, retain) WFRemoteWebSheetViewController *remoteViewController;
@property (nonatomic, readonly) bool wantsModalPresentation;

- (void).cxx_destruct;
- (void)_finishSetupWithError:(id)arg1;
- (void)_requestRemoteViewController;
- (void)_showRemoteViewController;
- (id)cancelServiceInvocation;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)remoteViewController;
- (void)remoteWebSheetViewController:(id)arg1 handleEvent:(unsigned long long)arg2 context:(id)arg3;
- (void)setCancelServiceInvocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (bool)wantsModalPresentation;
- (void)webSheetViewControllerServiceShouldTerminate;

@end
