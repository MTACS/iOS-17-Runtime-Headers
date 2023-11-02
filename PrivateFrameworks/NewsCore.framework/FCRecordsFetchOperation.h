
@interface FCRecordsFetchOperation : FCFetchOperation {
    FCInterestToken * _fetchToken;
    NSDictionary * _holdTokens;
    NSArray * _ignoreCacheForRecordIDs;
    NSArray * _recordIdentifiers;
    FCRecordSource * _recordSource;
    FCInterestToken * _refreshToken;
}

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;

@end
