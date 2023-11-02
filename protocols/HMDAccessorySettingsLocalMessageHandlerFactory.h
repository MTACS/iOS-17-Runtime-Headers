
@protocol HMDAccessorySettingsLocalMessageHandlerFactory <NSObject>

@required

- (HMDAccessorySettingsLocalMessageHandler *)createAccessorySettingsLocalMessageHandlerWithHomeUUID:(NSUUID *)arg1 languageValuesDataProvider:(id <HMDLanguageValueListSettingDataProvider>)arg2;

@end
