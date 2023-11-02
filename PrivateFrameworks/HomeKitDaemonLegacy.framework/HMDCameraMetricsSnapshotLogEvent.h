
@interface HMDCameraMetricsSnapshotLogEvent : HMDCameraMetricsLogEvent {
    NSNumber * _referenceTimestamp;
    bool  _snapshotForNotification;
}

@property (nonatomic, retain) NSNumber *referenceTimestamp;
@property (nonatomic, readonly) bool snapshotForNotification;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(bool)arg3 snapshotForNotification:(bool)arg4;
- (id)referenceTimestamp;
- (void)setReferenceTimestamp:(id)arg1;
- (bool)snapshotForNotification;

@end
