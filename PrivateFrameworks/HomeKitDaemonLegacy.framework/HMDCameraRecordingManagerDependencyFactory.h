
@interface HMDCameraRecordingManagerDependencyFactory : HMFObject <HMDCameraRecordingManagerDependencyFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMDFeaturesDataSource> *featuresDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) HMFPreferences *preferences;
@property (readonly) Class superclass;

- (id)createBulkSendSessionInitiatorWithWorkQueue:(id)arg1 accessory:(id)arg2;
- (id)createBulkSendSessionReaderWithWorkQueue:(id)arg1 session:(id)arg2 readTimeout:(double)arg3 logIdentifier:(id)arg4;
- (id)createLoadBalancingAttemptWithLocalResponseTimeout:(double)arg1 logIdentifier:(id)arg2;
- (id)createRecordingSessionRetryContextWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2;
- (id)createRecordingSessionWithWorkQueue:(id)arg1 camera:(id)arg2 hapAccessory:(id)arg3 home:(id)arg4 localZone:(id)arg5 configuredFragmentDuration:(double)arg6 timelineManager:(id)arg7 homePresenceByPairingIdentity:(id)arg8;
- (id)createSessionNotificationTrigger:(id)arg1 workQueue:(id)arg2;
- (id)createSettingsControl:(id)arg1 accessory:(id)arg2 managementService:(id)arg3;
- (id)createTimelineManagerWithWorkQueue:(id)arg1 fragmentDuration:(double)arg2 fragmentCreationReferenceDate:(id)arg3 logIdentifier:(id)arg4;
- (id)createTimerWithTimeInterval:(double)arg1;
- (id)featuresDataSource;
- (id)logEventSubmitter;
- (id)preferences;

@end
