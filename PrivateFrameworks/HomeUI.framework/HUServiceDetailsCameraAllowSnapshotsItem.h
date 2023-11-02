
@interface HUServiceDetailsCameraAllowSnapshotsItem : HUServiceDetailsAbstractItem <HUServiceDetailsCameraSettingsReaderWriterConfigurator> {
    HMCameraUserSettings * _cameraUserSettings;
    HUServiceDetailsCameraSettingsReaderWriter * _settingsReaderWriter;
    bool  _shouldBeHidden;
}

@property (nonatomic, retain) HMCameraUserSettings *cameraUserSettings;
@property (nonatomic, retain) HUServiceDetailsCameraSettingsReaderWriter *settingsReaderWriter;
@property (nonatomic) bool shouldBeHidden;

- (void).cxx_destruct;
- (bool)_canReadWriteHMCameraSnapshotsControl;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)cameraSettings;
- (id)cameraUserSettings;
- (id)characteristicForSettings:(id)arg1;
- (id)characteristicValueManager;
- (id)initWithSourceServiceItem:(id)arg1 home:(id)arg2 shouldBeHidden:(bool)arg3;
- (id)itemTitle;
- (id)itemTitleLocalizationKey;
- (void)setCameraUserSettings:(id)arg1;
- (void)setSettingsReaderWriter:(id)arg1;
- (void)setShouldBeHidden:(bool)arg1;
- (id)settingsReaderWriter;
- (bool)shouldBeHidden;
- (id)transactionReason;
- (id)updateUserSettingsWithValue:(bool)arg1;

@end
