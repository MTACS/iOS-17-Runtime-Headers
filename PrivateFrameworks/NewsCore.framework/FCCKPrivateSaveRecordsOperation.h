
@interface FCCKPrivateSaveRecordsOperation : FCCKPrivateDatabaseOperation {
    bool  _canBypassEncryptionRequirement;
    NSArray * _recordsToSave;
    NSArray * _resultSavedRecords;
    long long  _savePolicy;
    id /* block */  _saveRecordsCompletionBlock;
}

@property (nonatomic) bool canBypassEncryptionRequirement;
@property (nonatomic, copy) NSArray *recordsToSave;
@property (nonatomic, retain) NSArray *resultSavedRecords;
@property (nonatomic) long long savePolicy;
@property (nonatomic, copy) id /* block */ saveRecordsCompletionBlock;

- (void).cxx_destruct;
- (bool)canBypassEncryptionRequirement;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)recordsToSave;
- (id)resultSavedRecords;
- (long long)savePolicy;
- (id /* block */)saveRecordsCompletionBlock;
- (void)setCanBypassEncryptionRequirement:(bool)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setResultSavedRecords:(id)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setSaveRecordsCompletionBlock:(id /* block */)arg1;
- (bool)validateOperation;

@end
