
@interface WBSRetryableCKModifyRecordZonesOperation : WBSRetryableCKDatabaseOperation {
    id /* block */  _modifyRecordZonesCompletionBlock;
    id /* block */  _perRecordZoneDeleteBlock;
    id /* block */  _perRecordZoneSaveBlock;
    NSArray * _recordZoneIDsToDelete;
    NSArray * _recordZonesToSave;
}

@property (nonatomic, copy) id /* block */ modifyRecordZonesCompletionBlock;
@property (nonatomic, copy) id /* block */ perRecordZoneDeleteBlock;
@property (nonatomic, copy) id /* block */ perRecordZoneSaveBlock;
@property (nonatomic, copy) NSArray *recordZoneIDsToDelete;
@property (nonatomic, copy) NSArray *recordZonesToSave;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)arg1;
- (id /* block */)modifyRecordZonesCompletionBlock;
- (id /* block */)perRecordZoneDeleteBlock;
- (id /* block */)perRecordZoneSaveBlock;
- (id)recordZoneIDsToDelete;
- (id)recordZonesToSave;
- (void)setModifyRecordZonesCompletionBlock:(id /* block */)arg1;
- (void)setPerRecordZoneDeleteBlock:(id /* block */)arg1;
- (void)setPerRecordZoneSaveBlock:(id /* block */)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;

@end
