
@interface ARWorldAlignmentTechnique : ARTechnique {
    long long  _alignment;
    long long  _cameraPosition;
    NSObject<OS_dispatch_semaphore> * _dataSemaphore;
    float  _deviceOrientationAlignmentAngle;
    ARTimeKeyedList * _deviceOrientationDataByTime;
    bool  _deviceOrientationReferenced;
    bool  _imageMirrored;
    double  _lastHeadingUpdateTimestamp;
    double  _lastMajorRelocalizationTimestamp;
    long long  _lastTrackingStateReason;
    CMMotionManager * _motionManager;
    ARWorldAlignmentData * _relocalizedAlignmentData;
    bool  _relocalizing;
    float  _trackingAlignmentAngle;
    void _trackingAlignmentTranslation;
    bool  _trackingReferenced;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) long long cameraPosition;
@property (nonatomic, retain) CMMotionManager *motionManager;

- (void).cxx_destruct;
- (id)_deviceOrientationPoseDataFromDeviceOrientation:(id)arg1;
- (id)_fullDescription;
- (void)_handleTrackingStateChanges:(id)arg1 initialized:(bool*)arg2 relocalized:(bool*)arg3;
- (void)_referenceDeviceOrientation:(id)arg1;
- (id)_referenceTrackingAlignmentWithPoseData:(id)arg1 deviceOrientation:(id)arg2;
- (float)_trackingAlignmentAngleForPoseData:(id)arg1 deviceOrientation:(id)arg2;
- (id)_updateHeadingAlignmentWithPoseData:(id)arg1 deviceOrientation:(id)arg2 timestamp:(double)arg3;
- (long long)alignment;
- (long long)cameraPosition;
- (id)initWithAlignment:(long long)arg1;
- (id)initWithAlignment:(long long)arg1 cameraPosition:(long long)arg2;
- (bool)isBusy;
- (bool)isEqual:(id)arg1;
- (id)motionManager;
- (unsigned long long)optionalSensorDataTypes;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)resultDataClasses;
- (void)setMotionManager:(id)arg1;

@end
