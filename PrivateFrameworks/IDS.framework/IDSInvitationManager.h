
@interface IDSInvitationManager : NSObject <IDSDaemonListenerProtocol, IDSServiceDelegateInvitation> {
    <IDSInvitationManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    IDSService * _internal;
    bool  _invitationsLoadedFromDisk;
    NSMutableDictionary * _pendingInvitations;
    NSMutableDictionary * _receivedInvitations;
    NSMutableDictionary * _serverAcknowledgedBlockMap;
    NSMutableDictionary * _serverAcknowledgedBlockWithInvitationMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IDSInvitationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSService *internal;
@property (nonatomic, readonly, copy) NSSet *pendingInvitations;
@property (nonatomic, readonly, copy) NSSet *receivedInvitations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptInvitation:(id)arg1 withContext:(id)arg2 options:(id)arg3 serverAcknowledgedBlock:(id /* block */)arg4;
- (void)acceptInvitation:(id)arg1 withContext:(id)arg2 serverAcknowledgedBlock:(id /* block */)arg3;
- (void)cancelInvitation:(id)arg1 options:(id)arg2 serverAcknowledgedBlock:(id /* block */)arg3;
- (void)cancelInvitation:(id)arg1 serverAcknowledgedBlock:(id /* block */)arg2;
- (void)declineInvitation:(id)arg1 options:(id)arg2 serverAcknowledgedBlock:(id /* block */)arg3;
- (void)declineInvitation:(id)arg1 serverAcknowledgedBlock:(id /* block */)arg2;
- (id)delegate;
- (id)initWithServiceIdentifier:(id)arg1;
- (id)internal;
- (id)pendingInvitations;
- (id)receivedInvitations;
- (void)removePendingInvitation:(id)arg1;
- (void)removeReceivedInvitation:(id)arg1;
- (void)sendInvitationToDestination:(id)arg1 expirationDate:(id)arg2 context:(id)arg3 options:(id)arg4 serverAcknowledgedBlock:(id /* block */)arg5;
- (void)sendInvitationToDestination:(id)arg1 expirationDate:(id)arg2 context:(id)arg3 serverAcknowledgedBlock:(id /* block */)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingInvitation:(id)arg3 withContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingInvitationUpdate:(id)arg3 withContext:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setupInvitationsForService:(id)arg1;
- (bool)validateReceivedInvitation:(id)arg1;
- (id)validateStrictDecodingForSentInvitation:(id)arg1;

@end
