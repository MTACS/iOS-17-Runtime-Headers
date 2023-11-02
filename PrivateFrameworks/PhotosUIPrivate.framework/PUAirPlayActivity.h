
@interface PUAirPlayActivity : PXActivity <PHAirPlayControllerRouteObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedRouteUnavailabilityMessage;
@property (getter=isRouteAvailable, nonatomic, readonly) bool routeAvailable;
@property (readonly) Class superclass;

- (void)_registerForAirPlayNotifications;
- (id)_systemImageName;
- (void)_unregisterForAirPlayNotifications;
- (id)activityTitle;
- (id)activityType;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isRouteAvailable;
- (id)localizedRouteUnavailabilityMessage;
- (void)performActivity;
- (void)tearDownForCompletion;

@end
