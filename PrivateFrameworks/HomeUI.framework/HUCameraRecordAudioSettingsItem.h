
@interface HUCameraRecordAudioSettingsItem : HFItem <HUServiceDetailsCameraSettingsReaderWriterConfigurator> {
    HMCameraProfile * _cameraProfile;
    HMHome * _home;
    HUServiceDetailsCameraSettingsReaderWriter * _settingsReaderWriter;
}

@property (nonatomic, retain) HMCameraProfile *cameraProfile;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HUServiceDetailsCameraSettingsReaderWriter *settingsReaderWriter;

- (void).cxx_destruct;
- (bool)_canReadWriteCameraRecordingSettings;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)cameraProfile;
- (id)cameraSettings;
- (id)characteristicForSettings:(id)arg1;
- (id)characteristicValueManager;
- (id)home;
- (id)init;
- (id)initWithCameraProfile:(id)arg1;
- (id)itemTitle;
- (id)itemTitleLocalizationKey;
- (void)setCameraProfile:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setSettingsReaderWriter:(id)arg1;
- (id)settingsReaderWriter;
- (id)transactionReason;
- (id)updateRecordAudioSettingWithValue:(bool)arg1;

@end
