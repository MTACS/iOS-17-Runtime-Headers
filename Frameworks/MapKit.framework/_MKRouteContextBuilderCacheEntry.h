
@interface _MKRouteContextBuilderCacheEntry : NSObject {
    NSArray * _overlapResults;
    NSArray * _overlappingSections;
    NSArray * _routeIDs;
}

@property (nonatomic, retain) NSArray *overlapResults;
@property (nonatomic, retain) NSArray *overlappingSections;
@property (nonatomic, retain) NSArray *routeIDs;

- (void).cxx_destruct;
- (id)initWithRoutes:(id)arg1;
- (id)overlapResults;
- (id)overlappingSections;
- (id)routeIDs;
- (void)setOverlapResults:(id)arg1;
- (void)setOverlappingSections:(id)arg1;
- (void)setRouteIDs:(id)arg1;

@end
