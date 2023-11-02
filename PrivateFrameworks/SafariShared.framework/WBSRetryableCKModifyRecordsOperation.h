
@interface WBSRetryableCKModifyRecordsOperation : WBSRetryableCKDatabaseOperation {
    bool  _atomic;
    NSData * _clientChangeTokenData;
    id /* block */  _modifyRecordsCompletionBlock;
    id /* block */  _perRecordDeleteBlock;
    id /* block */  _perRecordProgressBlock;
    id /* block */  _perRecordSaveBlock;
    NSArray * _recordIDsToDelete;
    NSArray * _recordsToSave;
    long long  _savePolicy;
}

@property (nonatomic) bool atomic;
@property (nonatomic, copy) NSData *clientChangeTokenData;
@property (nonatomic, copy) id /* block */ modifyRecordsCompletionBlock;
@property (nonatomic, copy) id /* block */ perRecordDeleteBlock;
@property (nonatomic, copy) id /* block */ perRecordProgressBlock;
@property (nonatomic, copy) id /* block */ perRecordSaveBlock;
@property (nonatomic, copy) NSArray *recordIDsToDelete;
@property (nonatomic, copy) NSArray *recordsToSave;
@property (nonatomic) long long savePolicy;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)arg1;
- (bool)atomic;
- (id)clientChangeTokenData;
- (id /* block */)modifyRecordsCompletionBlock;
- (id /* block */)perRecordDeleteBlock;
- (id /* block */)perRecordProgressBlock;
- (id /* block */)perRecordSaveBlock;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (long long)savePolicy;
- (void)setAtomic:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setModifyRecordsCompletionBlock:(id /* block */)arg1;
- (void)setPerRecordDeleteBlock:(id /* block */)arg1;
- (void)setPerRecordProgressBlock:(id /* block */)arg1;
- (void)setPerRecordSaveBlock:(id /* block */)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSavePolicy:(long long)arg1;

@end
