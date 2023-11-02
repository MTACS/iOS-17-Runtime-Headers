
@interface HMDCameraRecordingSessionNotificationTrigger : HMFObject <HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging> {
    HMDCharacteristicsAvailabilityListener * _availabilityListener;
    NSSet * _availableCharacteristics;
    HMDHAPAccessory * _cameraAccessory;
    NSString * _clientIdentifier;
    <HMDCameraRecordingSessionNotificationTriggerDelegate> * _delegate;
    NSString * _logIdentifier;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDCharacteristicsAvailabilityListener *availabilityListener;
@property (retain) NSSet *availableCharacteristics;
@property (readonly) HMDHAPAccessory *cameraAccessory;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraRecordingSessionNotificationTriggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleObservedCharacteristicsValueUpdate:(id)arg1;
- (id)availabilityListener;
- (id)availableCharacteristics;
- (id)cameraAccessory;
- (id)clientIdentifier;
- (void)dealloc;
- (id)delegate;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleCharacteristicsValueUpdated:(id)arg1;
- (id)initWithCamera:(id)arg1 workQueue:(id)arg2;
- (id)initWithCamera:(id)arg1 workQueue:(id)arg2 availabilityListener:(id)arg3 notificationCenter:(id)arg4;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;
- (id)logIdentifier;
- (id)notificationCenter;
- (void)setAvailableCharacteristics:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)workQueue;

@end
