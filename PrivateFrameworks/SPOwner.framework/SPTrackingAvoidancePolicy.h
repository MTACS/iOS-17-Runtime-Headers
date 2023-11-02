
@interface SPTrackingAvoidancePolicy : NSObject <NSSecureCoding> {
    bool  _allowNavGeoHintAsPrivateVehicleHint;
    long long  _assumedKeyRollHour;
    double  _capOfReasonableWalkingSpeed;
    double  _durationOfConsideration;
    double  _expiryTimeInterval;
    double  _keepAliveInterval;
    double  _maxExpectedWildInterval;
    double  _minimumStagingInterval;
    double  _purgeTimeInterval;
    double  _scanInterval;
    bool  _shouldAlertImmediatelyForImmediateTypes;
    long long  _stagingBackstopHour;
    bool  _surfaceImmediatelyBetweenBackstopAndKeyroll;
    double  _thresholdOfLocationRelevance;
    double  _thresholdOfSignificantDistance;
    double  _thresholdOfSignificantDuration;
    long long  _type;
}

@property (nonatomic) bool allowNavGeoHintAsPrivateVehicleHint;
@property (nonatomic) long long assumedKeyRollHour;
@property (nonatomic) double capOfReasonableWalkingSpeed;
@property (nonatomic) double durationOfConsideration;
@property (nonatomic) double expiryTimeInterval;
@property (nonatomic) double keepAliveInterval;
@property (nonatomic) double maxExpectedWildInterval;
@property (nonatomic) double minimumStagingInterval;
@property (nonatomic) double purgeTimeInterval;
@property (nonatomic) double scanInterval;
@property (nonatomic) bool shouldAlertImmediatelyForImmediateTypes;
@property (nonatomic) long long stagingBackstopHour;
@property (nonatomic) bool surfaceImmediatelyBetweenBackstopAndKeyroll;
@property (nonatomic) double thresholdOfLocationRelevance;
@property (nonatomic) double thresholdOfSignificantDistance;
@property (nonatomic) double thresholdOfSignificantDuration;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (bool)allowNavGeoHintAsPrivateVehicleHint;
- (long long)assumedKeyRollHour;
- (double)capOfReasonableWalkingSpeed;
- (id)description;
- (double)durationOfConsideration;
- (void)encodeWithCoder:(id)arg1;
- (double)expiryTimeInterval;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 expiryTimeInterval:(double)arg2 keepAliveInterval:(double)arg3 minimumStagingInterval:(double)arg4 stagingBackstopHour:(long long)arg5 assumedKeyRollHour:(long long)arg6 scanInterval:(double)arg7 surfaceImmediatelyBetweenBackstopAndKeyroll:(bool)arg8 maxExpectedWildInterval:(double)arg9 shouldAlertImmediatelyForImmediateTypes:(bool)arg10 durationOfConsideration:(double)arg11 thresholdOfLocationRelevance:(double)arg12 thresholdOfSignificantDuration:(double)arg13 thresholdOfSignificantDistance:(double)arg14 capOfReasonableWalkingSpeed:(double)arg15 allowNavGeoHintAsPrivateVehicleHint:(bool)arg16;
- (bool)isEqual:(id)arg1;
- (double)keepAliveInterval;
- (double)maxExpectedWildInterval;
- (double)minimumStagingInterval;
- (double)purgeTimeInterval;
- (double)scanInterval;
- (void)setAllowNavGeoHintAsPrivateVehicleHint:(bool)arg1;
- (void)setAssumedKeyRollHour:(long long)arg1;
- (void)setCapOfReasonableWalkingSpeed:(double)arg1;
- (void)setDurationOfConsideration:(double)arg1;
- (void)setExpiryTimeInterval:(double)arg1;
- (void)setKeepAliveInterval:(double)arg1;
- (void)setMaxExpectedWildInterval:(double)arg1;
- (void)setMinimumStagingInterval:(double)arg1;
- (void)setPurgeTimeInterval:(double)arg1;
- (void)setScanInterval:(double)arg1;
- (void)setShouldAlertImmediatelyForImmediateTypes:(bool)arg1;
- (void)setStagingBackstopHour:(long long)arg1;
- (void)setSurfaceImmediatelyBetweenBackstopAndKeyroll:(bool)arg1;
- (void)setThresholdOfLocationRelevance:(double)arg1;
- (void)setThresholdOfSignificantDistance:(double)arg1;
- (void)setThresholdOfSignificantDuration:(double)arg1;
- (void)setType:(long long)arg1;
- (bool)shouldAlertImmediatelyForImmediateTypes;
- (long long)stagingBackstopHour;
- (bool)surfaceImmediatelyBetweenBackstopAndKeyroll;
- (double)thresholdOfLocationRelevance;
- (double)thresholdOfSignificantDistance;
- (double)thresholdOfSignificantDuration;
- (long long)type;

@end
