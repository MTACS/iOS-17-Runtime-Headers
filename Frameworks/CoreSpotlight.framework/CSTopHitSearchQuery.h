
@interface CSTopHitSearchQuery : CSUserQuery {
    NSMutableArray * _batches;
}

- (void).cxx_destruct;
- (void)_handleBatches:(id)arg1;
- (unsigned long long)dispatchApplyWidth;
- (void)handleCompletion:(id)arg1;
- (void)handleFoundCompletions:(id)arg1;
- (void)handleFoundItems:(id)arg1;
- (id)initWithQueryString:(id)arg1 context:(id)arg2;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3 hitCount:(unsigned long long)arg4;
- (id)initWithUserString:(id)arg1 queryContext:(id)arg2;
- (bool)isTopHitQuery;
- (void)userEngagedWithResult:(id)arg1 interactionType:(int)arg2;

@end
