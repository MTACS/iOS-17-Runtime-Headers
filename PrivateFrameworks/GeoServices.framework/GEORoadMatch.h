
@interface GEORoadMatch : NSObject <NSSecureCoding> {
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _coordinateOnRoad;
    double  _courseOnRoad;
    double  _distanceFromJunction;
    double  _distanceFromRoad;
    double  _junctionRadius;
    GEOMultiSectionFeature * _roadFeature;
    NSString * _roadName;
    double  _roadWidth;
}

@property (nonatomic) struct { double x1; double x2; double x3; } coordinateOnRoad;
@property (nonatomic) double courseOnRoad;
@property (nonatomic) double distanceFromJunction;
@property (nonatomic) double distanceFromRoad;
@property (nonatomic) double junctionRadius;
@property (nonatomic, readonly) GEOMultiSectionFeature *roadFeature;
@property (nonatomic, copy) NSString *roadName;
@property (nonatomic) double roadWidth;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { double x1; double x2; double x3; })coordinateOnRoad;
- (double)courseOnRoad;
- (double)distanceFromJunction;
- (double)distanceFromRoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinateOnRoad:(struct { double x1; double x2; double x3; })arg1 courseOnRoad:(double)arg2;
- (double)junctionRadius;
- (id)roadFeature;
- (id)roadName;
- (double)roadWidth;
- (void)setCoordinateOnRoad:(struct { double x1; double x2; double x3; })arg1;
- (void)setCourseOnRoad:(double)arg1;
- (void)setDistanceFromJunction:(double)arg1;
- (void)setDistanceFromRoad:(double)arg1;
- (void)setJunctionRadius:(double)arg1;
- (void)setRoadFeature:(id)arg1;
- (void)setRoadName:(id)arg1;
- (void)setRoadWidth:(double)arg1;

@end
