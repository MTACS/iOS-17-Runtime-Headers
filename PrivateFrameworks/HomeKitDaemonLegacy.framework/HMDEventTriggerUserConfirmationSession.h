
@interface HMDEventTriggerUserConfirmationSession : HMDEventTriggerSession <HMDHomeMessageReceiver, HMFDumpState, HMFLogging, HMFTimerDelegate> {
    HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent * _analyticsEvent;
    NSMutableArray * _analyticsSendEvents;
    HMDEventTriggerExecutionSession * _executionSession;
    HMDEventTriggerDevice * _requestingDevice;
    HMDTriggerConfirmationTimer * _userResponseTimer;
}

@property (nonatomic, retain) HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent *analyticsEvent;
@property (nonatomic, retain) NSMutableArray *analyticsSendEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) HMDEventTriggerExecutionSession *executionSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMDEventTriggerDevice *requestingDevice;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDTriggerConfirmationTimer *userResponseTimer;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_askForUserPermissionFromDevice:(id)arg1 executionSessionID:(id)arg2;
- (void)_createBulletinNotification;
- (void)_handleUserPermissionRemoteResponse:(id)arg1;
- (void)_handleUserPermissionRemoveDialogRequest:(id)arg1;
- (void)_registerForMessages;
- (void)_removeUserDialog:(id)arg1;
- (void)_sessionComplete;
- (void)_userResponse:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)analyticsEvent;
- (id)analyticsSendEvents;
- (void)askForUserPermission:(id)arg1;
- (void)createBulletinNotification;
- (void)dealloc;
- (id)executionSession;
- (id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4 requestingDevice:(id)arg5;
- (id)requestingDevice;
- (void)setAnalyticsEvent:(id)arg1;
- (void)setAnalyticsSendEvents:(id)arg1;
- (void)setExecutionSession:(id)arg1;
- (void)setUserResponseTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)userDidConfirmExecute:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)userResponseTimer;

@end
