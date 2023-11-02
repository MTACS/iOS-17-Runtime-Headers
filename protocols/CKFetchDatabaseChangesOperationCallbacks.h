
@protocol CKFetchDatabaseChangesOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleChangeForRecordZoneID:(CKRecordZoneID *)arg1;
- (void)handleChangeSetCompletionWithServerChangeToken:(void *)arg1 databaseChangesStatus:(void *)arg2 error:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: CKServerChangeToken *, long long, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleDeleteForRecordZoneID:(CKRecordZoneID *)arg1;
- (void)handleEncryptedDataResetForRecordZoneID:(CKRecordZoneID *)arg1;
- (void)handlePurgeForRecordZoneID:(CKRecordZoneID *)arg1;

@end
