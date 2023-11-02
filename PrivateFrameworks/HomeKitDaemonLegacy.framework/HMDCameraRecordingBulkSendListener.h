
@interface HMDCameraRecordingBulkSendListener : HMFObject <HMDDataStreamBulkSendListener, HMFLogging> {
    NSUUID * _UUID;
    <HMDCameraRecordingBulkSendListenerDelegate> * _delegate;
    id /* block */  _pendingOpenSessionCallback;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraRecordingBulkSendListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSessionOpenInProgress, readonly) bool sessionOpenInProgress;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)UUID;
- (void)accessory:(id)arg1 didCloseDataStreamWithError:(id)arg2;
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;
- (void)accessoryDidStartListening:(id)arg1;
- (void)addPendingBulkSendSessionCallback:(id /* block */)arg1;
- (id)attributeDescriptions;
- (id)delegate;
- (id)initWithWorkQueue:(id)arg1;
- (bool)isSessionOpenInProgress;
- (id)logIdentifier;
- (void)openBulkSendSessionWithAccessory:(id)arg1 callback:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
