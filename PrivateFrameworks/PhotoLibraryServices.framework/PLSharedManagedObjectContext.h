
@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id  _changeNotificationObserver;
}

- (void).cxx_destruct;
- (bool)_hasChangesForCloudShared:(id)arg1;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(bool)arg2;
- (bool)isUserInterfaceContext;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)setupLocalChangeNotifications;
- (bool)shouldMergeFromRemoteContextWithChanges:(id)arg1;
- (void)tearDownLocalChangeNotifications;

@end
