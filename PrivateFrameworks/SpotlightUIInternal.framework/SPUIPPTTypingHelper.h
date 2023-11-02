
@interface SPUIPPTTypingHelper : NSObject {
    id /* block */  _completion;
    NSString * _currentQueryString;
    unsigned long long  _queryKind;
    NSString * _queryString;
    SPUISearchViewController * _searchViewController;
    double  _timeSinceLastFire;
}

@property (copy) id /* block */ completion;
@property (retain) NSString *currentQueryString;
@property unsigned long long queryKind;
@property (retain) NSString *queryString;
@property (retain) SPUISearchViewController *searchViewController;
@property double timeSinceLastFire;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)currentQueryString;
- (void)fire:(id)arg1;
- (id)initWithString:(id)arg1 viewController:(id)arg2 queryKind:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (unsigned long long)queryKind;
- (id)queryString;
- (id)searchViewController;
- (void)setCompletion:(id /* block */)arg1;
- (void)setCurrentQueryString:(id)arg1;
- (void)setQueryKind:(unsigned long long)arg1;
- (void)setQueryString:(id)arg1;
- (void)setSearchViewController:(id)arg1;
- (void)setTimeSinceLastFire:(double)arg1;
- (double)timeSinceLastFire;

@end
