
@interface MKMapConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _elevationStyle;
    MKPointOfInterestFilter * _pointOfInterestFilter;
    bool  _showsTraffic;
}

@property (nonatomic, copy) MKPointOfInterestFilter *_pointOfInterestFilter;
@property (nonatomic) bool _showsTraffic;
@property (nonatomic) long long elevationStyle;

+ (struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; bool x7; })_cartographicConfigurationForMapConfiguration:(id)arg1;
+ (id)_mapConfigurationWithCartographicConfiguration:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; bool x7; })arg1;
+ (id)_potentiallyLossy_mapConfigurationWithCartographicConfiguration:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; bool x7; })arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1 options:(unsigned long long)arg2 context:(void*)arg3;
- (id)_pointOfInterestFilter;
- (void)_removeObserver:(id)arg1 context:(void*)arg2;
- (void)_setInternalStateFromMapConfiguration:(id)arg1;
- (bool)_showsTraffic;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)elevationStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithElevationStyle:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setElevationStyle:(long long)arg1;
- (void)set_pointOfInterestFilter:(id)arg1;
- (void)set_showsTraffic:(bool)arg1;

@end
