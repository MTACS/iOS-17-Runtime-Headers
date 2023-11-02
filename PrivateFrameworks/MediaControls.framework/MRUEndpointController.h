
@interface MRUEndpointController : NSObject <MediaControlsEndpointControllerDelegate> {
    MediaControlsEndpointController * _endpointController;
    NSHashTable * _observers;
}

@property (getter=isAirPlaying, nonatomic, readonly) bool airplaying;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MediaControlsEndpointController *endpointController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDeviceSystemRoute;
@property (nonatomic, readonly) bool isEndpointDiscovered;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, readonly, copy) MPAVEndpointRoute *route;
@property (nonatomic, readonly, copy) NSString *routeUID;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool updatesActiveEndpointInPlace;

+ (id)localEndpointController;
+ (id)proactiveEndpointController;
+ (id)proactiveRecommendedEndpointController;
+ (id)userSelectedEndpointController;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)connectAllowingAuthenticationWithCompletion:(id /* block */)arg1;
- (bool)containsOutputDeviceWithRouteUID:(id)arg1;
- (id)endpointController;
- (void)endpointController:(id)arg1 didLoadNewResponse:(id)arg2;
- (void)endpointControllerDidChangeState:(id)arg1;
- (void)endpointControllerRouteDidUpdate:(id)arg1;
- (id)initWithEndpointController:(id)arg1;
- (id)initWithRouteUID:(id)arg1 client:(id)arg2 player:(id)arg3;
- (bool)isAirPlaying;
- (bool)isDeviceSystemRoute;
- (bool)isEndpointDiscovered;
- (void)launchNowPlayingApp;
- (void)notifyObserversRouteDidUpdate;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (id)response;
- (id)route;
- (id)routeUID;
- (void)setObservers:(id)arg1;
- (long long)state;
- (bool)updatesActiveEndpointInPlace;

@end
