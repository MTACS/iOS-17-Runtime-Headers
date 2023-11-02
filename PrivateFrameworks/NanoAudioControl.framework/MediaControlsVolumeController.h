
@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate> {
    bool  _isSplitRoute;
    NSHashTable * _observers;
    MPAVOutputDeviceRoute * _primaryOutputDeviceRoute;
    MPVolumeController * _primaryVolumeController;
    MPAVOutputDeviceRoute * _secondaryOutputDeviceRoute;
    MPVolumeController * _secondaryVolumeController;
    MPAVOutputDeviceRoute * _systemOutputDeviceRoute;
    MPAVEndpointRoute * _systemRoute;
    MPVolumeController * _systemVolumeController;
    NSString * _volumeAudioCategory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSplitRoute;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) MPAVOutputDeviceRoute *primaryOutputDeviceRoute;
@property (nonatomic, retain) MPVolumeController *primaryVolumeController;
@property (nonatomic, retain) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute;
@property (nonatomic, retain) MPVolumeController *secondaryVolumeController;
@property (readonly) Class superclass;
@property (nonatomic, retain) MPAVOutputDeviceRoute *systemOutputDeviceRoute;
@property (nonatomic, retain) MPAVEndpointRoute *systemRoute;
@property (nonatomic, retain) MPVolumeController *systemVolumeController;
@property (nonatomic, copy) NSString *volumeAudioCategory;

- (void).cxx_destruct;
- (void)_notifyVolumeChangedForVolumeController:(id)arg1 volumeControlAvailable:(bool)arg2 effectiveVolume:(float)arg3;
- (unsigned long long)_routeForVolumeController:(id)arg1;
- (bool)_setupOutputDevicesAndVolumeControllersIfNeeded;
- (void)addObserver:(id)arg1;
- (id)availableBluetoothListeningModeForRouteType:(unsigned long long)arg1;
- (id)currentBluetoothListeningModeForRouteType:(unsigned long long)arg1;
- (id)imageForRouteType:(unsigned long long)arg1;
- (id)init;
- (bool)isSplitRoute;
- (id)observers;
- (id)primaryOutputDeviceRoute;
- (id)primaryVolumeController;
- (void)removeObserver:(id)arg1;
- (void)routeDidChangeNotification;
- (id)routeNameForRouteType:(unsigned long long)arg1;
- (id)secondaryOutputDeviceRoute;
- (id)secondaryVolumeController;
- (bool)setCurrentBluetoothListeningModeForRouteType:(unsigned long long)arg1 bluetoothListeningMode:(id)arg2 error:(id*)arg3;
- (void)setObservers:(id)arg1;
- (void)setPrimaryOutputDeviceRoute:(id)arg1;
- (void)setPrimaryVolumeController:(id)arg1;
- (void)setSecondaryOutputDeviceRoute:(id)arg1;
- (void)setSecondaryVolumeController:(id)arg1;
- (void)setSystemOutputDeviceRoute:(id)arg1;
- (void)setSystemRoute:(id)arg1;
- (void)setSystemVolumeController:(id)arg1;
- (void)setVolume:(float)arg1 forRouteType:(unsigned long long)arg2;
- (void)setVolumeAudioCategory:(id)arg1;
- (id)systemOutputDeviceRoute;
- (id)systemRoute;
- (id)systemVolumeController;
- (id)volumeAudioCategory;
- (bool)volumeControlAvailableForRouteType:(unsigned long long)arg1;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (float)volumeForRouteType:(unsigned long long)arg1;

@end
