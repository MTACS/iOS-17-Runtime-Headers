
@interface CKDFetchRecordZoneChangesOperation : CKDFetchBatchedRecordsOperation {
    long long  _changeTypes;
    bool  _clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
    id /* block */  _recordChangedBlock;
    id /* block */  _recordDeletedBlock;
    NSData * _resultClientChangeTokenData;
    CKServerChangeToken * _resultServerChangeToken;
    long long  _resultStatus;
    id /* block */  _serverChangeTokenUpdatedBlock;
    NSDictionary * _supplementalChangeTokenByZoneID;
}

@property (nonatomic) long long changeTypes;
@property (nonatomic) bool clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
@property (nonatomic, copy) id /* block */ recordChangedBlock;
@property (nonatomic, copy) id /* block */ recordDeletedBlock;
@property (nonatomic, retain) NSData *resultClientChangeTokenData;
@property (nonatomic, retain) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) long long resultStatus;
@property (nonatomic, copy) id /* block */ serverChangeTokenUpdatedBlock;
@property (nonatomic, retain) NSDictionary *supplementalChangeTokenByZoneID;

- (void).cxx_destruct;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_noteChangedRecordWithID:(id)arg1 record:(id)arg2 error:(id)arg3;
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;
- (void)_noteOperationBeginning;
- (void)_noteOperationEnding;
- (void)_noteOperationFinishedBlockEnd;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (id)activityCreate;
- (id)analyticsPayload;
- (long long)changeTypes;
- (bool)clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (int)operationType;
- (id)pipeliningDescription;
- (id /* block */)recordChangedBlock;
- (id /* block */)recordDeletedBlock;
- (id)resultClientChangeTokenData;
- (id)resultServerChangeToken;
- (long long)resultStatus;
- (id /* block */)serverChangeTokenUpdatedBlock;
- (void)setChangeTypes:(long long)arg1;
- (void)setClientIsUsingLegacyCKFetchRecordChangesOperationAPI:(bool)arg1;
- (void)setRecordChangedBlock:(id /* block */)arg1;
- (void)setRecordDeletedBlock:(id /* block */)arg1;
- (void)setResultClientChangeTokenData:(id)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (void)setResultStatus:(long long)arg1;
- (void)setServerChangeTokenUpdatedBlock:(id /* block */)arg1;
- (void)setSupplementalChangeTokenByZoneID:(id)arg1;
- (id)supplementalChangeTokenByZoneID;

@end
