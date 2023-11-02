
@interface WBSSiteMetadataManager : NSObject <WBSSiteMetadataProviderDelegate> {
    NSCountedSet * _activeOperations;
    NSURL * _injectedBundleURL;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSOperationQueue * _operationQueue;
    WKProcessPool * _processPool;
    NSMutableDictionary * _requestsToRequestInfos;
    NSMutableSet * _reusableWebViews;
    NSMutableArray * _siteMetadataProviders;
    NSObject<OS_dispatch_queue> * _siteMetadataProvidersAccessQueue;
    NSMutableSet * _tokens;
    NSMutableSet * _usedWebViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *injectedBundleURL;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void).cxx_destruct;
- (void)_discardWebViewSoon:(id)arg1;
- (long long)_highestRequestPriorityForRequest:(id)arg1;
- (void)_internalCancelRequestWithToken:(id)arg1;
- (void)_internalSetPriority:(long long)arg1 ofRequestWithToken:(id)arg2;
- (id)_makeWebViewOfSize:(struct CGSize { double x1; double x2; })arg1 withConfiguration:(id)arg2;
- (unsigned long long)_numberOfConcurrentRequests;
- (id)_popReusableWebView;
- (id)_processPool;
- (id)_providerForRequest:(id)arg1;
- (void)_registerToken:(id)arg1 withProvider:(id)arg2;
- (void)_reprioritizeOperationForRequest:(id)arg1;
- (bool)_requestIsCancelledForToken:(id)arg1;
- (void)_scheduleDelayedResponse:(id)arg1 forRequestToken:(id)arg2;
- (void)_sendRequiresDownloadResponse:(id)arg1 toResponseHandlersForRequest:(id)arg2;
- (void)_sendResponse:(id)arg1 toResponseHandlersForRequest:(id)arg2 didReceiveNewData:(bool)arg3;
- (void)_setUpOperationForRequest:(id)arg1 withSiteMetadataProvider:(id)arg2 usingOperationBlock:(id /* block */)arg3;
- (bool)_updateOperationForRequestIfPossible:(id)arg1;
- (void)cancelRequestWithToken:(id)arg1;
- (void)cancelRequestsWithTokens:(id)arg1;
- (void)cancelRequestsWithTokens:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)emptyProviderCaches;
- (void)emptyProviderCachesIncludingFavicons:(bool)arg1;
- (id)init;
- (id)initWithInjectedBundleURL:(id)arg1;
- (id)injectedBundleURL;
- (bool)isSuspended;
- (void)preloadRequest:(id)arg1 withPriority:(long long)arg2 responseHandler:(id /* block */)arg3;
- (void)preloadRequests:(id)arg1 withPriority:(long long)arg2 responseHandler:(id /* block */)arg3;
- (id)registerOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(id /* block */)arg3;
- (id)registerRequest:(id)arg1 priority:(long long)arg2 responseHandler:(id /* block */)arg3;
- (void)registerSiteMetadataProvider:(id)arg1;
- (void)savePendingProviderChangesBeforeTermination;
- (void)savePendingProviderChangesWithCompletion:(id /* block */)arg1;
- (void)setPriority:(long long)arg1 ofRequestWithToken:(id)arg2;
- (void)setPriority:(long long)arg1 ofRequestsWithTokens:(id)arg2;
- (void)setSuspended:(bool)arg1;
- (void)siteMetadataProvider:(id)arg1 cancelRequestsWithTokens:(id)arg2;
- (void)siteMetadataProvider:(id)arg1 didFinishUsingWebView:(id)arg2;
- (void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3 beginOperationUsingBlock:(id /* block */)arg4;
- (void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 ofType:(long long)arg3 didReceiveNewData:(bool)arg4 forRequest:(id)arg5;
- (void)siteMetadataProvider:(id)arg1 getWebViewOfSize:(struct CGSize { double x1; double x2; })arg2 withConfiguration:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)siteMetadataProvider:(id)arg1 registerOneTimeRequest:(id)arg2 priority:(long long)arg3 responseHandler:(id /* block */)arg4;
- (id)siteMetadataProvider:(id)arg1 registerRequest:(id)arg2 priority:(long long)arg3 responseHandler:(id /* block */)arg4;

@end
