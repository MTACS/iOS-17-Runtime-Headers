
@interface CKDMapShareURLsToInstalledBundleIDsOperation : CKDOperation {
    id /* block */  _bundleIDsFetchedBlock;
    NSMutableDictionary * _shareMetadatasByURL;
    NSMutableArray * _shareURLs;
}

@property (nonatomic, copy) id /* block */ bundleIDsFetchedBlock;
@property (nonatomic, retain) <CKMapShareURLsToInstalledBundleIDsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSMutableDictionary *shareMetadatasByURL;
@property (nonatomic, retain) NSMutableArray *shareURLs;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_fetchRegisteredBundleIDs;
- (void)_fetchShareMetadata;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_performCallbackForURL:(id)arg1 withAppBundleIDs:(id)arg2 daemonBundleIDs:(id)arg3 error:(id)arg4;
- (id)activityCreate;
- (id /* block */)bundleIDsFetchedBlock;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (int)operationType;
- (void)setBundleIDsFetchedBlock:(id /* block */)arg1;
- (void)setShareMetadatasByURL:(id)arg1;
- (void)setShareURLs:(id)arg1;
- (id)shareMetadatasByURL;
- (id)shareURLs;

@end
