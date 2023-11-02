
@interface SPUISearchModelZKW : SPUISearchModel {
    bool  _ignoreNextPartialUpdate;
    bool  _newQuery;
    NSObject<OS_dispatch_queue> * _queryProcessor;
    SPZKWSession * _session;
    bool  _shouldCacheResults;
}

@property (nonatomic) bool ignoreNextPartialUpdate;
@property (nonatomic, retain) SPZKWSession *session;

- (void).cxx_destruct;
- (void)_refreshRequested;
- (void)dealloc;
- (void)didReceiveResponse:(id)arg1;
- (bool)ignoreNextPartialUpdate;
- (id)init;
- (void)refreshUpdatingQueryId:(bool)arg1 withQueryContext:(id)arg2;
- (void)refreshWithQueryContext:(id)arg1;
- (id)session;
- (void)setIgnoreNextPartialUpdate:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)updateWithQueryContext:(id)arg1;

@end
