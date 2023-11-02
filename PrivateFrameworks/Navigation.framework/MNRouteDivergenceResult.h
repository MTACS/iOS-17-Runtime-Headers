
@interface MNRouteDivergenceResult : NSObject {
    struct { 
        double latitude; 
        double longitude; 
        double altitude; 
    }  _locationCoordinate;
    unsigned long long  _resultType;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
    NSUUID * _routeID;
}

@property (nonatomic) struct { double x1; double x2; double x3; } locationCoordinate;
@property (nonatomic) unsigned long long resultType;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeCoordinate;
@property (nonatomic, retain) NSUUID *routeID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (struct { double x1; double x2; double x3; })locationCoordinate;
- (unsigned long long)resultType;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinate;
- (id)routeID;
- (void)setLocationCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (void)setResultType:(unsigned long long)arg1;
- (void)setRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setRouteID:(id)arg1;

@end
