
@interface CKMapShareURLsToInstalledBundleIDsOperation : CKOperation <CKMapShareURLsToInstalledBundleIDsOperationCallbacks> {
    NSMutableDictionary * _errorsByURL;
    NSMutableArray * _genericURLs;
    id /* block */  _mapBundleIDsCompletionBlock;
    id /* block */  _perShareURLBlock;
    bool  _returnLocalBundlesOnly;
    NSArray * _shareURLs;
    NSMutableArray * _specialURLs;
}

@property (nonatomic, readonly) <CKMapShareURLsToInstalledBundleIDsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSMutableDictionary *errorsByURL;
@property (nonatomic, retain) NSMutableArray *genericURLs;
@property (nonatomic, copy) id /* block */ mapBundleIDsCompletionBlock;
@property (nonatomic, readonly) CKMapShareURLsToInstalledBundleIDsOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perShareURLBlock;
@property (nonatomic) bool returnLocalBundlesOnly;
@property (nonatomic, copy) NSArray *shareURLs;
@property (nonatomic, retain) NSMutableArray *specialURLs;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id)errorsByURL;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)genericURLs;
- (id)getStaticBundleIDsForURLSlug:(id)arg1 withKey:(id)arg2;
- (void)handleBundleIDsFetchedForURL:(id)arg1 appBundleIDs:(id)arg2 daemonBundleIDs:(id)arg3 error:(id)arg4;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithShareURLs:(id)arg1 returnLocalBundlesOnly:(bool)arg2;
- (id /* block */)mapBundleIDsCompletionBlock;
- (id /* block */)perShareURLBlock;
- (void)performCKOperation;
- (bool)returnLocalBundlesOnly;
- (id)selectLocalBundleIDs:(id)arg1;
- (void)setErrorsByURL:(id)arg1;
- (void)setGenericURLs:(id)arg1;
- (void)setMapBundleIDsCompletionBlock:(id /* block */)arg1;
- (void)setPerShareURLBlock:(id /* block */)arg1;
- (void)setReturnLocalBundlesOnly:(bool)arg1;
- (void)setShareURLs:(id)arg1;
- (void)setSpecialURLs:(id)arg1;
- (id)shareURLs;
- (id)specialURLs;

@end
