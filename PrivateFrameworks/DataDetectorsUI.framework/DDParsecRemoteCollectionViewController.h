
@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface> {
    <DDParsecHostVCInterface> * _hostSideDelegate;
    bool  _receivedInteractionDidFinish;
}

@property <DDParsecHostVCInterface> *hostSideDelegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)canBecomeFirstResponder;
- (void)getStatusBarHidden:(id /* block */)arg1;
- (id)hostSideDelegate;
- (void)interactionEnded;
- (void)interactionEndedWithPunchout:(bool)arg1;
- (void)loadReportAnIssueImage:(id /* block */)arg1;
- (void)openParsecURL:(id)arg1;
- (void)openTrailerPunchout:(id)arg1;
- (void)performClientQueryWithServerAccessPermitted:(bool)arg1 localSearchPermitted:(bool)arg2;
- (void)performClientTextQueryWithTerm:(id)arg1 queryId:(unsigned long long)arg2 sessionId:(id)arg3 userAgent:(id)arg4 reply:(id /* block */)arg5;
- (void)remoteVCIsReady;
- (void)reportAnIssueWithReportIdentifier:(id)arg1 sfReportData:(id)arg2;
- (void)setHostSideDelegate:(id)arg1;
- (void)showingErrorView:(bool)arg1;
- (void)showingFTE:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
