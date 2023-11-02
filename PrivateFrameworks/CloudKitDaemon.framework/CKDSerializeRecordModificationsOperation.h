
@interface CKDSerializeRecordModificationsOperation : CKDDatabaseOperation {
    NSArray * _recordIDsToDelete;
    NSArray * _recordsToSave;
    id /* block */  _serializeCompletionBlock;
    NSData * _serializedModifications;
    CKDProtocolTranslator * _translator;
}

@property (nonatomic, retain) <CKSerializeRecordModificationsOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, retain) NSArray *recordsToSave;
@property (nonatomic, copy) id /* block */ serializeCompletionBlock;
@property (retain) NSData *serializedModifications;
@property (nonatomic) unsigned long long state;
@property (retain) CKDProtocolTranslator *translator;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_preflightRecords;
- (void)_serialize;
- (void)_setupTranslator;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (id /* block */)serializeCompletionBlock;
- (id)serializedModifications;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSerializeCompletionBlock:(id /* block */)arg1;
- (void)setSerializedModifications:(id)arg1;
- (void)setTranslator:(id)arg1;
- (id)translator;
- (bool)validateAgainstLiveContainer:(id)arg1 error:(id*)arg2;

@end
