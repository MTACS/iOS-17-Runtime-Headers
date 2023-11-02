
@interface HDIDSInvitationManager : NSObject <IDSInvitationManagerDelegate> {
    NSObject<OS_dispatch_queue> * _IDSDelegateQueue;
    <HDIDSInvitationManagerDelegate> * _delegate;
    IDSInvitationManager * _invitationManager;
    Class  _messageClass;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _schema;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDIDSInvitationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSInvitationManager *invitationManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptInvitationWithUUID:(id)arg1 codableObject:(id)arg2 serverAcknowledgedBlock:(id /* block */)arg3;
- (void)declineInvitationWithUUID:(id)arg1 serverAcknowledgedBlock:(id /* block */)arg2;
- (id)delegate;
- (id)initWithServiceIdentifier:(id)arg1 messageClass:(Class)arg2 schema:(id)arg3;
- (id)invitationManager;
- (void)manager:(id)arg1 incomingInvitation:(id)arg2;
- (void)manager:(id)arg1 receiverDidAcceptInvitation:(id)arg2;
- (void)manager:(id)arg1 receiverDidDeclineInvitation:(id)arg2;
- (void)manager:(id)arg1 senderDidCancelInvitation:(id)arg2;
- (void)rescindInvitationWithUUID:(id)arg1 serverAcknowledgedBlock:(id /* block */)arg2;
- (void)sendInvitationToIdentifier:(id)arg1 expirationDate:(id)arg2 codableObject:(id)arg3 serverAcknowledgedBlock:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)setInvitationManager:(id)arg1;

@end
