
@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext {
    NSSet * _configuredEntityNames;
    NSMutableDictionary * _entityIDToChangedPrimaryKeySet;
    NSManagedObjectContext * _managedObjectContext;
    NSMutableSet * _resetChangedObjectIDs;
    NSSQLCore * _store;
}

- (void)dealloc;
- (id)fetchSortedStates:(id*)arg1;
- (bool)finishProcessing:(id*)arg1;
- (id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2 store:(id)arg3;
- (id)newAnalyzerStateForChange:(id)arg1 error:(id*)arg2;
- (bool)processChange:(id)arg1 error:(id*)arg2;
- (bool)reset:(id*)arg1;
- (bool)resetStateForObjectID:(id)arg1 error:(id*)arg2;

@end
