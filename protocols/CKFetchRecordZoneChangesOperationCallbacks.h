
@protocol CKFetchRecordZoneChangesOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleChangeForRecordID:(CKRecordID *)arg1 record:(CKRecord *)arg2 error:(NSError *)arg3;
- (void)handleChangeSetCompletionForRecordZoneID:(void *)arg1 serverChangeToken:(void *)arg2 clientChangeTokenData:(void *)arg3 recordChangesStatus:(void *)arg4 hasPendingArchivedRecords:(void *)arg5 syncObligationZoneIDs:(void *)arg6 error:(void *)arg7 reply:(void *)arg8; // needs 8 arg types, found 13: CKRecordZoneID *, CKServerChangeToken *, NSData *, long long, bool, NSSet *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleDeleteForRecordID:(CKRecordID *)arg1 recordType:(NSString *)arg2;

@end
