
@interface FTMutableSetRequestOrigin : FTSetRequestOrigin

@property (nonatomic) bool enable_geo_location_features;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enable_geo_location_features;
- (id)init;
- (double)latitude;
- (double)longitude;
- (void)setEnable_geo_location_features:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;

@end
