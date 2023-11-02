
@interface CKRepairAssetsOperation : CKDatabaseOperation <CKRepairAssetsOperationCallbacks> {
    NSArray * _assetMetadata;
    NSArray * _assets;
    NSArray * _packageMetadata;
    NSArray * _packages;
    NSMutableDictionary * _perItemErrorsByRecordID;
    id /* block */  _repairAssetsCompletionBlock;
    NSArray * _unavailableAssets;
    NSArray * _unavailablePackages;
    CKUploadRequestConfiguration * _uploadRequestConfiguration;
}

@property (nonatomic, retain) NSArray *assetMetadata;
@property (nonatomic, retain) NSArray *assets;
@property (nonatomic, readonly) <CKRepairAssetsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, readonly) CKRepairAssetsOperationInfo *operationInfo;
@property (nonatomic, retain) NSArray *packageMetadata;
@property (nonatomic, retain) NSArray *packages;
@property (nonatomic, retain) NSMutableDictionary *perItemErrorsByRecordID;
@property (nonatomic, copy) id /* block */ repairAssetsCompletionBlock;
@property (nonatomic, readonly, copy) CKUploadRequestConfiguration *resolvedUploadRequestConfiguration;
@property (nonatomic, retain) NSArray *unavailableAssets;
@property (nonatomic, retain) NSArray *unavailablePackages;
@property (nonatomic, copy) CKUploadRequestConfiguration *uploadRequestConfiguration;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)assetMetadata;
- (id)assets;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleAssetRepairCompletionForRecordID:(id)arg1 error:(id)arg2;
- (bool)hasCKOperationCallbacksSet;
- (id)includedMetadata;
- (id)initWithAssets:(id)arg1 packages:(id)arg2 assetMetadata:(id)arg3 packageMetadata:(id)arg4 unavailableAssets:(id)arg5 unavailablePackages:(id)arg6;
- (id)packageMetadata;
- (id)packages;
- (id)perItemErrorsByRecordID;
- (void)performCKOperation;
- (id /* block */)repairAssetsCompletionBlock;
- (id)resolvedUploadRequestConfiguration;
- (void)setAssetMetadata:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setPackageMetadata:(id)arg1;
- (void)setPackages:(id)arg1;
- (void)setPerItemErrorsByRecordID:(id)arg1;
- (void)setRepairAssetsCompletionBlock:(id /* block */)arg1;
- (void)setUnavailableAssets:(id)arg1;
- (void)setUnavailablePackages:(id)arg1;
- (void)setUploadRequestConfiguration:(id)arg1;
- (id)unavailableAssets;
- (id)unavailablePackages;
- (id)uploadRequestConfiguration;

@end
