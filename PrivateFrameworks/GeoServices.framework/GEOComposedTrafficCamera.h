
@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice <NSSecureCoding> {
    GEOTrafficCamera * _trafficCamera;
}

@property (nonatomic, readonly) unsigned int cameraPriority;
@property (nonatomic, readonly) unsigned int countryCode;
@property (nonatomic, readonly) bool hasCameraPriority;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasSpeedLimitText;
@property (nonatomic, readonly) bool hasSpeedThreshold;
@property (nonatomic, readonly) unsigned int highlightDistance;
@property (nonatomic, readonly) NSString *speedLimitText;
@property (nonatomic, readonly) double speedThreshold;
@property (nonatomic, readonly) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)cameraPriority;
- (unsigned int)countryCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCameraPriority;
- (bool)hasCountryCode;
- (bool)hasSpeedLimitText;
- (bool)hasSpeedThreshold;
- (unsigned int)highlightDistance;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 trafficCamera:(id)arg4 onRoute:(id)arg5;
- (id)position;
- (id)speedLimitText;
- (double)speedThreshold;
- (int)type;

@end
