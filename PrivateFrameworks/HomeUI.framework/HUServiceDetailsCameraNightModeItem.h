
@interface HUServiceDetailsCameraNightModeItem : HUServiceDetailsAbstractItem <HUServiceDetailsCameraSettingsReaderWriterConfigurator> {
    HUServiceDetailsCameraSettingsReaderWriter * _settingsReaderWriter;
}

@property (nonatomic, retain) HUServiceDetailsCameraSettingsReaderWriter *settingsReaderWriter;

- (void).cxx_destruct;
- (bool)_canReadWriteNightVisionControl;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)cameraSettings;
- (id)characteristicForSettings:(id)arg1;
- (id)characteristicValueManager;
- (id)itemTitle;
- (id)itemTitleLocalizationKey;
- (void)setSettingsReaderWriter:(id)arg1;
- (id)settingsReaderWriter;
- (id)transactionReason;
- (id)updateUserSettingsWithValue:(bool)arg1;

@end
