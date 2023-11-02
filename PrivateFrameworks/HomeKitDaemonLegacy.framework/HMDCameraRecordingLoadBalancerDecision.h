
@interface HMDCameraRecordingLoadBalancerDecision : HMFObject {
    HMDCameraRecordingAnalysisNode * _analysisNode;
    NSUUID * _cameraUUID;
    NSDate * _decisionDate;
    long long  _numberOfAvailableDevices;
    long long  _remainingNumberOfJobSlots;
    long long  _totalNumberOfJobSlots;
}

@property (readonly) HMDCameraRecordingAnalysisNode *analysisNode;
@property (readonly, copy) NSUUID *cameraUUID;
@property (readonly, copy) NSDate *decisionDate;
@property (readonly, copy) NSUUID *deviceUUID;
@property (getter=isExpired, readonly) bool expired;
@property (readonly) long long numberOfAvailableDevices;
@property (readonly) long long remainingNumberOfJobSlots;
@property (readonly) long long totalNumberOfJobSlots;

- (void).cxx_destruct;
- (id)analysisNode;
- (id)attributeDescriptions;
- (id)cameraUUID;
- (id)decisionDate;
- (id)deviceUUID;
- (id)initWithCameraUUID:(id)arg1 numberOfAvailableDevices:(long long)arg2 totalNumberOfJobSlots:(long long)arg3 remainingNumberOfJobSlots:(long long)arg4 analysisNode:(id)arg5 decisionDate:(id)arg6;
- (bool)isExpired;
- (long long)numberOfAvailableDevices;
- (long long)remainingNumberOfJobSlots;
- (long long)totalNumberOfJobSlots;

@end
