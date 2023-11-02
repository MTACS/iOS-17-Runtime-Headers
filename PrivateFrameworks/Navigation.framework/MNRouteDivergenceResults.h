
@interface MNRouteDivergenceResults : NSObject {
    NSArray * _results;
    NSUUID * _routeID;
}

@property (nonatomic, retain) NSArray *results;
@property (nonatomic, retain) NSUUID *routeID;

- (void).cxx_destruct;
- (id)description;
- (id)results;
- (id)routeID;
- (void)setResults:(id)arg1;
- (void)setRouteID:(id)arg1;

@end
