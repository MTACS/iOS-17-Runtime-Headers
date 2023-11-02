
@interface HMDCloudShareMessenger : HMFObject <HMFLogging, HMFMessageReceiver> {
    bool  _configured;
    <HMDCloudShareMessengerDelegate> * _delegate;
    HMDHome * _home;
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _messageTargetUUID;
    id /* block */  _shareInvitationRetryHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isConfigured) bool configured;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCloudShareMessengerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) NSUUID *messageTargetUUID;
@property (copy) id /* block */ shareInvitationRetryHandler;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_requestShareInvitationDataFromUser:(id)arg1 retryCount:(unsigned long long)arg2 activity:(id)arg3;
- (void)_sendShareInvitationData:(id)arg1 toDestination:(id)arg2 retryCount:(unsigned long long)arg3 activity:(id)arg4 completion:(id /* block */)arg5;
- (void)configure;
- (id)delegate;
- (void)handleShareInviteMessage:(id)arg1;
- (void)handleShareRequestInviteMessage:(id)arg1;
- (void)handleShareRevokeMessage:(id)arg1;
- (id)home;
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 home:(id)arg3;
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 home:(id)arg3 messageDispatcher:(id)arg4;
- (bool)isConfigured;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)notifyOfShareAccessRevocationForUser:(id)arg1;
- (void)requestShareInvitationDataFromUser:(id)arg1;
- (void)sendShareInvitationData:(id)arg1 toDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)sendShareInvitationData:(id)arg1 toUser:(id)arg2 minimumHomeKitVersion:(id)arg3 requiredSupportedFeatures:(id)arg4 completion:(id /* block */)arg5;
- (void)setConfigured:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setShareInvitationRetryHandler:(id /* block */)arg1;
- (id /* block */)shareInvitationRetryHandler;
- (void)unconfigure;
- (id)workQueue;

@end
