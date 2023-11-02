
@interface GEOComposedETARouteStep : NSObject <GEOComposedRouteStepTravelTimeProvider, NSSecureCoding> {
    double  _length;
    struct GEOPolylineCoordinateRange { 
        struct { 
            unsigned int index; 
            float offset; 
        } start; 
        struct { 
            unsigned int index; 
            float offset; 
        } end; 
    }  _routeCoordinateRange;
    unsigned long long  _stepID;
    GEOTimeCheckpoints * _timeCheckpoints;
    double  _travelDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double length;
@property (nonatomic) struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; } routeCoordinateRange;
@property (nonatomic) unsigned long long stepID;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOTimeCheckpoints *timeCheckpoints;
@property (nonatomic) double travelDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithPrecision:(unsigned long long)arg1;
- (double)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)length;
- (struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })routeCoordinateRange;
- (void)setLength:(double)arg1;
- (void)setRouteCoordinateRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x_1_1_1; float x_1_1_2; } x1; struct { unsigned int x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStepID:(unsigned long long)arg1;
- (void)setTimeCheckpoints:(id)arg1;
- (void)setTravelDuration:(double)arg1;
- (unsigned long long)stepID;
- (id)timeCheckpoints;
- (double)travelDuration;
- (double)travelTime;

@end
