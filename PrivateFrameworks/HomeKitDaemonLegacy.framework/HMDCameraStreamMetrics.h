
@interface HMDCameraStreamMetrics : HMFObject {
    HMDCameraMetricsStreamLogEvent * _cameraStreamMetricsLogEvent;
    NSError * _error;
}

@property (nonatomic, readonly) HMDCameraMetricsStreamLogEvent *cameraStreamMetricsLogEvent;
@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (id)cameraStreamMetricsLogEvent;
- (void)dealloc;
- (id)error;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(bool)arg3;
- (void)setError:(id)arg1;

@end
