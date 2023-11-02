
@interface MNAudioPathwayResourceAccess : NSObject {
    bool  _enableHFPUse;
    NSDictionary * _hfpRoute;
    MNObserverHashTable * _observers;
    NSObject<OS_dispatch_queue> * _pickableRoutesQueue;
    bool  _wantsVolumeControl;
}

@property (nonatomic) bool enableHFPUse;
@property (nonatomic, retain) NSDictionary *hfpRoute;
@property (nonatomic) bool wantsVolumeControl;

- (void).cxx_destruct;
- (void)_findUsableRouteWithHandler:(id /* block */)arg1;
- (void)_mediaServerConnectionDied;
- (bool)_otherAudioIsPlaying;
- (void)_pickableRoutesChanged;
- (void)_registerForObservation;
- (bool)_routeIsAirTunes:(id)arg1;
- (bool)_routeIsBluetooth:(id)arg1;
- (bool)_routeIsForVehicle:(id)arg1;
- (bool)_routeIsHFP:(id)arg1;
- (bool)_routeIsOverride:(id)arg1;
- (bool)_routeIsUsable:(id)arg1;
- (bool)_routeIsWireless:(id)arg1;
- (void)_unregisterForObservation;
- (void)_updateHFPRoute;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (bool)enableHFPUse;
- (id)hfpRoute;
- (id)initWithHFPEnabled:(bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)setEnableHFPUse:(bool)arg1;
- (void)setHfpRoute:(id)arg1;
- (void)setWantsVolumeControl:(bool)arg1;
- (bool)wantsVolumeControl;

@end
