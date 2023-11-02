
@interface MKRoute : NSObject {
    GEOComposedRoute * _geoComposedRoute;
    MKRoutePolyline * _polyline;
    NSArray * _steps;
}

@property (nonatomic, readonly) NSArray *advisoryNotices;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) double expectedTravelTime;
@property (getter=_geoComposedRoute, nonatomic, readonly) GEOComposedRoute *geoComposedRoute;
@property (nonatomic, readonly) bool hasHighways;
@property (nonatomic, readonly) bool hasTolls;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) MKPolyline *polyline;
@property (nonatomic, readonly) NSArray *steps;
@property (nonatomic, readonly) unsigned long long transportType;

- (void).cxx_destruct;
- (id)_geoComposedRoute;
- (id)_initWithGEOComposedRoute:(id)arg1;
- (id)advisoryNotices;
- (double)distance;
- (double)expectedTravelTime;
- (bool)hasHighways;
- (bool)hasTolls;
- (id)name;
- (id)polyline;
- (id)steps;
- (unsigned long long)transportType;

@end
