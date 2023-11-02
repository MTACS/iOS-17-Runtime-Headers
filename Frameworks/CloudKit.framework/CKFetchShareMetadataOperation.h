
@interface CKFetchShareMetadataOperation : CKOperation <CKFetchShareMetadataOperationCallbacks> {
    NSMutableDictionary * _errorsByURL;
    id /* block */  _fetchShareMetadataCompletionBlock;
    id /* block */  _fetchShareMetadataCompletionBlock_wrapper;
    bool  _overwriteContainerPCSServiceIfManatee;
    NSMutableSet * _packagesToDestroy;
    id /* block */  _perShareMetadataBlock;
    id /* block */  _perShareMetadataBlock_wrapper;
    NSArray * _rootRecordDesiredKeys;
    NSDictionary * _shareInvitationTokensByShareURL;
    NSArray * _shareURLs;
    bool  _shouldFetchRootRecord;
    bool  _skipShareDecryption;
}

@property (nonatomic, readonly) <CKFetchShareMetadataOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSMutableDictionary *errorsByURL;
@property (nonatomic, copy) id /* block */ fetchShareMetadataCompletionBlock;
@property (nonatomic, copy) id /* block */ fetchShareMetadataCompletionBlock_wrapper;
@property (nonatomic, readonly) CKFetchShareMetadataOperationInfo *operationInfo;
@property (nonatomic) bool overwriteContainerPCSServiceIfManatee;
@property (nonatomic, retain) NSMutableSet *packagesToDestroy;
@property (nonatomic, copy) id /* block */ perShareMetadataBlock;
@property (nonatomic, copy) id /* block */ perShareMetadataBlock_wrapper;
@property (nonatomic, copy) NSArray *rootRecordDesiredKeys;
@property (nonatomic, copy) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic, copy) NSArray *shareURLs;
@property (nonatomic) bool shouldFetchRootRecord;
@property (nonatomic) bool skipShareDecryption;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (bool)claimPackagesInRecord:(id)arg1 error:(id*)arg2;
- (id)errorsByURL;
- (id /* block */)fetchShareMetadataCompletionBlock;
- (id /* block */)fetchShareMetadataCompletionBlock_wrapper;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleShareMetadataFetchForURL:(id)arg1 shareMetadata:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithShareURLs:(id)arg1;
- (id)initWithShareURLs:(id)arg1 invitationTokensByShareURL:(id)arg2;
- (bool)overwriteContainerPCSServiceIfManatee;
- (id)packagesToDestroy;
- (id /* block */)perShareMetadataBlock;
- (id /* block */)perShareMetadataBlock_wrapper;
- (id)rootRecordDesiredKeys;
- (void)setErrorsByURL:(id)arg1;
- (void)setFetchShareMetadataCompletionBlock:(id /* block */)arg1;
- (void)setFetchShareMetadataCompletionBlockIVar:(id /* block */)arg1;
- (void)setFetchShareMetadataCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setOverwriteContainerPCSServiceIfManatee:(bool)arg1;
- (void)setPackagesToDestroy:(id)arg1;
- (void)setPerShareMetadataBlock:(id /* block */)arg1;
- (void)setPerShareMetadataBlock_wrapper:(id /* block */)arg1;
- (void)setRootRecordDesiredKeys:(id)arg1;
- (void)setShareInvitationTokensByShareURL:(id)arg1;
- (void)setShareURLs:(id)arg1;
- (void)setShouldFetchRootRecord:(bool)arg1;
- (void)setSkipShareDecryption:(bool)arg1;
- (id)shareInvitationTokensByShareURL;
- (id)shareURLs;
- (bool)shouldFetchRootRecord;
- (bool)skipShareDecryption;

@end
