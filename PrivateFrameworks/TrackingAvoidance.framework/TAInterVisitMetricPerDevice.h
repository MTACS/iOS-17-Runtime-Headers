
@interface TAInterVisitMetricPerDevice : NSObject <NSSecureCoding> {
    double  _distance;
    double  _duration;
    NSDictionary * _durationPerMotionState;
    TASPAdvertisement * _latestAdvertisement;
    unsigned long long  _numOfAssociatedLocs;
    NSArray * _sampledObservedLocations;
    bool  _segmentSpeedExceedsLimit;
    TAInterVisitMetricPerDeviceSettings * _settings;
}

@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSDictionary *durationPerMotionState;
@property (nonatomic, readonly) TASPAdvertisement *latestAdvertisement;
@property (nonatomic, readonly) unsigned long long numOfAssociatedLocs;
@property (nonatomic, readonly) NSArray *sampledObservedLocations;
@property (nonatomic) bool segmentSpeedExceedsLimit;
@property (nonatomic, retain) TAInterVisitMetricPerDeviceSettings *settings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)accumulate:(id)arg1;
- (void)accumulateDistance:(double)arg1;
- (void)accumulateDuration:(double)arg1;
- (void)accumulateDurationPerMotionState:(id)arg1;
- (void)accumulateLatestAdvertisement:(id)arg1;
- (void)accumulateNumOfAssociatedLocs:(unsigned long long)arg1;
- (void)accumulateSampledObservedLocations:(id)arg1;
- (id)description;
- (id)descriptionDictionary;
- (double)distance;
- (double)duration;
- (id)durationPerMotionState;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)latestAdvertisement;
- (unsigned long long)numOfAssociatedLocs;
- (id)sampledObservedLocations;
- (bool)segmentSpeedExceedsLimit;
- (void)setSegmentSpeedExceedsLimit:(bool)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
