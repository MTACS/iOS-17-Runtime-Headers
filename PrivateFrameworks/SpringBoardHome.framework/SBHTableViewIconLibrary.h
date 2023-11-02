
@interface SBHTableViewIconLibrary : NSObject <SBHIconLibraryQueryEngineObserver> {
    NSMapTable * _completionHandlerForQuery;
    SBHIconModel * _iconModel;
    SBHIconLibraryQueryResult * _lastQueryResults;
    NSHashTable * _observers;
    <SBHIconLibraryQueryEngine> * _queryEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHIconModel *iconModel;
@property (nonatomic, readonly) SBHIconLibraryQueryResult *lastQueryResults;
@property (nonatomic, readonly) <SBHIconLibraryQueryEngine> *queryEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchQueryResult:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)engine:(id)arg1 failedToExecuteQuery:(id)arg2 withError:(id)arg3;
- (void)engine:(id)arg1 queryResultsWereUpdated:(id)arg2;
- (void)executeQuery:(id)arg1;
- (void)executeQuery:(id)arg1 completion:(id /* block */)arg2;
- (id)iconModel;
- (id)initWithIconModel:(id)arg1;
- (id)initWithIconModel:(id)arg1 queryEngine:(id)arg2;
- (id)lastQueryResults;
- (id)queryEngine;
- (void)removeObserver:(id)arg1;

@end
