
@interface DRSTaskingService : NSObject {
    DRSTaskingEventPublisher * _eventPublisher;
    NSObject<OS_dispatch_queue> * _messageQueue;
    NSObject<OS_xpc_object> * _serviceConnection;
    NSObject<OS_dispatch_semaphore> * _serviceDeactivatedSem;
    unsigned char  _state;
    DRSTaskingManager * _taskingManager;
}

@property (nonatomic, readonly) DRSTaskingEventPublisher *eventPublisher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageQueue;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *serviceConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *serviceDeactivatedSem;
@property (nonatomic, readonly) unsigned char state;
@property (nonatomic, readonly) DRSTaskingManager *taskingManager;

+ (id)databaseDirectory;
+ (bool)serviceIsEnabled;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applyCloudChannelConfig:(id)arg1 dueToMessage:(id)arg2 state:(id)arg3 messageType:(unsigned long long)arg4;
- (void)_checkForDefaultSubscriptionUpdate;
- (void)_configureInvalidationXPCActivity;
- (void)_configureXPCActivities;
- (void)_handleBroadcastRequestMessaage:(id)arg1 state:(id)arg2;
- (void)_handleClearTaskingStateMessage:(id)arg1 state:(id)arg2;
- (void)_handleCloudChannelConfigGet:(id)arg1 state:(id)arg2;
- (void)_handleCloudChannelConfigReset:(id)arg1 state:(id)arg2;
- (void)_handleCloudChannelConfigSet:(id)arg1 state:(id)arg2;
- (void)_handleConfigCompletionMessage:(id)arg1 state:(id)arg2;
- (void)_handleConfigStateMessage:(id)arg1 state:(id)arg2;
- (void)_handleInvalidMessage:(id)arg1 state:(id)arg2;
- (void)_handleJSONTaskingSystemMessage:(id)arg1 state:(id)arg2 transaction:(id)arg3;
- (void)_sendClearStateReplyForMessage:(id)arg1 rejectionReason:(const char *)arg2;
- (void)_sendConfigStateReplyForMessage:(id)arg1 rejectionReason:(const char *)arg2 state:(unsigned char)arg3 completionType:(unsigned long long)arg4;
- (void)_sendReplyForMessage:(id)arg1 replyType:(unsigned long long)arg2 rejectionReason:(const char *)arg3;
- (void)_waitForDeviceUnlockAndInitializeServiceState;
- (bool)activateService;
- (void)deactivateService;
- (void)dealloc;
- (id)eventPublisher;
- (void)handleRequest:(id)arg1 state:(id)arg2;
- (id)init;
- (id)messageQueue;
- (id)serviceConnection;
- (id)serviceDeactivatedSem;
- (unsigned char)state;
- (id)taskingManager;

@end
