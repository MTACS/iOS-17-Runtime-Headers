
@interface GEOComposedRouteTrafficIncidentInfo : NSObject <NSSecureCoding> {
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    GEORouteIncident * _incident;
    double  _offsetMeters;
    struct { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic, retain) GEORouteIncident *incident;
@property (nonatomic) double offsetMeters;
@property (nonatomic) struct { unsigned int x1; float x2; } routeCoordinate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { double x1; double x2; })coordinate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)incident;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)offsetMeters;
- (struct { unsigned int x1; float x2; })routeCoordinate;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setIncident:(id)arg1;
- (void)setOffsetMeters:(double)arg1;
- (void)setRouteCoordinate:(struct { unsigned int x1; float x2; })arg1;

@end
