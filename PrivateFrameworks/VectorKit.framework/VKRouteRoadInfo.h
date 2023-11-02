
@interface VKRouteRoadInfo : NSObject {
    NSString * _name;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    NSString * _shieldGroup;
}

@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic, readonly, retain) NSString *shieldGroup;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 shieldGroup:(id)arg2 offset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3;
- (id)name;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (id)shieldGroup;

@end
