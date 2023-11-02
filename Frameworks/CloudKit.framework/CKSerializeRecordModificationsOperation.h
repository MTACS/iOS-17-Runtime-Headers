
@interface CKSerializeRecordModificationsOperation : CKDatabaseOperation <CKSerializeRecordModificationsOperationCallbacks> {
    NSArray * _recordIDsToDelete;
    NSArray * _recordsToSave;
    id /* block */  _serializeCompletionBlock;
    NSData * _serializedModifications;
}

@property (nonatomic, readonly) <CKSerializeRecordModificationsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, readonly) CKSerializeRecordModificationsOperationInfo *operationInfo;
@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSArray *recordsToSave;
@property (nonatomic, copy) id /* block */ serializeCompletionBlock;
@property (nonatomic, copy) NSData *serializedModifications;

+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleSerialization:(id)arg1 error:(id)arg2;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (void)performCKOperation;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (id /* block */)serializeCompletionBlock;
- (id)serializedModifications;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSerializeCompletionBlock:(id /* block */)arg1;
- (void)setSerializedModifications:(id)arg1;

@end
