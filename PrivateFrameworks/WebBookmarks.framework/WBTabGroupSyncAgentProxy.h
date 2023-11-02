
@interface WBTabGroupSyncAgentProxy : NSObject <WBSDeallocationSentinelObserver, WBTabGroupManagerObserver, WBTabGroupSyncAgentProxyProtocol, WBTabGroupSyncAgentSyncObserver> {
    NSXPCConnection * _connection;
    NSDate * _firstReconnectionAttemptDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _numberOfReconnectionAttempts;
    NSObject<OS_dispatch_queue> * _syncObserverQueue;
    NSHashTable * _syncObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedProxy;

- (void).cxx_destruct;
- (void)_enumerateSyncObserversUsingBlock:(id /* block */)arg1;
- (id)_remoteObjectProxy;
- (void)_setUpConnection;
- (void)_setUpConnectionIfNeeded;
- (void)_setUpSyncObserverIfNeeded;
- (bool)_shouldAttemptToReconnect;
- (void)_syncAgentDidLaunch:(id)arg1;
- (void)acceptShareForURL:(id)arg1 invitationTokenData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)activeParticipantsDidUpdateInTabGroupWithUUID:(id)arg1;
- (void)activeParticipantsDidUpdateInTabWithUUID:(id)arg1;
- (void)addSyncObserver:(id)arg1;
- (void)beginSharingTabGroupWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)didAddTabWithUUID:(id)arg1 title:(id)arg2 inSharedTabGroupWithUUID:(id)arg3 byParticipantWithRecordID:(id)arg4;
- (void)didChangeBackgroundImageInSharedTabGroupWithUUID:(id)arg1 byParticipantWithRecordID:(id)arg2;
- (void)didChangeScopedFavoritesInSharedTabGroupWithUUID:(id)arg1 byParticipantWithRecordID:(id)arg2;
- (void)didFetchRecentlyAcceptedSharedTabGroupWithUUID:(id)arg1 acceptedShareDate:(id)arg2;
- (void)didNavigateInTabWithUUID:(id)arg1 title:(id)arg2 inSharedTabGroupWithUUID:(id)arg3 byParticipantWithRecordID:(id)arg4;
- (void)didRemoveTabWithUUID:(id)arg1 title:(id)arg2 inSharedTabGroupWithUUID:(id)arg3 byParticipantWithRecordID:(id)arg4;
- (id /* block */)emptyChangeSetCompletionHandler;
- (id /* block */)emptyCompletionHandler;
- (id)init;
- (void)movePresenceForParticipantToTabWithUUID:(id)arg1;
- (void)participants:(id)arg1 didJoinSharedTabGroupWithUUID:(id)arg2;
- (void)participants:(id)arg1 didLeaveSharedTabGroupWithUUID:(id)arg2;
- (void)removeSyncObserver:(id)arg1;
- (void)scheduleSyncIfNeeded;
- (void)sentinelDidDeallocateWithContext:(id)arg1;
- (void)shareDidUpdateForTabGroupWithUUID:(id)arg1;
- (void)tabGroupManagerDidUpdateSyncableContent:(id)arg1;
- (void)userDidAcceptTabGroupShareWithMetadata:(id)arg1 inProfileWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
