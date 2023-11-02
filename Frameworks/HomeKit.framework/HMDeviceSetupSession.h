
@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver> {
    HMFActivity * _activity;
    _HMContext * _context;
    <HMDeviceSetupSessionDelegate> * _delegate;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _role;
    long long  _state;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDeviceSetupSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) long long role;
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo;

+ (id)logCategory;
+ (id)messageDestinationToHomeManager;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)_handleDeviceSetupSessionReceiveDataMessage:(id)arg1;
- (void)_handleOpenedSession;
- (bool)_moveToState:(long long)arg1;
- (bool)_needsClosing;
- (void)cleanUpSession;
- (void)cleanUpSessionWithError:(id)arg1;
- (void)close;
- (id)closeSetupSessionHMDHomeManagerMessage;
- (void)configure;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (void)handleDeviceSetupSessionCloseMessage:(id)arg1;
- (void)handleDeviceSetupSessionReceiveDataMessage:(id)arg1;
- (void)handleHomeKitDaemonInterruptedNotification:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithRole:(long long)arg1 context:(id)arg2 identifier:(id)arg3 delegate:(id)arg4;
- (id)initWithRole:(long long)arg1 identifier:(id)arg2 delegate:(id)arg3;
- (id)logIdentifier;
- (id)messageDestinationForOpenedSessions;
- (id)messageTargetUUID;
- (void)open;
- (void)registerForMessages;
- (void)registerForNotifications;
- (id /* block */)responseHandlerForOpenMessage;
- (id /* block */)responseHandlerForReceiveDataMessageWithCompletionHandler:(id /* block */)arg1;
- (long long)role;
- (void)sendExchangeData:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
