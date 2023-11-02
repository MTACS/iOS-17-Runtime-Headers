
@interface CKDeserializeRecordModificationsOperation : CKDatabaseOperation <CKDeserializeRecordModificationsOperationCallbacks> {
    id /* block */  _deserializeCompletionBlock;
    NSArray * _recordIDsToDelete;
    NSArray * _recordsToSave;
    NSData * _serializedModifications;
}

@property (nonatomic, readonly) <CKDeserializeRecordModificationsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ deserializeCompletionBlock;
@property (nonatomic, readonly) CKDeserializeRecordModificationsOperationInfo *operationInfo;
@property (nonatomic, copy) NSArray *recordIDsToDelete;
@property (nonatomic, copy) NSArray *recordsToSave;
@property (nonatomic, retain) NSData *serializedModifications;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id /* block */)deserializeCompletionBlock;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleDeserializationOfSaves:(id)arg1 deletes:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithSerializedModifications:(id)arg1;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (id)serializedModifications;
- (void)setDeserializeCompletionBlock:(id /* block */)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSerializedModifications:(id)arg1;

@end
