
@interface FCCKTagSearchQueryOperation : FCOperation {
    CKQueryCursor * _cursor;
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    NSString * _locale;
    id /* block */  _queryCompletionHandler;
    CKQueryCursor * _resultCursor;
    NSError * _resultError;
    NSArray * _resultRecords;
    unsigned long long  _resultsLimit;
    NSString * _searchString;
    long long  _tagType;
    NSString * _tagTypeString;
}

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (void)resetForRetry;
- (bool)validateOperation;

@end
