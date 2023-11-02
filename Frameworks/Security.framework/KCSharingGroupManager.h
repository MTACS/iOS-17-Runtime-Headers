
@interface KCSharingGroupManager : NSObject <KCSharingXPCClientProtocol> {
    NSString * _cachedCurrentUserIdentifier;
    KCSharingDaemonConnection * _daemonConnection;
}

@property (retain) NSString *cachedCurrentUserIdentifier;
@property (nonatomic, retain) KCSharingDaemonConnection *daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Security.framework/Security

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)acceptInviteForGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)accountChanged;
- (void)addSubscriber:(id)arg1;
- (id)cachedCurrentUserIdentifier;
- (void)checkAvailabilityForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)checkAvailabilityForHandles:(id)arg1 completion:(id /* block */)arg2;
- (void)createGroupWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)daemonConnection;
- (void)declineInviteForGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteGroupWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCurrentUserIdentifierWithReply:(id /* block */)arg1;
- (void)getGroupByGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)getGroupsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDaemonConnection:(id)arg1;
- (void)leaveGroupWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)performMaintenanceWithCompletion:(id /* block */)arg1;
- (void)provisionWithReply:(id /* block */)arg1;
- (void)removeSubscriber:(id)arg1;
- (void)setCachedCurrentUserIdentifier:(id)arg1;
- (void)setDaemonConnection:(id)arg1;
- (void)updateGroupWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyGroupsInSyncWithCompletion:(id /* block */)arg1;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

- (void)as_getKCSharingParticipantsForFamilyMembersWithCompletionHandler:(id /* block */)arg1;

@end
