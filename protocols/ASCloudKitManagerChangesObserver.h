
@protocol ASCloudKitManagerChangesObserver <NSObject>

@required

- (bool)isReadyToProcessChanges;

@optional

- (void)cloudKitManager:(ASCloudKitManager *)arg1 didBeginUpdatesForFetchWithType:(long long)arg2;
- (void)cloudKitManager:(ASCloudKitManager *)arg1 didEndUpdatesForFetchWithType:(long long)arg2;
- (void)cloudKitManager:(void *)arg1 didReceiveNewActivitySnapshots:(void *)arg2 moreComing:(void *)arg3 changesProcessedHandler:(void *)arg4; // needs 4 arg types, found 8: ASCloudKitManager *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cloudKitManager:(void *)arg1 didReceiveNewActivitySnapshotsForSelf:(void *)arg2 moreComing:(void *)arg3 changesProcessedHandler:(void *)arg4; // needs 4 arg types, found 8: ASCloudKitManager *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cloudKitManager:(void *)arg1 didReceiveNewCompetitionLists:(void *)arg2 moreComing:(void *)arg3 changesProcessedHandler:(void *)arg4; // needs 4 arg types, found 8: ASCloudKitManager *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cloudKitManager:(void *)arg1 didReceiveNewCompetitionListsForSelf:(void *)arg2 moreComing:(void *)arg3 changesProcessedHandler:(void *)arg4; // needs 4 arg types, found 8: ASCloudKitManager *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cloudKitManager:(void *)arg1 didReceiveNewFriendAchievements:(void *)arg2 moreComing:(void *)arg3 changesProcessedHandler:(void *)arg4; // needs 4 arg types, found 8: ASCloudKitManager *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cloudKitManager:(void *)arg1 didReceiveNewFriendWorkouts:(void *)arg2 moreComing:(void *)arg3 changesProcessedHandler:(void *)arg4; // needs 4 arg types, found 8: ASCloudKitManager *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cloudKitManager:(void *)arg1 didReceiveNewNotificationEvents:(void *)arg2 moreComing:(void *)arg3 changesProcessedHandler:(void *)arg4; // needs 4 arg types, found 8: ASCloudKitManager *, NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cloudKitManager:(void *)arg1 didReceiveNewRelationships:(void *)arg2 fromRecordZoneWithID:(void *)arg3 moreComing:(void *)arg4 changesProcessedHandler:(void *)arg5; // needs 5 arg types, found 9: ASCloudKitManager *, NSArray *, CKRecordZoneID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cloudKitManager:(void *)arg1 didReceiveNewRemoteRelationships:(void *)arg2 fromRecordZoneWithID:(void *)arg3 moreComing:(void *)arg4 changesProcessedHandler:(void *)arg5; // needs 5 arg types, found 9: ASCloudKitManager *, NSArray *, CKRecordZoneID *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cloudKitManager:(ASCloudKitManager *)arg1 didUpdateAccountStatus:(long long)arg2;

@end
