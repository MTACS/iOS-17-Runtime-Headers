
@interface HMDCameraMetricsLogEvent : HMMHomeLogEvent {
    HMDAccessory * _accessory;
    bool  _isLocal;
    HMDCameraSessionID * _sessionID;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly) bool isLocal;
@property (nonatomic, readonly) HMDCameraSessionID *sessionID;

- (void).cxx_destruct;
- (id)accessory;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(bool)arg3;
- (bool)isLocal;
- (id)sessionID;

@end
