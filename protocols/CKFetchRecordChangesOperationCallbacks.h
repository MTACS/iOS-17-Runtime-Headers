
@protocol CKFetchRecordChangesOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleChangeForRecordID:(CKRecordID *)arg1 record:(CKRecord *)arg2 error:(NSError *)arg3;
- (void)handleChangeSetCompletionWithServerChangeToken:(void *)arg1 clientChangeTokenData:(void *)arg2 recordChangesStatus:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: CKServerChangeToken *, NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleDeleteForRecordID:(CKRecordID *)arg1;
- (void)handleOperationDidCompleteWithServerChangeToken:(CKServerChangeToken *)arg1 clientChangeTokenData:(NSData *)arg2 recordChangesStatus:(long long)arg3 metrics:(CKOperationMetrics *)arg4 error:(NSError *)arg5;

@end
