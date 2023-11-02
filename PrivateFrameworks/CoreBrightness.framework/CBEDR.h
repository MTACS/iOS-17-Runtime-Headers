
@interface CBEDR : NSObject {
    float  _appliedCompensation;
    float  _brightnessCap;
    float  _currentHeadroom;
    float  _currentMaxBrightness;
    float  _maxHeadroom;
    float  _minHeadroom;
    float  _panelMax;
    unsigned long long  _rampPolicy;
    float  _referenceHeadroom;
    float  _requestedHeadroom;
    float  _sdrBrightness;
    float  _secondsPerStop;
}

@property float appliedCompensation;
@property float brightnessCap;
@property float maxHeadroom;
@property float minHeadroom;
@property float panelMax;
@property float referenceHeadroom;
@property float sdrBrightness;
@property float secondsPerStop;

+ (float)animatedHeadroomForOrigin:(float)arg1 target:(float)arg2 andProgress:(float)arg3;
+ (float)headroomToScalingFactor:(float)arg1;
+ (float)headroomToStops:(float)arg1;
+ (float)overallRampDuration:(float)arg1 target:(float)arg2 durationPerStop:(float)arg3;
+ (float)scalingFactorToHeadroom:(float)arg1;
+ (float)stopsToHeadroom:(float)arg1;

- (float)appliedCompensation;
- (float)availableHeadroom;
- (float)brightnessCap;
- (float)cappedHeadroomFromUncapped:(float)arg1;
- (float)clampHeadroom:(float)arg1;
- (id)copyStatusInfo;
- (id)description;
- (id)initWithRampPolicy:(unsigned long long)arg1 potentialHeadroom:(float)arg2 andReferenceHeadroom:(float)arg3;
- (float)maxHeadroom;
- (float)minHeadroom;
- (float)panelMax;
- (float)referenceHeadroom;
- (void)resetRequestedHeadroom;
- (void)sanityCheck;
- (float)sdrBrightness;
- (float)secondsPerStop;
- (void)setAppliedCompensation:(float)arg1;
- (void)setBrightnessCap:(float)arg1;
- (void)setMaxHeadroom:(float)arg1;
- (void)setMinHeadroom:(float)arg1;
- (void)setPanelMax:(float)arg1;
- (void)setReferenceHeadroom:(float)arg1;
- (void)setSdrBrightness:(float)arg1;
- (void)setSecondsPerStop:(float)arg1;
- (bool)shouldUpdateEDRForRequestedHeadroom:(float)arg1 targetHeadroom:(float*)arg2 rampTime:(double*)arg3;

@end
