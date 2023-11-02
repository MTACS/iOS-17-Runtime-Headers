
@interface _CNCombineLatestObservable : CNObservable {
    NSMutableIndexSet * _activeObservableIndexes;
    NSArray * _observables;
    <CNScheduler> * _resultScheduler;
    NSMutableArray * _results;
    NSMutableIndexSet * _silentObservableIndexes;
    NSMutableArray * _tokens;
}

@property (nonatomic, readonly) NSMutableIndexSet *activeObservableIndexes;
@property (nonatomic, readonly) NSArray *observables;
@property (nonatomic, readonly) <CNScheduler> *resultScheduler;
@property (nonatomic, readonly) NSMutableArray *results;
@property (nonatomic, readonly) NSMutableIndexSet *silentObservableIndexes;
@property (nonatomic, readonly) NSMutableArray *tokens;

- (void).cxx_destruct;
- (id)activeObservableIndexes;
- (id)initWithObservables:(id)arg1;
- (id)initWithObservables:(id)arg1 resultScheduler:(id)arg2 schedulerProvider:(id)arg3;
- (void)observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 forObserver:(id)arg3;
- (void)observableAtIndex:(unsigned long long)arg1 didReceiveResult:(id)arg2 forObserver:(id)arg3;
- (void)observableAtIndexDidComplete:(unsigned long long)arg1 forObserver:(id)arg2;
- (id)observables;
- (void)performWithResourceLock:(id /* block */)arg1;
- (id)resultScheduler;
- (id)results;
- (id)silentObservableIndexes;
- (id)subscribe:(id)arg1;
- (id)tokens;

@end
