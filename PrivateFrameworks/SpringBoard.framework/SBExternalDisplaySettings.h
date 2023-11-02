
@interface SBExternalDisplaySettings : PTSettings {
    long long  _activeDisplayTrackingMethodology;
    SBExternalDisplayRuntimeAvailabilitySettings * _availabilitySettings;
    bool  _fakeStorageForChamois97748869Enabling;
    double  _fakeStorageForContentsScale;
    bool  _fakeStorageForUnderpoweredDeviceSupport;
    bool  _fakeStorageForWirelessDisplaySupport;
    PTOutlet * _killSpringBoardOutlet;
}

@property (nonatomic) long long activeDisplayTrackingMethodology;
@property (nonatomic, retain) SBExternalDisplayRuntimeAvailabilitySettings *availabilitySettings;
@property (nonatomic) bool fakeStorageForChamois97748869Enabling;
@property (nonatomic) double fakeStorageForContentsScale;
@property (nonatomic) bool fakeStorageForUnderpoweredDeviceSupport;
@property (nonatomic) bool fakeStorageForWirelessDisplaySupport;
@property (nonatomic, retain) PTOutlet *killSpringBoardOutlet;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (long long)activeDisplayTrackingMethodology;
- (id)availabilitySettings;
- (bool)fakeStorageForChamois97748869Enabling;
- (double)fakeStorageForContentsScale;
- (bool)fakeStorageForUnderpoweredDeviceSupport;
- (bool)fakeStorageForWirelessDisplaySupport;
- (id)killSpringBoardOutlet;
- (void)setActiveDisplayTrackingMethodology:(long long)arg1;
- (void)setAvailabilitySettings:(id)arg1;
- (void)setDefaultValues;
- (void)setFakeStorageForChamois97748869Enabling:(bool)arg1;
- (void)setFakeStorageForContentsScale:(double)arg1;
- (void)setFakeStorageForUnderpoweredDeviceSupport:(bool)arg1;
- (void)setFakeStorageForWirelessDisplaySupport:(bool)arg1;
- (void)setKillSpringBoardOutlet:(id)arg1;

@end
