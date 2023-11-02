
@protocol HUServiceDetailsCameraSettingsReaderWriterConfigurator

@required

- (HMCameraUserSettings *)cameraSettings;
- (HMCharacteristic *)characteristicForSettings:(HMCameraUserSettings *)arg1;
- (HFCharacteristicValueManager *)characteristicValueManager;
- (NSString *)itemTitle;
- (NSString *)itemTitleLocalizationKey;
- (NSString *)transactionReason;

@end
