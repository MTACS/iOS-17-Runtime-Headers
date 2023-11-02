
@protocol CKQueryOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleOperationDidCompleteWithCursor:(CKQueryCursor *)arg1 metrics:(CKOperationMetrics *)arg2 error:(NSError *)arg3;
- (void)handleQueryDidFetchCursor:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: CKQueryCursor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handleQueryDidFetchForRecordID:(CKRecordID *)arg1 record:(CKRecord *)arg2 error:(NSError *)arg3;

@end
