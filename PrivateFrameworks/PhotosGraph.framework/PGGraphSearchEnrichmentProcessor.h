
@interface PGGraphSearchEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_processGraphUpdateInventory:(id)arg1 onGraph:(id)arg2 photoLibrary:(id)arg3 curationManager:(id)arg4 curationContext:(id)arg5 searchComputationCache:(id)arg6 progressBlock:(id /* block */)arg7 loggingConnection:(id)arg8 completionBlock:(id /* block */)arg9;
- (bool)_shouldProcessGraphUpdate:(id)arg1;
- (void)enrichDataModelWithManager:(id)arg1 curationContext:(id)arg2 graphUpdateInventory:(id)arg3 progressBlock:(id /* block */)arg4;

@end
