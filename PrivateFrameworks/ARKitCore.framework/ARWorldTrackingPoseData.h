
@interface ARWorldTrackingPoseData : NSObject <ARDaemonSecureCoding, ARResultData, NSCopying> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransform;
    double  _currentStateTimestamp;
    ARVideoFormat * _currentlyActiveVideoFormat;
    double  _lastInertialTimestamp;
    ARLineCloud * _lineCloud;
    ARSLAMState * _slamState;
    double  _timestamp;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionCameraTransform;
    long long  _worldMappingStatus;
    ARWorldTrackingState * _worldTrackingState;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransform;
@property (nonatomic) double currentStateTimestamp;
@property (nonatomic, retain) ARVideoFormat *currentlyActiveVideoFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastInertialTimestamp;
@property (nonatomic, retain) ARLineCloud *lineCloud;
@property (nonatomic, retain) ARSLAMState *slamState;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionCameraTransform;
@property (nonatomic) long long worldMappingStatus;
@property (nonatomic, copy) ARWorldTrackingState *worldTrackingState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentStateTimestamp;
- (id)currentlyActiveVideoFormat;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;
- (bool)isEqual:(id)arg1;
- (double)lastInertialTimestamp;
- (id)lineCloud;
- (void)setCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setCurrentStateTimestamp:(double)arg1;
- (void)setCurrentlyActiveVideoFormat:(id)arg1;
- (void)setLastInertialTimestamp:(double)arg1;
- (void)setLineCloud:(id)arg1;
- (void)setSlamState:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVisionCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWorldMappingStatus:(long long)arg1;
- (void)setWorldTrackingState:(id)arg1;
- (id)slamState;
- (double)timestamp;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionCameraTransform;
- (long long)worldMappingStatus;
- (id)worldTrackingState;

@end
