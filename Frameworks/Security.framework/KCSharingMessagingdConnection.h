
@interface KCSharingMessagingdConnection : NSObject <KCSharingMessagingdXPCServerProtocol> {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cancelPendingInvitesForGroup:(id)arg1 participantHandles:(id)arg2 completion:(id /* block */)arg3;
- (id)connection;
- (void)connectionWasInterrupted;
- (void)connectionWasInvalidated;
- (void)dealloc;
- (void)didAcceptInviteForGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)didDeclineInviteForGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchReceivedInviteWithGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchReceivedInvitesWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1 interface:(id)arg2 queue:(id)arg3;
- (void)sendNewInvitesForGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)setConnection:(id)arg1;

@end
