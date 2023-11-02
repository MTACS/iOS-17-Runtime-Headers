
@interface HMDCameraAnalysisStatePublisher : HMFObject <HMFLogging, HMFMessageReceiver, HMFTimerDelegate, HMIAnalysisStateManagerDelegate> {
    HMIAnalysisStateManager * _analysisStateManager;
    HMFTimer * _cameraAnalysisStatePublisherDebounceTimer;
    <HMDHomeResidentMessagingContext> * _messagingContext;
    HMIAnalysisStateUpdate * _stateUpdate;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMIAnalysisStateManager *analysisStateManager;
@property (readonly) HMFTimer *cameraAnalysisStatePublisherDebounceTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property <HMDHomeResidentMessagingContext> *messagingContext;
@property (retain) HMIAnalysisStateUpdate *stateUpdate;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleRemoteAnalysisStateUpdate:(id)arg1;
- (void)_processStateUpdate:(id)arg1;
- (void)_publishAnalysisStateUpdate;
- (id)analysisStateManager;
- (id)cameraAnalysisStatePublisherDebounceTimer;
- (void)configureWithHome:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)initWithHomeMessagingContext:(id)arg1 analysisStateManager:(id)arg2 workQueue:(id)arg3 cameraAnalysisStatePublisherDebounceTimer:(id)arg4;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)messagingContext;
- (void)setMessagingContext:(id)arg1;
- (void)setStateUpdate:(id)arg1;
- (void)stateManager:(id)arg1 didReceiveLocalUpdate:(id)arg2;
- (id)stateUpdate;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
