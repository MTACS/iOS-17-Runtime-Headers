
@interface CKDDatabaseOperation : CKDOperation {
    long long  _databaseScope;
}

@property long long databaseScope;

- (id)CKStatusReportProperties;
- (void)_encryptMergeableDeltas:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)activityCreate;
- (id)analyticsPayload;
- (long long)databaseScope;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)setDatabaseScope:(long long)arg1;
- (void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2;
- (void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 container:(id)arg4 operationConfigurationBlock:(id /* block */)arg5;
- (bool)supportsClearAssetEncryption;

@end
