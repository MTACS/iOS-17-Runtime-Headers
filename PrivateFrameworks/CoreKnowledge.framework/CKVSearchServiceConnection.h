
@interface CKVSearchServiceConnection : NSObject <CKVSearchService> {
    CKVDatabaseSearcher * _databaseSearcher;
    KVSpanMatcher * _spanMatcher;
    KVTokenizer * _tokenizer;
    NSString * _userId;
}

- (void).cxx_destruct;
- (id)_convertFTSResultsToSearchResults:(id)arg1;
- (id)_convertSpanMatchResults:(id)arg1;
- (id)initWithUserId:(id)arg1 databaseSearcherProvider:(id)arg2 spanMatcherProvider:(id)arg3;
- (id)matchSpansOfString:(id)arg1;
- (id)matchSpansWithTokenChain:(id)arg1;
- (void)prewarmSpanMatcher;
- (id)searchFTSWithCriteria:(id)arg1 error:(id*)arg2;

@end
