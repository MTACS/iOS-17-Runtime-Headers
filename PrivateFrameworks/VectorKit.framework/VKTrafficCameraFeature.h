
@interface VKTrafficCameraFeature : VKTrafficFeature {
    unsigned int  _countryCode;
    bool  _hasCountryCode;
    bool  _isAboveSpeedThreshold;
    unsigned int  _speedLimit;
    NSString * _speedLimitText;
    unsigned int  _speedThreshold;
    long long  _type;
}

@property (nonatomic, readonly) unsigned int countryCode;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic) bool isAboveSpeedThreshold;
@property (nonatomic, readonly) NSString *speedLimitText;
@property (nonatomic, readonly) unsigned int speedThreshold;
@property (nonatomic, readonly) long long type;

+ (id)stringForTrafficCameraType:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countryCode;
- (bool)hasCountryCode;
- (id)initWithTrafficCamera:(id)arg1 onRoute:(id)arg2;
- (id)initWithTrafficCameraType:(long long)arg1 uniqueIdentifier:(id)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 onRoute:(id)arg4;
- (bool)isAboveSpeedThreshold;
- (bool)isSpeedLimitCamera;
- (void)populateDebugNode:(void*)arg1;
- (void)setIsAboveSpeedThreshold:(bool)arg1;
- (id)speedLimitText;
- (unsigned int)speedThreshold;
- (long long)type;

@end
