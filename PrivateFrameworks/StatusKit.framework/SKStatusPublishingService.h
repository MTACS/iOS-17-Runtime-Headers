
@interface SKStatusPublishingService : NSObject <SKStatusPublishingConnectionDelegateProtocol, SKStatusPublishingDaemonDelegateProtocol> {
    SKStatusPublishingDaemonConnection * _daemonConnection;
    NSMapTable * _delegates;
    NSObject<OS_dispatch_queue> * _privateWorkQueue;
    bool  _registeredForDelegateCallbacks;
    NSString * _statusTypeIdentifier;
}

@property (nonatomic, retain) SKStatusPublishingDaemonConnection *daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMapTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *invitedHandles;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (nonatomic) bool registeredForDelegateCallbacks;
@property (nonatomic, readonly) NSString *statusTypeIdentifier;
@property (readonly) Class superclass;

+ (id)logger;

- (void).cxx_destruct;
- (void)_delegatesPerformOnResponseQueueForGroup:(id)arg1 block:(id /* block */)arg2;
- (void)_fetchHandleInvitability:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)_inviteHandle:(id)arg1 fromSenderHandle:(id)arg2 withInvitationPayload:(id)arg3 completion:(id /* block */)arg4;
- (void)_inviteHandles:(id)arg1 fromSenderHandle:(id)arg2 withInvitationPayload:(id)arg3 completion:(id /* block */)arg4;
- (void)_isHandleInvitable:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2;
- (void)_isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)_registerForDelegateCallbacksIfNecessary;
- (void)_simulateCrashIfNecessaryForError:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)daemonConnection;
- (id)delegates;
- (void)fetchHandleInvitability:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchHandleInvitabilityFromPrimaryAccountHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithStatusTypeIdentifier:(id)arg1;
- (void)inviteHandle:(id)arg1 fromSenderHandle:(id)arg2 withInvitationPayload:(id)arg3 completion:(id /* block */)arg4;
- (void)inviteHandle:(id)arg1 withInvitationPayload:(id)arg2 completion:(id /* block */)arg3;
- (void)inviteHandleFromPrimaryAccountHandle:(id)arg1 withInvitationPayload:(id)arg2 completion:(id /* block */)arg3;
- (void)inviteHandles:(id)arg1 fromSenderHandle:(id)arg2 withInvitationPayload:(id)arg3 completion:(id /* block */)arg4;
- (void)inviteHandles:(id)arg1 withInvitationPayload:(id)arg2 completion:(id /* block */)arg3;
- (void)inviteHandlesFromPrimaryAccountHandle:(id)arg1 withInvitationPayload:(id)arg2 completion:(id /* block */)arg3;
- (id)invitedHandles;
- (void)isHandleInvitable:(id)arg1 completion:(id /* block */)arg2;
- (void)isHandleInvitable:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (void)isHandleInvitableFromPrimaryAccountHandle:(id)arg1 completion:(id /* block */)arg2;
- (bool)isHandleInvited:(id)arg1;
- (void)isHandleInvited:(id)arg1 completion:(id /* block */)arg2;
- (bool)isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2;
- (void)isHandleInvited:(id)arg1 fromSenderHandle:(id)arg2 completion:(id /* block */)arg3;
- (bool)isHandleInvitedFromPrimaryAccountHandle:(id)arg1;
- (void)isHandleInvitedFromPrimaryAccountHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)privateWorkQueue;
- (void)publishStatusRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)publishingDaemonConnectionDidDisconnect:(id)arg1;
- (bool)registeredForDelegateCallbacks;
- (void)removeAllInvitedHandlesWithCompletion:(id /* block */)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeInvitedHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)removeInvitedHandles:(id)arg1 completion:(id /* block */)arg2;
- (void)setDaemonConnection:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setPrivateWorkQueue:(id)arg1;
- (void)setRegisteredForDelegateCallbacks:(bool)arg1;
- (id)statusTypeIdentifier;

@end
