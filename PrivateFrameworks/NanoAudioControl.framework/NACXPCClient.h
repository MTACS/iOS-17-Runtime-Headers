
@interface NACXPCClient : NSObject <NACXPCInterface> {
    NSMutableSet * _listeningModesObservingTargets;
    NSMutableSet * _routeObservingCategories;
    NSMutableSet * _volumeObservingTargets;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)EULimitForTarget:(id)arg1 result:(id /* block */)arg2;
- (void)_createConnection;
- (id)_proxy;
- (void)_resumeListeningModesObservingIfNecessary;
- (void)_resumeRouteObservingIfNecessary;
- (void)_resumeVolumeObservingIfNecessary;
- (void)audioRoutesForCategory:(id)arg1 result:(id /* block */)arg2;
- (void)availableListeningModesForTarget:(id)arg1 result:(id /* block */)arg2;
- (void)beginObservingAudioRoutesForCategory:(id)arg1;
- (void)beginObservingListeningModesForTarget:(id)arg1;
- (void)beginObservingVolumeForTarget:(id)arg1;
- (void)currentListeningModeForTarget:(id)arg1 result:(id /* block */)arg2;
- (void)endObservingAudioRoutesForCategory:(id)arg1;
- (void)endObservingListeningModesForTarget:(id)arg1;
- (void)endObservingVolumeForTarget:(id)arg1;
- (void)hapticIntensity:(id /* block */)arg1;
- (void)hapticState:(id /* block */)arg1;
- (id)init;
- (void)mutedStateForTarget:(id)arg1 result:(id /* block */)arg2;
- (void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
- (void)playAudioAndHapticPreview;
- (void)playDefaultHapticPreview;
- (void)playProminentHapticPreview;
- (void)prominentHapticEnabled:(id /* block */)arg1;
- (void)setCurrentListeningMode:(id)arg1 forTarget:(id)arg2;
- (void)setHapticIntensity:(float)arg1;
- (void)setHapticState:(long long)arg1;
- (void)setMuted:(bool)arg1 forTarget:(id)arg2;
- (void)setProminentHapticEnabled:(bool)arg1;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1 forTarget:(id)arg2;
- (void)systemMutedState:(id /* block */)arg1;
- (void)volumeControlAvailabilityForTarget:(id)arg1 result:(id /* block */)arg2;
- (void)volumeValueForTarget:(id)arg1 result:(id /* block */)arg2;
- (void)volumeWarningForTarget:(id)arg1 result:(id /* block */)arg2;

@end
