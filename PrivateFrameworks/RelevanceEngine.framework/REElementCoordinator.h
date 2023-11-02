
@interface REElementCoordinator : RERelevanceEngineSubsystem <REElementCoordinatorProperties> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _displayElements;
    REObserverStore * _observers;
    bool  _performingBatch;
    NSMutableArray * _updates;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSDictionary *displayElements;
@property (nonatomic, readonly) unsigned long long numberOfObservers;

+ (id)applicationPrewarmIdentifiers;

- (void).cxx_destruct;
- (void)_enqueueOrPerformOperation:(id)arg1;
- (void)_enumerateValidObservers:(id /* block */)arg1;
- (void)_performOperation:(id)arg1 toObserver:(id)arg2;
- (void)_performOperationsToDisplayElements:(id)arg1;
- (void)_performOperationsToDisplayElements:(id)arg1 toSection:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)callbackQueue;
- (void)dealloc;
- (void)didAddObserver:(id)arg1;
- (void)didRemoveObserver:(id)arg1;
- (id)displayElements;
- (id)elementAtPath:(id)arg1;
- (void)enumerateObservers:(id /* block */)arg1;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)insertElement:(id)arg1 atPath:(id)arg2;
- (void)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
- (unsigned long long)numberOfElementsInSection:(id)arg1;
- (unsigned long long)numberOfObservers;
- (id)pathForElement:(id)arg1;
- (void)performBatchUpdateBlock:(id /* block */)arg1;
- (void)refreshElement:(id)arg1 atPath:(id)arg2;
- (void)reloadElement:(id)arg1 atPath:(id)arg2;
- (void)removeElement:(id)arg1 atPath:(id)arg2;
- (void)removeObserver:(id)arg1;

@end
