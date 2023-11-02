
@interface MRURoutingViewControllerUpdate : NSObject {
    NSArray * _activatedVendorSpecificDeviceIDs;
    NSArray * _airPlayRoutes;
    NSArray * _availableVendorSpecificDeviceIDs;
    bool  _canGroup;
    NSArray * _displayAsPickedRoutes;
    NSArray * _displayableAvailableRoutes;
    bool  _hasPendingPickedRoutes;
    NSArray * _nativeRoutes;
    NSArray * _nativeRoutesInVendorSpecificGroup;
    NSArray * _pendingPickedRoutes;
    NSArray * _pendingVendorSpecificDeviceIDs;
    NSArray * _pickedRoutes;
    NSDictionary * _routeGrouping;
    bool  _shouldReload;
    NSArray * _volumeCapableRoutes;
}

@property (nonatomic, copy) NSArray *activatedVendorSpecificDeviceIDs;
@property (nonatomic, copy) NSArray *airPlayRoutes;
@property (nonatomic, copy) NSArray *availableVendorSpecificDeviceIDs;
@property (nonatomic) bool canGroup;
@property (nonatomic, copy) NSArray *displayAsPickedRoutes;
@property (nonatomic, copy) NSArray *displayableAvailableRoutes;
@property (nonatomic) bool hasPendingPickedRoutes;
@property (nonatomic, copy) NSArray *nativeRoutes;
@property (nonatomic, copy) NSArray *nativeRoutesInVendorSpecificGroup;
@property (nonatomic, copy) NSArray *pendingPickedRoutes;
@property (nonatomic, copy) NSArray *pendingVendorSpecificDeviceIDs;
@property (nonatomic, copy) NSArray *pickedRoutes;
@property (nonatomic, copy) NSDictionary *routeGrouping;
@property (nonatomic) bool shouldReload;
@property (nonatomic, copy) NSArray *volumeCapableRoutes;

- (void).cxx_destruct;
- (id)activatedVendorSpecificDeviceIDs;
- (id)airPlayRoutes;
- (id)availableVendorSpecificDeviceIDs;
- (bool)canGroup;
- (id)displayAsPickedRoutes;
- (id)displayableAvailableRoutes;
- (bool)hasPendingPickedRoutes;
- (id)nativeRoutes;
- (id)nativeRoutesInVendorSpecificGroup;
- (id)pendingPickedRoutes;
- (id)pendingVendorSpecificDeviceIDs;
- (id)pickedRoutes;
- (id)routeGrouping;
- (void)setActivatedVendorSpecificDeviceIDs:(id)arg1;
- (void)setAirPlayRoutes:(id)arg1;
- (void)setAvailableVendorSpecificDeviceIDs:(id)arg1;
- (void)setCanGroup:(bool)arg1;
- (void)setDisplayAsPickedRoutes:(id)arg1;
- (void)setDisplayableAvailableRoutes:(id)arg1;
- (void)setHasPendingPickedRoutes:(bool)arg1;
- (void)setNativeRoutes:(id)arg1;
- (void)setNativeRoutesInVendorSpecificGroup:(id)arg1;
- (void)setPendingPickedRoutes:(id)arg1;
- (void)setPendingVendorSpecificDeviceIDs:(id)arg1;
- (void)setPickedRoutes:(id)arg1;
- (void)setRouteGrouping:(id)arg1;
- (void)setShouldReload:(bool)arg1;
- (void)setVolumeCapableRoutes:(id)arg1;
- (bool)shouldReload;
- (id)volumeCapableRoutes;

@end
