
@interface WBTabGroupSyncAgent : NSObject <WBTabGroupSyncAgentProtocol> {
    WBCollectionConfiguration * _configuration;
    WBTabCollection * _tabCollection;
}

@property (nonatomic, readonly) WBCollectionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) WBTabCollection *tabCollection;

- (void).cxx_destruct;
- (void)acceptShareForURL:(id)arg1 invitationTokenData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addSyncObserver:(id)arg1;
- (void)beginSharingTabGroupWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)configuration;
- (id)deviceIdentifier;
- (id)initWithConfiguration:(id)arg1;
- (void)movePresenceForParticipantToTabWithUUID:(id)arg1;
- (void)removeSyncObserver:(id)arg1;
- (void)scheduleSyncIfNeeded;
- (void)setTabCollection:(id)arg1;
- (id)tabCollection;
- (void)userDidAcceptTabGroupShareWithMetadata:(id)arg1 inProfileWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
