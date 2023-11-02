
@interface NACIDSClient : NSObject <IDSServiceDelegate> {
    <NACIDSClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _idsDispatchQueue;
    NSObject<OS_dispatch_queue> * _idsOutgoingQueue;
    IDSService * _idsService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NACIDSClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAudioRoutesDidChange:(id)arg1;
- (void)_handleEUVolumeLimitDidChange:(id)arg1;
- (void)_handleHapticIntensityDidChange:(id)arg1;
- (void)_handleHapticStateDidChange:(id)arg1;
- (void)_handleListeningModesDidChange:(id)arg1;
- (void)_handleMutedStateDidChange:(id)arg1;
- (void)_handleProminentHapticStateDidChange:(id)arg1;
- (void)_handleRouteObservationCancelled:(id)arg1;
- (void)_handleSystemMutedStatedDidChange:(id)arg1;
- (void)_handleVolumeControlAvailabilityDidChange:(id)arg1;
- (void)_handleVolumeObservationCancelled:(id)arg1;
- (void)_handleVolumeValueDidChange:(id)arg1;
- (void)_handleVolumeWarningDidChange:(id)arg1;
- (void)_sendMessage:(id)arg1 type:(long long)arg2 timeout:(double)arg3 queueOne:(id)arg4 priority:(long long)arg5;
- (void)beginObservingAudioRoutesForCategory:(id)arg1;
- (void)beginObservingListeningModesForTarget:(id)arg1;
- (void)beginObservingVolumeForTarget:(id)arg1;
- (id)delegate;
- (void)endObservingAudioRoutesForCategory:(id)arg1;
- (void)endObservingListeningModesForTarget:(id)arg1;
- (void)endObservingVolumeForTarget:(id)arg1;
- (id)init;
- (void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
- (void)playTone:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)setCurrentListeningMode:(id)arg1 forTarget:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setHapticState:(long long)arg1;
- (void)setMuted:(bool)arg1 forTarget:(id)arg2;
- (void)setProminentHapticEnabled:(bool)arg1;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1 forTarget:(id)arg2;

@end
