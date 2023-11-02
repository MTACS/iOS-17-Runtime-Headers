
@interface MPAVRoutingViewControllerUpdate : NSObject {
    bool  _canGroup;
    NSArray * _displayAsPickedRoutes;
    NSArray * _displayableAvailableRoutes;
    bool  _hasPendingPickedRoutes;
    NSArray * _pendingPickedRoutes;
    NSArray * _pickedRoutes;
    NSDictionary * _routeGrouping;
    bool  _shouldReload;
    NSArray * _volumeCapableRoutes;
}

@property (nonatomic) bool canGroup;
@property (nonatomic, copy) NSArray *displayAsPickedRoutes;
@property (nonatomic, copy) NSArray *displayableAvailableRoutes;
@property (nonatomic) bool hasPendingPickedRoutes;
@property (nonatomic, copy) NSArray *pendingPickedRoutes;
@property (nonatomic, copy) NSArray *pickedRoutes;
@property (nonatomic, copy) NSDictionary *routeGrouping;
@property (nonatomic) bool shouldReload;
@property (nonatomic, copy) NSArray *volumeCapableRoutes;

- (void).cxx_destruct;
- (bool)canGroup;
- (id)displayAsPickedRoutes;
- (id)displayableAvailableRoutes;
- (bool)hasPendingPickedRoutes;
- (id)pendingPickedRoutes;
- (id)pickedRoutes;
- (id)routeGrouping;
- (void)setCanGroup:(bool)arg1;
- (void)setDisplayAsPickedRoutes:(id)arg1;
- (void)setDisplayableAvailableRoutes:(id)arg1;
- (void)setHasPendingPickedRoutes:(bool)arg1;
- (void)setPendingPickedRoutes:(id)arg1;
- (void)setPickedRoutes:(id)arg1;
- (void)setRouteGrouping:(id)arg1;
- (void)setShouldReload:(bool)arg1;
- (void)setVolumeCapableRoutes:(id)arg1;
- (bool)shouldReload;
- (id)volumeCapableRoutes;

@end
