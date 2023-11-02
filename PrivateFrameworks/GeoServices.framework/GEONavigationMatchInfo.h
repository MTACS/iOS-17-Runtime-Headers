
@interface GEONavigationMatchInfo : NSObject {
    double  courseDelta;
    double  courseMatchScore;
    double  courseWeight;
    double  distanceFromNearestJunction;
    double  distanceFromRoad;
    double  distanceFromRoute;
    double  distanceMatchScore;
    double  distanceWeight;
    double  maxCourseDelta;
    double  maxDistance;
    double  roadCourseDelta;
    double  roadWidthOnRoute;
    double  routeMatchScore;
}

@property (nonatomic) double courseDelta;
@property (nonatomic) double courseMatchScore;
@property (nonatomic) double courseWeight;
@property (nonatomic) double distanceFromNearestJunction;
@property (nonatomic) double distanceFromRoad;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) double distanceMatchScore;
@property (nonatomic) double distanceWeight;
@property (nonatomic) double maxCourseDelta;
@property (nonatomic) double maxDistance;
@property (nonatomic) double roadCourseDelta;
@property (nonatomic) double roadWidthOnRoute;
@property (nonatomic) double routeMatchScore;

- (double)courseDelta;
- (double)courseMatchScore;
- (double)courseWeight;
- (id)description;
- (double)distanceFromNearestJunction;
- (double)distanceFromRoad;
- (double)distanceFromRoute;
- (double)distanceMatchScore;
- (double)distanceWeight;
- (double)maxCourseDelta;
- (double)maxDistance;
- (double)roadCourseDelta;
- (double)roadWidthOnRoute;
- (double)routeMatchScore;
- (void)setCourseDelta:(double)arg1;
- (void)setCourseMatchScore:(double)arg1;
- (void)setCourseWeight:(double)arg1;
- (void)setDistanceFromNearestJunction:(double)arg1;
- (void)setDistanceFromRoad:(double)arg1;
- (void)setDistanceFromRoute:(double)arg1;
- (void)setDistanceMatchScore:(double)arg1;
- (void)setDistanceWeight:(double)arg1;
- (void)setMaxCourseDelta:(double)arg1;
- (void)setMaxDistance:(double)arg1;
- (void)setRoadCourseDelta:(double)arg1;
- (void)setRoadWidthOnRoute:(double)arg1;
- (void)setRouteMatchScore:(double)arg1;

@end
