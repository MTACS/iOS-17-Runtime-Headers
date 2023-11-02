
@interface CKDMovePhotosOperation : CKDModifyRecordsOperation {
    NSDictionary * _moveChangesByDestinationRecordID;
    id /* block */  _moveCompletionBlock;
    long long  _sourceDatabaseScope;
    CKRecordZoneID * _sourceZoneID;
}

@property (nonatomic, retain) <CKMovePhotosOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) NSDictionary *moveChangesByDestinationRecordID;
@property (nonatomic, copy) id /* block */ moveCompletionBlock;
@property (nonatomic) long long sourceDatabaseScope;
@property (nonatomic, copy) CKRecordZoneID *sourceZoneID;

- (void).cxx_destruct;
- (id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 recordIDsToDeleteToSigningPCSIdentity:(id)arg4 handlersByRecordID:(id)arg5 sendMergeableDeltas:(bool)arg6;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordMoved:(id)arg1 handler:(id)arg2 responseCode:(id)arg3 recordForOplockFailure:(id)arg4 destinationServerRecord:(id)arg5 moveMarkerServerRecord:(id)arg6;
- (void)_reallyHandleRecordMoved:(id)arg1 handler:(id)arg2 responseCode:(id)arg3 recordForOplockFailure:(id)arg4 destinationServerRecord:(id)arg5 moveMarkerServerRecord:(id)arg6;
- (id)activityCreate;
- (void)callbackWithMetadata:(id)arg1 error:(id)arg2;
- (id)handlerForDeleteWithRecordID:(id)arg1;
- (id)handlerForSaveWithRecord:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (void)moveCallbackWithMetadata:(id)arg1 error:(id)arg2;
- (id)moveChangesByDestinationRecordID;
- (id /* block */)moveCompletionBlock;
- (int)operationType;
- (void)setMoveChangesByDestinationRecordID:(id)arg1;
- (void)setMoveCompletionBlock:(id /* block */)arg1;
- (void)setSourceDatabaseScope:(long long)arg1;
- (void)setSourceZoneID:(id)arg1;
- (long long)sourceDatabaseScope;
- (id)sourceZoneID;

@end
