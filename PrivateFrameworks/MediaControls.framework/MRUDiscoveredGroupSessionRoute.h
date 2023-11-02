
@interface MRUDiscoveredGroupSessionRoute : MPAVRoute {
    MRDiscoveredGroupSession * _discoveredGroupSession;
}

@property (nonatomic, retain) MRDiscoveredGroupSession *discoveredGroupSession;

- (void).cxx_destruct;
- (id)discoveredGroupSession;
- (id)initWithDiscoveredGroupSession:(id)arg1;
- (bool)isPhoneRoute;
- (bool)isPickable;
- (bool)isPicked;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void)setDiscoveredGroupSession:(id)arg1;

@end
