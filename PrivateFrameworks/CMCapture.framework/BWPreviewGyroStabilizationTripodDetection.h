
@interface BWPreviewGyroStabilizationTripodDetection : NSObject {
    int  _inputIndex;
    bool  _isLikelyPhysicalTripod;
    bool  _isPhysicalTripod;
    bool  _isStationary;
    float  _physicalTripodGuaranteedMaxAngleThreshold;
    float  _physicalTripodLikelyMaxAngleThreshold;
    int  _previousLikelyPhysicalTripodCount;
    int  _ringCount;
    bool  _stationary;
    float  _tripodMaxAngleThresholdAccumulate;
    float  _tripodMaxAngleThresholdInstant;
}

@property (nonatomic, readonly) bool empty;
@property (nonatomic, readonly) bool isLikelyPhysicalTripod;
@property (nonatomic, readonly) bool isPhysicalTripod;
@property (nonatomic, readonly) bool isStationary;

- (void)_detectPhysicalTripodUsingMaxAngleInstant:(float)arg1 frameRateNormalization:(float)arg2;
- (bool)_isCameraStationary;
- (void)_updateWithMaxAngleInstant:(float)arg1 maxAngleAccumulate:(float)arg2;
- (void)detectTripodStateUsingMaxAngleInstant:(float)arg1 maxAngleAccumulate:(float)arg2 frameRateNormalizationFactor:(float)arg3;
- (bool)empty;
- (id)initWithTripodDetectionThresholds:(float)arg1 tripodMaxAngleThresholdAccumulate:(float)arg2 physicalTripodLikelyMaxAngleThreshold:(float)arg3 physicalTripodGuaranteedMaxAngleThreshold:(float)arg4;
- (bool)isLikelyPhysicalTripod;
- (bool)isPhysicalTripod;
- (bool)isStationary;
- (void)reset;

@end
