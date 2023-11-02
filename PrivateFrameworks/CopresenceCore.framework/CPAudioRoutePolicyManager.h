
@interface CPAudioRoutePolicyManager : NSObject <CPAudioRoutePolicyManager, TURouteControllerDelegate> {
    void observers;
    void pickedRoute;
    void routeController;
}

@property (nonatomic, retain) TURoute *pickedRoute;
@property (nonatomic, readonly) bool sharePlaySupported;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 withQueue:(id)arg2;
- (id)init;
- (id)pickedRoute;
- (void)routesChangedForRouteController:(id)arg1;
- (void)setPickedRoute:(id)arg1;
- (bool)sharePlaySupported;
- (void)switchToSpeakerRouteIfNecessary;

@end
