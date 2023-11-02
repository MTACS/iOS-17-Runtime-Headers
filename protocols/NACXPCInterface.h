
@protocol NACXPCInterface <NSObject>

@required

- (void)EULimitForTarget:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NACProxyVolumeControlTarget *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)audioRoutesForCategory:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)availableListeningModesForTarget:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NACProxyVolumeControlTarget *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSOrderedSet *, void*
- (void)beginObservingAudioRoutesForCategory:(NSString *)arg1;
- (void)beginObservingListeningModesForTarget:(NACProxyVolumeControlTarget *)arg1;
- (void)beginObservingVolumeForTarget:(NACProxyVolumeControlTarget *)arg1;
- (void)currentListeningModeForTarget:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NACProxyVolumeControlTarget *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)endObservingAudioRoutesForCategory:(NSString *)arg1;
- (void)endObservingListeningModesForTarget:(NACProxyVolumeControlTarget *)arg1;
- (void)endObservingVolumeForTarget:(NACProxyVolumeControlTarget *)arg1;
- (void)hapticIntensity:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)hapticState:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)mutedStateForTarget:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NACProxyVolumeControlTarget *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)pickAudioRouteWithIdentifier:(NSString *)arg1 category:(NSString *)arg2;
- (void)playAudioAndHapticPreview;
- (void)playDefaultHapticPreview;
- (void)playProminentHapticPreview;
- (void)prominentHapticEnabled:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setCurrentListeningMode:(NSString *)arg1 forTarget:(NACProxyVolumeControlTarget *)arg2;
- (void)setHapticIntensity:(float)arg1;
- (void)setHapticState:(long long)arg1;
- (void)setMuted:(bool)arg1 forTarget:(NACProxyVolumeControlTarget *)arg2;
- (void)setProminentHapticEnabled:(bool)arg1;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1 forTarget:(NACProxyVolumeControlTarget *)arg2;
- (void)systemMutedState:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)volumeControlAvailabilityForTarget:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NACProxyVolumeControlTarget *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)volumeValueForTarget:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 7: NACProxyVolumeControlTarget *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, void*
- (void)volumeWarningForTarget:(void *)arg1 result:(void *)arg2; // needs 2 arg types, found 8: NACProxyVolumeControlTarget *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, long long, void*

@end
