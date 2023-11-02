
@protocol CPLUploadPushedChangesTaskDelegate <CPLEngineSyncTaskDelegate>

@required

- (bool)task:(CPLUploadPushedChangesTask *)arg1 checkScopeIsValidInTransaction:(CPLEngineStoreTransaction *)arg2;
- (void)task:(CPLUploadPushedChangesTask *)arg1 noteSuccessfulUpdateInTransaction:(CPLEngineStoreTransaction *)arg2;
- (bool)task:(CPLUploadPushedChangesTask *)arg1 shouldRetryImmediatelyInTransaction:(CPLEngineStoreTransaction *)arg2;
- (bool)task:(CPLUploadPushedChangesTask *)arg1 shouldUploadBatchesWithDropReason:(id*)arg2 shouldQuarantineRecords:(bool*)arg3 inTransaction:(CPLEngineStoreTransaction *)arg4;

@end
