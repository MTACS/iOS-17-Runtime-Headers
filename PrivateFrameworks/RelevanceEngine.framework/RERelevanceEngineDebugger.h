
@interface RERelevanceEngineDebugger : RESingleton {
    REObserverStore * _observerStore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSArray *availableEngines;

- (void).cxx_destruct;
- (id)_init;
- (bool)_isValidEngine:(id)arg1;
- (void)_registerEngine:(id)arg1;
- (void)_unregisterEngine:(id)arg1;
- (id)allRelevanceProviderValuesForEngine:(id)arg1;
- (id)availableEngines;
- (id)dataSourceElementsForEngine:(id)arg1;
- (id)diagnosticLogsForEngine:(id)arg1;
- (id)engineWithName:(id)arg1;
- (id)firstEngine;
- (id)orderedElementsForEngine:(id)arg1;
- (void)reloadDataSourceForEngine:(id)arg1;

@end
