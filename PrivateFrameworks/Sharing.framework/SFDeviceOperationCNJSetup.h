
@interface SFDeviceOperationCNJSetup : NSObject <WSWebSheetViewDelegate> {
    SKSetupCaptiveNetworkJoinClient * _cnjClient;
    SKEventCaptiveNetworkPresent * _cnjEvent;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _isSetup;
    bool  _isShowingWebSheet;
    double  _metricTotalSeconds;
    UIViewController * _presentingViewController;
    id /* block */  _promptForConfirmationHandler;
    SFSession * _sfSession;
    unsigned long long  _startTicks;
    long long  _webSheetResult;
    WSWebSheetViewController * _webSheetViewController;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool isSetup;
@property (nonatomic, readonly) double metricTotalSeconds;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, copy) id /* block */ promptForConfirmationHandler;
@property (nonatomic, retain) SFSession *sfSession;

- (void).cxx_destruct;
- (void)_complete:(id)arg1;
- (void)_handleCaptiveNetworkPresentEvent:(id)arg1;
- (void)_handleCompletedEventWithError:(id)arg1;
- (void)_showCaptiveSheet:(id)arg1;
- (void)_startClient;
- (void)activate;
- (id /* block */)completionHandler;
- (id)dispatchQueue;
- (void)handleCompleteNotificationWithRedirectURLtype:(long long)arg1 result:(long long)arg2;
- (void)handleDismissal;
- (void)handleWebNavigationWithCompletionHandler:(id /* block */)arg1;
- (void)invalidate;
- (bool)isSetup;
- (double)metricTotalSeconds;
- (id)presentingViewController;
- (id /* block */)promptForConfirmationHandler;
- (void)scrapeCredentialsUsingPOSTMessage:(id)arg1 loginURL:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setIsSetup:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPromptForConfirmationHandler:(id /* block */)arg1;
- (void)setSfSession:(id)arg1;
- (id)sfSession;
- (void)showWebSheet;

@end
