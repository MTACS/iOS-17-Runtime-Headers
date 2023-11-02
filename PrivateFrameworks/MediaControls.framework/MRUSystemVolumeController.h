
@interface MRUSystemVolumeController : NSObject <MPVolumeControllerDelegate, MRUSystemOutputDeviceRouteControllerObserver> {
    <MRUSystemVolumeControllerDelegate> * _delegate;
    MRUSystemOutputDeviceRouteController * _outputDeviceRouteController;
    MPVolumeController * _primaryVolumeController;
    MPVolumeController * _secondaryVolumeController;
    MPVolumeController * _systemVolumeController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUSystemVolumeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (nonatomic, readonly) MPVolumeController *primaryVolumeController;
@property (nonatomic, readonly) MPVolumeController *secondaryVolumeController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPVolumeController *systemVolumeController;
@property (nonatomic, readonly, copy) NSString *volumeAudioCategory;

+ (id)packageStateForVolumeValue:(float)arg1;

- (void).cxx_destruct;
- (void)decreaseVolume;
- (id)delegate;
- (void)increaseVolume;
- (id)initWithOutputDeviceRouteController:(id)arg1;
- (id)outputDeviceRouteController;
- (id)primaryVolumeController;
- (id)secondaryVolumeController;
- (void)setDelegate:(id)arg1;
- (void)setVolumeValue:(float)arg1 forType:(long long)arg2;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg1;
- (id)systemVolumeController;
- (long long)typeForVolumeController:(id)arg1;
- (void)updateVolumeControllers;
- (id)volumeAudioCategory;
- (unsigned int)volumeCapabilitiesForType:(long long)arg1;
- (void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned int)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (id)volumeControllerForType:(long long)arg1;
- (float)volumeValueForType:(long long)arg1;

@end
