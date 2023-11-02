
@interface GEORoadMatcherCandidateSegment : NSObject {
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _coordinateOnSegment;
    double  _distanceFromSegment;
    double  _distanceInMetersFromJunction;
    GEOMapFeatureJunction * _junction;
    GEOMapFeatureRoad * _road;
    double  _score;
    double  _segmentAngle;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; } coordinateOnSegment;
@property (nonatomic, readonly) double distanceFromJunction;
@property (nonatomic, readonly) double distanceFromSegment;
@property (nonatomic, readonly) GEOMapFeatureJunction *junction;
@property (nonatomic, readonly) GEOMapFeatureRoad *road;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) double segmentAngle;

- (void).cxx_destruct;
- (struct { double x1; double x2; double x3; })coordinateOnSegment;
- (double)distanceFromJunction;
- (double)distanceFromSegment;
- (id)init;
- (id)initWithCoordinate:(struct { double x1; double x2; double x3; })arg1 angle:(double)arg2 road:(id)arg3 startCoordinate:(struct { double x1; double x2; double x3; })arg4 endCoordinate:(struct { double x1; double x2; double x3; })arg5 penalties:(id)arg6;
- (id)junction;
- (id)road;
- (double)score;
- (double)segmentAngle;

@end
