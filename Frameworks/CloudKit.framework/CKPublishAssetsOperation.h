
@interface CKPublishAssetsOperation : CKDatabaseOperation <CKPublishAssetsOperationCallbacks> {
    unsigned long long  _URLOptions;
    id /* block */  _assetPublishedBlock;
    NSDictionary * _fileNamesByAssetFieldNames;
    NSMutableDictionary * _perItemErrorsByRecordID;
    id /* block */  _publishAssetCompletionBlock;
    NSArray * _recordIDs;
    unsigned long long  _requestedTTL;
}

@property (nonatomic) unsigned long long URLOptions;
@property (nonatomic, copy) id /* block */ assetPublishedBlock;
@property (nonatomic, readonly) <CKPublishAssetsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) NSDictionary *fileNamesByAssetFieldNames;
@property (nonatomic, readonly) CKPublishAssetsOperationInfo *operationInfo;
@property (nonatomic, retain) NSMutableDictionary *perItemErrorsByRecordID;
@property (nonatomic, copy) id /* block */ publishAssetCompletionBlock;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic) unsigned long long requestedTTL;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (unsigned long long)URLOptions;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id /* block */)assetPublishedBlock;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id)fileNamesByAssetFieldNames;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleAssetPublishCompletionForRecordID:(id)arg1 publishedAsset:(id)arg2 recordKey:(id)arg3 error:(id)arg4;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithRecordIDs:(id)arg1;
- (id)perItemErrorsByRecordID;
- (id /* block */)publishAssetCompletionBlock;
- (id)recordIDs;
- (unsigned long long)requestedTTL;
- (void)setAssetPublishedBlock:(id /* block */)arg1;
- (void)setFileNamesByAssetFieldNames:(id)arg1;
- (void)setPerItemErrorsByRecordID:(id)arg1;
- (void)setPublishAssetCompletionBlock:(id /* block */)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRequestedTTL:(unsigned long long)arg1;
- (void)setURLOptions:(unsigned long long)arg1;

@end
