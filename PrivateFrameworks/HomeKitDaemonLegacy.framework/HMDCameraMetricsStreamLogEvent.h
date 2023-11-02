
@interface HMDCameraMetricsStreamLogEvent : HMDCameraMetricsLogEvent {
    NSNumber * _referenceTimestamp;
}

@property (nonatomic, retain) NSNumber *referenceTimestamp;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(bool)arg3;
- (id)referenceTimestamp;
- (void)setReferenceTimestamp:(id)arg1;

@end
