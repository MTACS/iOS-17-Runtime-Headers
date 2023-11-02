
@interface RETrainingSimulationServer : NSObject <NSXPCListenerDelegate, RETrainingSimulationServerInterface> {
    NSMutableSet * _connections;
    NSXPCListener * _listener;
    REObserverStore * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedServer;

- (void).cxx_destruct;
- (id)_init;
- (void)_safelyEnumerateObserversWithBlock:(id /* block */)arg1 observerAccessBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)addObserver:(id)arg1;
- (void)availableRelevanceEngines:(id /* block */)arg1;
- (void)availableRelevanceEnginesDidChange;
- (void)dealloc;
- (void)fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllElementsInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(id /* block */)arg3;
- (void)removeObserver:(id)arg1;

@end
