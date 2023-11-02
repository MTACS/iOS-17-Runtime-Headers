
@interface KCSharingDaemonConnection : NSObject <KCSharingInvitationNotificationProtocol, KCSharingXPCClientProtocol, KCSharingXPCServerProtocol> {
    NSXPCConnection * _connection;
    NSHashTable * _connectionListeners;
    long long  _type;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSHashTable *connectionListeners;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property long long type;

+ (id)sharedInstance;
+ (id)sharedInvitationNotifier;

- (void).cxx_destruct;
- (void)acceptInviteForGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)accountChanged;
- (void)addConnectionListener:(id)arg1;
- (void)checkAvailabilityForHandles:(id)arg1 completion:(id /* block */)arg2;
- (id)connection;
- (id)connectionListeners;
- (void)connectionWasInterrupted;
- (void)connectionWasInvalidated;
- (void)createGroupWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)declineInviteForGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteGroupWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCurrentUserIdentifierWithReply:(id /* block */)arg1;
- (void)fetchRemoteChangesWithReply:(id /* block */)arg1;
- (void)getGroupByGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)getGroupsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)groupInvitationWasCancelled;
- (void)groupsUpdated;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 type:(long long)arg3;
- (id)initWithType:(long long)arg1;
- (void)leaveGroupWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)performMaintenanceWithCompletion:(id /* block */)arg1;
- (void)provisionWithReply:(id /* block */)arg1;
- (void)receivedGroupInvitation:(id)arg1;
- (void)removeConnectionListener:(id)arg1;
- (void)saveLocalChangesWithReply:(id /* block */)arg1;
- (void)setChangeTrackingEnabled:(bool)arg1 reply:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setConnectionListeners:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)updateGroupWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyGroupsInSyncWithCompletion:(id /* block */)arg1;
- (void)wipe:(bool)arg1 reply:(id /* block */)arg2;

@end
