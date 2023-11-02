
@protocol WBTabGroupSyncAgentProtocol <NSObject>

@required

- (void)acceptShareForURL:(void *)arg1 invitationTokenData:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSError *, void*
- (void)addSyncObserver:(id <WBTabGroupSyncAgentSyncObserver>)arg1;
- (void)beginSharingTabGroupWithUUID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSError *, void*
- (void)movePresenceForParticipantToTabWithUUID:(NSString *)arg1;
- (void)removeSyncObserver:(id <WBTabGroupSyncAgentSyncObserver>)arg1;
- (void)scheduleSyncIfNeeded;
- (void)userDidAcceptTabGroupShareWithMetadata:(void *)arg1 inProfileWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: CKShareMetadata *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKShare *, NSError *, void*

@end
