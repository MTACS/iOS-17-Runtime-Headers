
@interface CKMarkAssetBrokenOperation : CKDatabaseOperation <CKMarkAssetBrokenOperationCallbacks> {
    bool  _bypassPCSEncryptionForTouchRepairZone;
    NSString * _field;
    long long  _listIndex;
    id /* block */  _markAssetBrokenCompletionBlock;
    CKRecordID * _recordID;
    CKRecordID * _repairRecordID;
    bool  _simulateCorruptAsset;
    bool  _touchRepairZone;
    CKUploadRequestConfiguration * _uploadRequestConfiguration;
    bool  _writeRepairRecord;
}

@property (nonatomic) bool bypassPCSEncryptionForTouchRepairZone;
@property (nonatomic, readonly) <CKMarkAssetBrokenOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSString *field;
@property (nonatomic) long long listIndex;
@property (nonatomic, copy) id /* block */ markAssetBrokenCompletionBlock;
@property (nonatomic, readonly) CKMarkAssetBrokenOperationInfo *operationInfo;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, retain) CKRecordID *repairRecordID;
@property (nonatomic, readonly, copy) CKUploadRequestConfiguration *resolvedUploadRequestConfiguration;
@property (nonatomic) bool simulateCorruptAsset;
@property (nonatomic) bool touchRepairZone;
@property (nonatomic, copy) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (nonatomic) bool writeRepairRecord;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (bool)bypassPCSEncryptionForTouchRepairZone;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id)field;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleMarkAssetBrokenCompletionWithRepairRecordID:(id)arg1 error:(id)arg2;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithNoRecord;
- (id)initWithRecordID:(id)arg1 field:(id)arg2;
- (id)initWithRecordID:(id)arg1 field:(id)arg2 listIndex:(long long)arg3;
- (long long)listIndex;
- (id /* block */)markAssetBrokenCompletionBlock;
- (id)recordID;
- (id)repairRecordID;
- (id)resolvedUploadRequestConfiguration;
- (void)setBypassPCSEncryptionForTouchRepairZone:(bool)arg1;
- (void)setField:(id)arg1;
- (void)setListIndex:(long long)arg1;
- (void)setMarkAssetBrokenCompletionBlock:(id /* block */)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRepairRecordID:(id)arg1;
- (void)setSimulateCorruptAsset:(bool)arg1;
- (void)setTouchRepairZone:(bool)arg1;
- (void)setUploadRequestConfiguration:(id)arg1;
- (void)setWriteRepairRecord:(bool)arg1;
- (bool)simulateCorruptAsset;
- (bool)touchRepairZone;
- (id)uploadRequestConfiguration;
- (bool)writeRepairRecord;

@end
