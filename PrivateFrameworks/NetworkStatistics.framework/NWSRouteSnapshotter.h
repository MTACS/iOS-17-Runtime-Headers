
@interface NWSRouteSnapshotter : NWSSnapshotter

- (id)initWithSource:(id)arg1 dest:(id)arg2 mask:(id)arg3 ifindex:(int)arg4;
- (id)snapshot;

@end
