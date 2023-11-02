
@interface AccessibilityAirPodSettingsController : AXUISettingsBaseListController {
    BluetoothDevice * _bluetoothDevice;
    BluetoothDevice * _btDevice;
    PSSpecifier * _doubleTapGroup;
    UIImpactFeedbackGenerator * _hapticGenerator;
    bool  _hapticPlayedValue;
    PSSpecifier * _holdGroup;
    UISlider * _toneVolumeSlider;
}

@property (nonatomic, retain) BluetoothDevice *bluetoothDevice;

- (void).cxx_destruct;
- (id)_btDeviceAddress;
- (void)_updateToneVolumeFooter:(float)arg1;
- (void)applyHapticIfNecessary:(id)arg1;
- (id)bluetoothDevice;
- (double)defaultToneVolumeValue;
- (double)displayedMaxValue;
- (double)holdSpeedValue;
- (id)init;
- (bool)isBeatsProduct;
- (bool)isInWatchSettings;
- (void)jumpToAVSettings:(id)arg1;
- (id)noiseCancellation:(id)arg1;
- (void)setBluetoothDevice:(id)arg1;
- (void)setNoiseCancellation:(id)arg1 specifier:(id)arg2;
- (void)setSpatialAudioLock:(id)arg1 specifier:(id)arg2;
- (void)setSpecifier:(id)arg1;
- (void)setToneVolume:(id)arg1 specifier:(id)arg2;
- (void)setVolumeSwipeEnabled:(id)arg1 specifier:(id)arg2;
- (id)spatialAudioLock:(id)arg1;
- (id)specifiers;
- (bool)supportsSpatialAudio;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tapSpeedValue;
- (id)toneVolume:(id)arg1;
- (double)toneVolumeValue;
- (void)viewWillAppear:(bool)arg1;
- (double)volumeSwipeDurationValue;
- (id)volumeSwipeEnabled:(id)arg1;

@end
