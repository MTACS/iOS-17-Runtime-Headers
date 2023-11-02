
@interface _SFSafariViewControllerPrewarmingSession : NSObject <SFBrowserRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate> {
    _UIAsyncInvocation * _cancelViewServiceRequest;
    SFBrowserRemoteViewController * _remoteViewController;
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> * _serviceProxy;
    bool  _suspended;
    NSHashTable * _tokens;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SFBrowserRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

+ (id)_sharedSessionCreateIfNeeded:(bool)arg1;
+ (id)sharedSession;
+ (id)sharedSessionIfExists;

- (void).cxx_destruct;
- (void)_connectToService;
- (void)_disconnectFromService;
- (bool)_hasValidTokens;
- (void)_resume;
- (void)_suspend;
- (id)_validTokens;
- (void)dealloc;
- (id)init;
- (id)prewarmConnectionsToURLs:(id)arg1;
- (id)remoteViewController;
- (void)remoteViewController:(id)arg1 didFinishInitialLoad:(bool)arg2;
- (void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;
- (void)remoteViewController:(id)arg1 fetchActivityViewControllerInfoForURL:(id)arg2 title:(id)arg3;
- (void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)remoteViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;
- (void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(bool)arg2;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewControllerDidLoadWebView:(id)arg1;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)restart;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)tokenWithIDDidInvalidate:(unsigned long long)arg1;

@end
