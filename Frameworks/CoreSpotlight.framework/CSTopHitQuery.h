
@interface CSTopHitQuery : CSUserQuery {
    NSMutableArray * _batches;
    unsigned long long  _tokenCount;
}

+ (void)sortSearchableItemsByL2:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)dispatchApplyWidth;
- (void)filterRankedItems:(id)arg1 hitCount:(unsigned long long)arg2;
- (void)handleBatches:(id)arg1;
- (void)handleCompletion:(id)arg1;
- (void)handleFoundInstantAnswers:(id)arg1;
- (void)handleFoundItems:(id)arg1;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;
- (id)initWithQueryString:(id)arg1 queryContext:(id)arg2;
- (id)initWithUserQueryString:(id)arg1 queryContext:(id)arg2;
- (id)initWithUserString:(id)arg1 queryContext:(id)arg2;
- (bool)isTopHitQuery;

@end
