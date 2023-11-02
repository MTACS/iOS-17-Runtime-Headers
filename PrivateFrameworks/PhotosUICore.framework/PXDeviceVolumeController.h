
@interface PXDeviceVolumeController : PXVolumeController <PXSettingsKeyObserver> {
    float  _lastKnownVolume;
    NSObject<OS_os_log> * _log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleSystemVolumeChange:(id)arg1;
- (id)_initAsSharedInstance;
- (id)initWithIsInSilentMode:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
