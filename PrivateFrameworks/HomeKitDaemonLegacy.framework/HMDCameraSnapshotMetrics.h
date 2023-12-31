
@interface HMDCameraSnapshotMetrics : HMFObject {
    HMDCameraMetricsSnapshotLogEvent * _cameraSnapshotMetricsLogEvent;
    NSError * _error;
}

@property (nonatomic, readonly) HMDCameraMetricsSnapshotLogEvent *cameraSnapshotMetricsLogEvent;
@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (id)cameraSnapshotMetricsLogEvent;
- (void)dealloc;
- (id)error;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(bool)arg3 snapshotForNotification:(bool)arg4;
- (void)setError:(id)arg1;

@end
