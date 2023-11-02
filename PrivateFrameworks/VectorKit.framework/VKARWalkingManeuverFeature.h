
@interface VKARWalkingManeuverFeature : VKARWalkingFeature {
    struct _retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        NSString *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _displayText;
    double  _maneuverHeading;
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _position;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Coordinate3D<geo::Degrees' */ struct  coordinate; /* unknown property attribute:  double>=d}} */
@property (nonatomic, readonly) NSString *displayText;
@property (nonatomic, readonly) double maneuverHeading;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } position;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeCoordinate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Coordinate3D<geo::Degrees, double> { struct Unit<geo::DegreeUnitDescription, double> { double x_1_1_1; } x1; struct Unit<geo::DegreeUnitDescription, double> { double x_2_1_1; } x2; struct Unit<geo::MeterUnitDescription, double> { double x_3_1_1; } x3; })coordinate;
- (id)description;
- (id)displayText;
- (id)initWithDisplayLocation:(struct { double x1; double x2; double x3; })arg1 routeCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 maneuverHeading:(double)arg3 displayText:(id)arg4;
- (id)initWithDisplayLocation:(struct { double x1; double x2; double x3; })arg1 routeCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 maneuverHeading:(double)arg3 displayText:(id)arg4 maneuverPriority:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (double)maneuverHeading;
- (struct { double x1; double x2; double x3; })position;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinate;
- (void)setDisplayText:(id)arg1;

@end
