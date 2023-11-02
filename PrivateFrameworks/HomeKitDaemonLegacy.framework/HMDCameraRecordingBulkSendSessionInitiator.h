
@interface HMDCameraRecordingBulkSendSessionInitiator : HMFObject <HMDCameraRecordingBulkSendListenerDelegate, HMFLogging> {
    HMDHAPAccessory * _accessory;
    HMDCameraRecordingBulkSendListener * _currentListener;
    bool  _waitingForAccessory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property HMDHAPAccessory *accessory;
@property (retain) HMDCameraRecordingBulkSendListener *currentListener;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSessionOpenInProgress, readonly) bool sessionOpenInProgress;
@property (readonly) Class superclass;
@property (getter=isWaitingForAccessory) bool waitingForAccessory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_registerBulkSendListener;
- (id)accessory;
- (void)configure;
- (id)currentListener;
- (void)handleAccessoryDoesSupportBulkSendDataStreamNotification:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;
- (bool)isSessionOpenInProgress;
- (bool)isWaitingForAccessory;
- (void)listenerDidReceiveDataStreamClose:(id)arg1;
- (void)listenerDidReceiveDataStreamStart:(id)arg1;
- (id)logIdentifier;
- (void)openNewSessionWithCallback:(id /* block */)arg1;
- (void)setAccessory:(id)arg1;
- (void)setCurrentListener:(id)arg1;
- (void)setWaitingForAccessory:(bool)arg1;
- (void)stop;
- (id)workQueue;

@end
