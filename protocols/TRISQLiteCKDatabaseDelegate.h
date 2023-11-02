
@protocol TRISQLiteCKDatabaseDelegate

@required

- (bool)shouldProcessFetchOperation:(CKFetchRecordsOperation *)arg1 error:(id*)arg2;
- (bool)shouldProcessQueryOperation:(CKQueryOperation *)arg1 error:(id*)arg2;

@end
