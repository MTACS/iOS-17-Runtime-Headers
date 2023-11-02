
@interface MRUAudioModuleController : NSObject <MRUConversationAwarenessControllerDelegate, MRUListeningModeControllerDelegate, MRUSpatialAudioControllerDelegate, MRUSystemOutputDeviceRouteControllerObserver, MRUSystemVolumeControllerDelegate> {
    MRUConversationAwarenessController * _conversationAwarenessController;
    MRUListeningModeController * _listeningModeController;
    NSHashTable * _observers;
    MRUSystemOutputDeviceRouteController * _outputDeviceRouteController;
    MRUSpatialAudioController * _spatialAudioController;
    MRUSystemVolumeController * _volumeController;
}

@property (nonatomic, readonly) MRUConversationAwarenessController *conversationAwarenessController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUListeningModeController *listeningModeController;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (nonatomic, readonly) MRUSpatialAudioController *spatialAudioController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MRUSystemVolumeController *volumeController;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)conversationAwarenessController;
- (void)conversationAwarenessController:(id)arg1 didChangeConversationAwarenessEnabled:(bool)arg2;
- (void)conversationAwarenessController:(id)arg1 didChangeConversationAwarenessSupported:(bool)arg2;
- (id)init;
- (id)initWithOutputDeviceRouteController:(id)arg1;
- (id)listeningModeController;
- (void)listeningModeController:(id)arg1 didChangeAvailablePrimaryListeningMode:(id)arg2;
- (void)listeningModeController:(id)arg1 didChangeAvailableSecondaryListeningModes:(id)arg2;
- (void)listeningModeController:(id)arg1 didChangePrimaryListeningMode:(id)arg2;
- (void)listeningModeController:(id)arg1 didChangeSecondaryListeningMode:(id)arg2;
- (id)observers;
- (id)outputDeviceRouteController;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (id)spatialAudioController;
- (void)spatialAudioController:(id)arg1 didChangeAvailableSpatialModes:(id)arg2;
- (void)spatialAudioController:(id)arg1 didChangeNowPlayingInfo:(id)arg2;
- (void)spatialAudioController:(id)arg1 didChangeSelectedSpatialMode:(id)arg2;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg1;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg1;
- (void)systemVolumeController:(id)arg1 didChangeVolumeControlCapabilities:(unsigned int)arg2 effectiveVolumeValue:(float)arg3 forType:(long long)arg4;
- (id)volumeController;

@end
