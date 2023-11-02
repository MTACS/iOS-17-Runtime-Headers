
@interface HDDaemonSyncEngine : NSObject <HDSyncEngine> {
    HDDaemonSyncEntityManager * _entityManager;
    HDProfile * _profile;
    id /* block */  _unitTest_didCompleteReadTransaction;
}

@property (nonatomic, readonly, copy) NSArray *allOrderedSyncEntities;
@property (nonatomic, readonly, copy) NSDictionary *allSyncEntitiesByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_didCompleteReadTransaction;

- (void).cxx_destruct;
- (id)allOrderedSyncEntities;
- (id)allSyncEntitiesByIdentifier;
- (bool)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(bool)arg3 resetInvalid:(bool)arg4 error:(id*)arg5;
- (bool)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (bool)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1;
- (bool)performSyncSession:(id)arg1 accessibilityAssertion:(id)arg2 error:(id*)arg3;
- (void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2;
- (bool)resetNextAnchorsForStore:(id)arg1 profile:(id)arg2 minimumElapsedTime:(double)arg3 error:(id*)arg4;
- (void)resetStore:(id)arg1;
- (void)setUnitTest_didCompleteReadTransaction:(id /* block */)arg1;
- (id)syncAnchorRangesIfRequiredForSession:(id)arg1 startingAnchors:(id)arg2 error:(id*)arg3;
- (id /* block */)unitTest_didCompleteReadTransaction;
- (bool)updateLocalVersionsForStore:(id)arg1 profile:(id)arg2 error:(id*)arg3;

@end
