
@interface HDRacePreviousRouteProfileExtension : NSObject <HDProfileExtension> {
    HDProfile * _profile;
    HDRaceRouteClusterManager * _raceRouteClusterManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDRaceRouteClusterManager *raceRouteClusterManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1;
- (id)raceRouteClusterManager;

@end
