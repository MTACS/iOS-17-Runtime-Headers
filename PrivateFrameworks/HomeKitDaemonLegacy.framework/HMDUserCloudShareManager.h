
@interface HMDUserCloudShareManager : NSObject <HMDUserCloudShareControllerDelegate, HMFMessageReceiver> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDHomeManager * _homeManager;
    NSUUID * _identifier;
    HMFMessageDispatcher * _messageDispatcher;
    HMDUserCloudShareController * _userCloudShareController;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHomeManager *homeManager;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDUserCloudShareController *userCloudShareController;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleAccessoryAdded:(id)arg1;
- (void)_handleDeregisterRequest:(id)arg1;
- (void)_handleEnableMultiUserChangedNotification:(id)arg1;
- (void)_handleLocalHomeDataRemovedNotification:(id*)arg1;
- (void)_handleRegisterRequest:(id)arg1;
- (void)_handleUserSettingsUpdatedNotification:(id)arg1;
- (void)_postMultiUserStatusChangedNotification;
- (id)clientQueue;
- (void)configureWithMessageDispatcher:(id)arg1;
- (id)currentDateForUserCloudShareController:(id)arg1;
- (void)handleHomeChangedNotification:(id)arg1;
- (void)handleRemoteUserClientCloudShareRepairRequest:(id)arg1;
- (void)handleRemoteUserClientCloudShareRequest:(id)arg1;
- (void)handleUsersChangedNotification:(id)arg1;
- (void)handleXPCConnectionInvalidated:(id)arg1;
- (id)homeManager;
- (id)identifier;
- (id)initWithHomeManager:(id)arg1;
- (id)initWithHomeManager:(id)arg1 dependency:(id)arg2;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)registerForMessages;
- (void)setMessageDispatcher:(id)arg1;
- (id)userCloudShareController;
- (void)userCloudShareController:(id)arg1 sendRepairInfo:(id)arg2 toConnection:(id)arg3 home:(id)arg4 containerID:(id)arg5;
- (void)userCloudShareController:(id)arg1 sendShareRequestMessageWithConnection:(id)arg2 fromUser:(id)arg3 toUser:(id)arg4 home:(id)arg5 shareURL:(id)arg6 shareToken:(id)arg7 containerID:(id)arg8 completion:(id /* block */)arg9;
- (id)userCloudShareController:(id)arg1 timerWithInterval:(double)arg2;
- (void)userCloudShareController:(id)arg1 wakeClientForRepairWithContainerID:(id)arg2;
- (void)userCloudShareController:(id)arg1 wakeClientWithContainerID:(id)arg2;

@end
