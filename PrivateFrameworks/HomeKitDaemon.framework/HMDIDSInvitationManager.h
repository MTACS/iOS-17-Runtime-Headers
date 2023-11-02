
@interface HMDIDSInvitationManager : NSObject <IDSInvitationManagerDelegate> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    HMDHomeManager * _homeManager;
    IDSInvitationManager * _idsInvitationManager;
    HMFMessageDispatcher * _messageDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (nonatomic, retain) IDSInvitationManager *idsInvitationManager;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (id)_receivedInvitationWithUniqueID:(id)arg1;
- (id)_sendOptions;
- (id)_sentInvitationWithUniqueID:(id)arg1;
- (void)acceptInvitationWithIDSIdentifier:(id)arg1 homeInvitationID:(id)arg2 dictionary:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)callbackQueue;
- (void)cancelInvitationWithIDSIdentifier:(id)arg1 homeInvitationID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)declineInvitationWithIDSIdentifier:(id)arg1 homeInvitationID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleForwardedAcceptance:(id)arg1;
- (id)homeManager;
- (id)idsInvitationManager;
- (id)initWithHomeManager:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (void)manager:(id)arg1 incomingInvitation:(id)arg2;
- (void)manager:(id)arg1 receiverDidAcceptInvitation:(id)arg2;
- (void)manager:(id)arg1 receiverDidDeclineInvitation:(id)arg2;
- (void)manager:(id)arg1 senderDidCancelInvitation:(id)arg2;
- (id)messageDispatcher;
- (void)sendInvitationToDestination:(id)arg1 expirationDate:(id)arg2 dictionary:(id)arg3 homeInvitationID:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)setCallbackQueue:(id)arg1;
- (void)setIdsInvitationManager:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
