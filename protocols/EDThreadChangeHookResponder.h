
@protocol EDThreadChangeHookResponder <NSObject>

@optional

- (void)persistenceDidFinishThreadUpdates;
- (void)persistenceDidResetThreadScope:(EMThreadScope *)arg1;
- (void)persistenceIsAddingThreadWithObjectID:(EMThreadObjectID *)arg1 journaled:(bool)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsChangingThreadWithObjectID:(EMThreadObjectID *)arg1 changedKeyPaths:(NSArray *)arg2 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg3;
- (void)persistenceIsDeletingThreadWithObjectID:(EMThreadObjectID *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsMarkingThreadAsJournaledWithObjectID:(EMThreadObjectID *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;
- (void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(NSArray *)arg1 generationWindow:(EDPersistenceDatabaseGenerationWindow *)arg2;

@end
