
@interface WFCaptiveContext : NSObject <WFProviderContext, WFWebSheetViewControllerDelegate> {
    id /* block */  _completionHandler;
    bool  _readyForPresentation;
    id /* block */  _readyForPresentationHandler;
    NSTimer * _timer;
    WFWebSheetViewController * _webSheetViewController;
    <WFNetworkListRecord> * network;
    long long  requestedFields;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <WFNetworkListRecord> *network;
@property (nonatomic) bool readyForPresentation;
@property (nonatomic, copy) id /* block */ readyForPresentationHandler;
@property (nonatomic, readonly) long long requestedFields;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *timer;
@property (nonatomic, retain) WFWebSheetViewController *webSheetViewController;

- (void).cxx_destruct;
- (void)_presentationTimerFired:(id)arg1;
- (void)_readyForPresentation:(id)arg1;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)init;
- (id)network;
- (bool)readyForPresentation;
- (id /* block */)readyForPresentationHandler;
- (long long)requestedFields;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setReadyForPresentation:(bool)arg1;
- (void)setReadyForPresentationHandler:(id /* block */)arg1;
- (void)setTimer:(id)arg1;
- (void)setWebSheetViewController:(id)arg1;
- (id)timer;
- (id)webSheetViewController;
- (void)webSheetViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)webSheetViewControllerContentReadyForPresentation:(id)arg1;

@end
