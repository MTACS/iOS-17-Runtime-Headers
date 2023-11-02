
@interface CKDDeserializeRecordModificationsOperation : CKDDatabaseOperation {
    id /* block */  _deserializeCompletionBlock;
    NSArray * _recordIDsToDelete;
    NSArray * _recordsToSave;
    NSData * _serializedModifications;
    CKDProtocolTranslator * _translator;
}

@property (nonatomic, retain) <CKDeserializeRecordModificationsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) id /* block */ deserializeCompletionBlock;
@property (retain) NSArray *recordIDsToDelete;
@property (retain) NSArray *recordsToSave;
@property (nonatomic, retain) NSData *serializedModifications;
@property (nonatomic) unsigned long long state;
@property (retain) CKDProtocolTranslator *translator;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_deserialize;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_postflightRecords;
- (void)_setupTranslator;
- (id)activityCreate;
- (id /* block */)deserializeCompletionBlock;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (id)serializedModifications;
- (void)setDeserializeCompletionBlock:(id /* block */)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSerializedModifications:(id)arg1;
- (void)setTranslator:(id)arg1;
- (id)translator;
- (bool)validateAgainstLiveContainer:(id)arg1 error:(id*)arg2;

@end
