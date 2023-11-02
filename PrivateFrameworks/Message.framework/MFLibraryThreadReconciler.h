
@interface MFLibraryThreadReconciler : NSObject {
    EDPersistenceDatabase * _database;
    EDPersistenceHookRegistry * _hookRegistry;
    EDThreadPersistence * _threadPersistence;
}

- (void).cxx_destruct;
- (id)initWithHookRegistry:(id)arg1 persistence:(id)arg2;
- (void)reconcileAllObjectsWithWindow:(id)arg1;
- (void)reconcileWithThreadsWithConversationIDs:(id)arg1 window:(id)arg2;

@end
