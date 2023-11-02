
@protocol HMDCameraRecordingManagerDependencyFactory <NSObject>

@required

- (HMDCameraRecordingBulkSendSessionInitiator *)createBulkSendSessionInitiatorWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 accessory:(HMDHAPAccessory *)arg2;
- (HMDCameraRecordingBulkSendSessionReader *)createBulkSendSessionReaderWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 session:(id <HMDDataStreamBulkSendSession>)arg2 readTimeout:(double)arg3 logIdentifier:(NSString *)arg4;
- (HMDCameraRecordingLoadBalancingAttempt *)createLoadBalancingAttemptWithLocalResponseTimeout:(double)arg1 logIdentifier:(NSString *)arg2;
- (HMDCameraRecordingSessionRetryContext *)createRecordingSessionRetryContextWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 homePresenceByPairingIdentity:(NSDictionary *)arg2;
- (HMDCameraRecordingSession *)createRecordingSessionWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 camera:(HMDCameraProfile *)arg2 hapAccessory:(HMDHAPAccessory *)arg3 home:(HMDHome *)arg4 localZone:(HMBLocalZone *)arg5 configuredFragmentDuration:(double)arg6 timelineManager:(HMDCameraRecordingSessionTimelineManager *)arg7 homePresenceByPairingIdentity:(NSDictionary *)arg8;
- (HMDCameraRecordingSessionNotificationTrigger *)createSessionNotificationTrigger:(HMDCameraProfile *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (HMDCameraRecordingSettingsControl *)createSettingsControl:(NSObject<OS_dispatch_queue> *)arg1 accessory:(HMDHAPAccessory *)arg2 managementService:(HMDService *)arg3;
- (HMDCameraRecordingSessionTimelineManager *)createTimelineManagerWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 fragmentDuration:(double)arg2 fragmentCreationReferenceDate:(NSDate *)arg3 logIdentifier:(NSString *)arg4;
- (HMFTimer *)createTimerWithTimeInterval:(double)arg1;
- (<HMDFeaturesDataSource> *)featuresDataSource;
- (<HMMLogEventSubmitting> *)logEventSubmitter;
- (HMFPreferences *)preferences;

@end
