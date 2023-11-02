
@interface CKModifyRecordZonesOperation : CKDatabaseOperation <CKModifyRecordZonesOperationCallbacks> {
    NSMutableArray * _deletedRecordZoneIDs;
    bool  _markZonesAsUserPurged;
    id /* block */  _modifyRecordZonesCompletionBlock;
    id /* block */  _modifyRecordZonesCompletionBlock_wrapper;
    id /* block */  _perRecordZoneDeleteBlock;
    id /* block */  _perRecordZoneDeleteBlock_wrapper;
    id /* block */  _perRecordZoneSaveBlock;
    id /* block */  _perRecordZoneSaveBlock_wrapper;
    NSMutableDictionary * _recordZoneErrors;
    NSArray * _recordZoneIDsToDelete;
    NSMutableDictionary * _recordZonesByZoneIDs;
    NSArray * _recordZonesToSave;
    NSMutableArray * _savedRecordZones;
}

@property (nonatomic, readonly) <CKModifyRecordZonesOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic) bool markZonesAsUserPurged;
@property (nonatomic, copy) id /* block */ modifyRecordZonesCompletionBlock;
@property (nonatomic, copy) id /* block */ modifyRecordZonesCompletionBlock_wrapper;
@property (nonatomic, readonly) CKModifyRecordZonesOperationInfo *operationInfo;
@property (nonatomic, copy) id /* block */ perRecordZoneDeleteBlock;
@property (nonatomic, copy) id /* block */ perRecordZoneDeleteBlock_wrapper;
@property (nonatomic, copy) id /* block */ perRecordZoneSaveBlock;
@property (nonatomic, copy) id /* block */ perRecordZoneSaveBlock_wrapper;
@property (nonatomic, copy) NSArray *recordZoneIDsToDelete;
@property (nonatomic, copy) NSArray *recordZonesToSave;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleDeleteForRecordZoneID:(id)arg1 error:(id)arg2;
- (void)handleSaveForRecordZoneID:(id)arg1 recordZone:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (bool)markZonesAsUserPurged;
- (id /* block */)modifyRecordZonesCompletionBlock;
- (id /* block */)modifyRecordZonesCompletionBlock_wrapper;
- (id /* block */)perRecordZoneDeleteBlock;
- (id /* block */)perRecordZoneDeleteBlock_wrapper;
- (id /* block */)perRecordZoneSaveBlock;
- (id /* block */)perRecordZoneSaveBlock_wrapper;
- (void)performCKOperation;
- (id)recordZoneIDsToDelete;
- (id)recordZonesToSave;
- (id)relevantZoneIDs;
- (void)setMarkZonesAsUserPurged:(bool)arg1;
- (void)setModifyRecordZonesCompletionBlock:(id /* block */)arg1;
- (void)setModifyRecordZonesCompletionBlockIVar:(id /* block */)arg1;
- (void)setModifyRecordZonesCompletionBlock_wrapper:(id /* block */)arg1;
- (void)setPerRecordZoneDeleteBlock:(id /* block */)arg1;
- (void)setPerRecordZoneDeleteBlock_wrapper:(id /* block */)arg1;
- (void)setPerRecordZoneSaveBlock:(id /* block */)arg1;
- (void)setPerRecordZoneSaveBlock_wrapper:(id /* block */)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;

@end
