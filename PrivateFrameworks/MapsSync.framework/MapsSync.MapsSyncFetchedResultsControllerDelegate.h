
@interface MapsSync.MapsSyncFetchedResultsControllerDelegate : NSObject <NSFetchedResultsControllerDelegate> {
    void _baseQuery;
    void _contentPredicate;
    void _delegate;
    void _otherWatchedContentPredicate;
}

- (void).cxx_destruct;
- (void)contextDidChangeWithNotification:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (id)init;
- (void)remoteChangeWithNotification:(id)arg1;

@end
