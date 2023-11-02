
@interface TPSMiniTipContentManager : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    TPSServiceConnection * _serviceProxy;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) TPSServiceConnection *serviceProxy;

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (id /* block */)_contentWithContentIDCompletionOnClientQueue:(id /* block */)arg1;
- (void)_performSyncWithProxyHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_performWithProxyHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)clientQueue;
- (void)contentWithContentIdentifiers:(id)arg1 bundleID:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)hintDismissedForIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3 reason:(long long)arg4;
- (void)hintDisplayedForIdentifier:(id)arg1 correlationID:(id)arg2 context:(id)arg3;
- (id)init;
- (void)invalidate;
- (void)personalizationFailedForContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3;
- (void)restartTrackingForContentIdentifiers:(id)arg1;
- (id)serviceProxy;
- (void)setClientQueue:(id)arg1;
- (void)setServiceProxy:(id)arg1;
- (void)validateAndPrepareContentForDisplay:(id)arg1 bundleID:(id)arg2 context:(id)arg3 synchronous:(bool)arg4 skipUsageCheck:(bool)arg5 completionHandler:(id /* block */)arg6;

@end
