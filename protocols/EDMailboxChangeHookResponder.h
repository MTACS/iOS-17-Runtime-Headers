
@protocol EDMailboxChangeHookResponder <NSObject>

@optional

- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidUpdateMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceDidUpdateServerCount:(long long)arg1 forMailboxWithObjectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(EMMailboxObjectID *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;

@end
