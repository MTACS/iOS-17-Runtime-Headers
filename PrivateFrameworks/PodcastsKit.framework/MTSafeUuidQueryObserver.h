
@interface MTSafeUuidQueryObserver : MTBaseQueryObserver {
    NSMutableSet * currentDeletes;
    NSMutableSet * currentInserts;
    NSMutableSet * currentItems;
    NSMutableSet * currentUpdates;
}

- (void).cxx_destruct;
- (id)addResultsChangedHandler:(id /* block */)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2;
- (void)notifyObservers;
- (void)startObserving;

@end
