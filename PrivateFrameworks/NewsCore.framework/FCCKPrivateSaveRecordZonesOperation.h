
@interface FCCKPrivateSaveRecordZonesOperation : FCCKPrivateDatabaseOperation {
    bool  _canBypassEncryptionRequirement;
    NSArray * _recordZonesToSave;
    NSArray * _resultSavedRecordZones;
    id /* block */  _saveRecordZonesCompletionBlock;
}

@property (nonatomic) bool canBypassEncryptionRequirement;
@property (nonatomic, copy) NSArray *recordZonesToSave;
@property (nonatomic, retain) NSArray *resultSavedRecordZones;
@property (nonatomic, copy) id /* block */ saveRecordZonesCompletionBlock;

- (void).cxx_destruct;
- (bool)canBypassEncryptionRequirement;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)recordZonesToSave;
- (id)resultSavedRecordZones;
- (id /* block */)saveRecordZonesCompletionBlock;
- (void)setCanBypassEncryptionRequirement:(bool)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (void)setResultSavedRecordZones:(id)arg1;
- (void)setSaveRecordZonesCompletionBlock:(id /* block */)arg1;
- (bool)validateOperation;

@end
