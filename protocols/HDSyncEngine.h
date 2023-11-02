
@protocol HDSyncEngine <NSObject>

@required

- (NSArray *)allOrderedSyncEntities;
- (NSDictionary *)allSyncEntitiesByIdentifier;
- (bool)applyAcknowledgedAnchorMap:(id <HDSyncAnchorMap>)arg1 forStore:(id <HDSyncStore>)arg2 resetNext:(bool)arg3 resetInvalid:(bool)arg4 error:(id*)arg5;
- (bool)applySyncChange:(id <HDSyncChange>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id*)arg3;
- (bool)getReceivedAnchorMap:(id <HDSyncAnchorMap>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id*)arg3;
- (bool)performSyncSession:(HDSyncSession *)arg1 accessibilityAssertion:(HDAssertion *)arg2 error:(id*)arg3;
- (void)resetAnchorsWithFailedChanges:(NSArray *)arg1 store:(id <HDSyncStore>)arg2;
- (bool)resetNextAnchorsForStore:(id <HDSyncStore>)arg1 profile:(HDProfile *)arg2 minimumElapsedTime:(double)arg3 error:(id*)arg4;
- (void)resetStore:(id <HDSyncStore>)arg1;
- (void)setUnitTest_didCompleteReadTransaction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (HDSyncAnchorRangeMap *)syncAnchorRangesIfRequiredForSession:(HDSyncSession *)arg1 startingAnchors:(id <HDSyncAnchorMap>)arg2 error:(id*)arg3;
- (id /* block */)unitTest_didCompleteReadTransaction:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (bool)updateLocalVersionsForStore:(id <HDSyncStore>)arg1 profile:(HDProfile *)arg2 error:(id*)arg3;

@end
