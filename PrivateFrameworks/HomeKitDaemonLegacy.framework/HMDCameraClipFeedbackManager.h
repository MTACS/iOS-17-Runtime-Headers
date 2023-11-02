
@interface HMDCameraClipFeedbackManager : HMFObject <HMFLogging, HMFMessageReceiver> {
    NSUUID * _cameraProfileUUID;
    HMBCloudZone * _cloudZone;
    <HMDCameraClipFeedbackUploader> * _feedbackUploader;
    HMDHome * _home;
    HMBLocalZone * _localZone;
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _messageTargetUUID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSUUID *cameraProfileUUID;
@property (readonly) HMBCloudZone *cloudZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMDCameraClipFeedbackUploader> *feedbackUploader;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_findAndUploadSubmittedClips;
- (void)_handleFindAndUploadSubmittedClipsMessage:(id)arg1;
- (void)_handleSubmitClipsMessage:(id)arg1;
- (void)_notifyPrimaryResidentThatClipsWereSubmitted;
- (id)_performCloudPull;
- (void)_uploadNextClipFromQueryResult:(id)arg1;
- (id)cameraProfileUUID;
- (id)cloudZone;
- (void)configureWithIsCurrentDeviceResidentCapable:(bool)arg1;
- (id)feedbackUploader;
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;
- (id)home;
- (id)initWithLocalZone:(id)arg1 cloudZone:(id)arg2 home:(id)arg3 messageDispatcher:(id)arg4 cameraProfileUUID:(id)arg5 messageTargetUUID:(id)arg6 workQueue:(id)arg7;
- (id)initWithLocalZone:(id)arg1 cloudZone:(id)arg2 home:(id)arg3 messageDispatcher:(id)arg4 cameraProfileUUID:(id)arg5 messageTargetUUID:(id)arg6 workQueue:(id)arg7 feedbackUploader:(id)arg8;
- (bool)isCurrentDeviceConfirmedPrimaryResident;
- (id)localZone;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)setHome:(id)arg1;
- (id)workQueue;

@end
