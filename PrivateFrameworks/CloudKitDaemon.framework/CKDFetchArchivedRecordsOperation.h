
@interface CKDFetchArchivedRecordsOperation : CKDFetchBatchedRecordsOperation <CKDOperationPipelining> {
    id /* block */  _recordFetchedBlock;
    id /* block */  _serverChangeTokenUpdatedBlock;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) <CKFetchArchivedRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *pipeliningDescription;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, copy) id /* block */ serverChangeTokenUpdatedBlock;
@property (readonly) Class superclass;

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
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (int)operationType;
- (id)pipeliningDescription;
- (id /* block */)recordFetchedBlock;
- (id /* block */)serverChangeTokenUpdatedBlock;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setServerChangeTokenUpdatedBlock:(id /* block */)arg1;

@end
