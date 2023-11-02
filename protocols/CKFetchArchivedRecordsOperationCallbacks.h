
@protocol CKFetchArchivedRecordsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleChangeSetCompletionForRecordZoneID:(void *)arg1 serverChangeToken:(void *)arg2 archivedRecordStatus:(void *)arg3 error:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: CKRecordZoneID *, CKServerChangeToken *, long long, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleFetchForRecordID:(CKRecordID *)arg1 record:(CKRecord *)arg2 error:(NSError *)arg3;

@end
