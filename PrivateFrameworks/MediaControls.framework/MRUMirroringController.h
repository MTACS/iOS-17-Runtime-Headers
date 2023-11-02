
@interface MRUMirroringController : NSObject <MRUMirroringDiscoverySessionControllerDelegate, MRUOutputContextControllerDelegate> {
    MRUOutputContextController * _audioContextController;
    MRUMirroringDiscoverySessionController * _audioDiscoverySessionController;
    NSArray * _availableAudioOutputDevices;
    NSArray * _availableOutputDevices;
    NSMutableSet * _busyIdentifiers;
    <MRUMirroringControllerDelegate> * _delegate;
    MRUOutputContextController * _outputContextController;
    MRUMirroringDiscoverySessionController * _outputDeviceDiscoverySessionController;
    AVOutputDevice * _selectedAudioOutputDevice;
    AVOutputDevice * _selectedOutputDevice;
    bool  _tetheredDisplayPortModeEnabled;
}

@property (nonatomic, retain) MRUOutputContextController *audioContextController;
@property (nonatomic, retain) MRUMirroringDiscoverySessionController *audioDiscoverySessionController;
@property (nonatomic, readonly) NSArray *availableAudioOutputDevices;
@property (nonatomic, readonly) NSArray *availableOutputDevices;
@property (nonatomic, retain) NSMutableSet *busyIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUMirroringControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MRUOutputContextController *outputContextController;
@property (nonatomic, retain) MRUMirroringDiscoverySessionController *outputDeviceDiscoverySessionController;
@property (nonatomic, readonly) AVOutputDevice *selectedAudioOutputDevice;
@property (nonatomic, readonly) AVOutputDevice *selectedOutputDevice;
@property (readonly) Class superclass;
@property (nonatomic) bool tetheredDisplayPortModeEnabled;

+ (id)mirroringControllerWithAudioRoutingSupport;
+ (id)symbolNameForOutputDevice:(id)arg1;

- (void).cxx_destruct;
- (void)addBusyIdentifier:(id)arg1;
- (id)audioContextController;
- (id)audioDiscoverySessionController;
- (id)availableAudioOutputDevices;
- (id)availableOutputDevices;
- (id)busyIdentifiers;
- (id)delegate;
- (id)init;
- (void)mirrorToOutputDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)mirroringDiscoverySessionController:(id)arg1 didChangeAvailableOutputDevices:(id)arg2;
- (id)outputContextController;
- (void)outputContextController:(id)arg1 didChangeOutputDevice:(id)arg2;
- (id)outputDeviceDiscoverySessionController;
- (id)outputDeviceForID:(id)arg1;
- (void)pairingHandlerNotification:(id)arg1;
- (void)removeBusyIdentifier:(id)arg1;
- (void)selectAudioOutputDevice:(id)arg1 completion:(id /* block */)arg2;
- (id)selectedAudioOutputDevice;
- (id)selectedOutputDevice;
- (void)setAudioContextController:(id)arg1;
- (void)setAudioDiscoverySessionController:(id)arg1;
- (void)setBusyIdentifiers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOutputContextController:(id)arg1;
- (void)setOutputDeviceDiscoverySessionController:(id)arg1;
- (void)setTetheredDisplayPortModeEnabled:(bool)arg1;
- (void)startDetailedDiscovery;
- (void)startMirroringToOutputDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)stopDetailedDiscovery;
- (void)stopMirroringWithCompletion:(id /* block */)arg1;
- (bool)tetheredDisplayPortModeEnabled;
- (void)updateAvailableAudioOutputDevices;
- (void)updateAvailableOutputDevices;
- (void)updateSelectedAudioOutputDevice;
- (void)updateSelectedOutputDevice;

@end
