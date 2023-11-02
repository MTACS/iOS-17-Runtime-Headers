
@protocol HMAccessoryDelegatePrivate <HMAccessoryDelegate>

@optional

- (void)accessory:(HMAccessory *)arg1 didAddControlTarget:(HMAccessory *)arg2;
- (void)accessory:(HMAccessory *)arg1 didAddSymptomsHandler:(HMSymptomsHandler *)arg2;
- (void)accessory:(HMAccessory *)arg1 didRemoveControlTarget:(HMAccessory *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateApplicationDataForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBulletinBoardNotificationServiceGroupForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBundleID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateConfigurationStateForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateConfiguredNameForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateDefaultNameForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateDevice:(HMDevice *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareUpdateAvailable:(bool)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateHasAuthorizationDataForCharacteristic:(HMCharacteristic *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateLastKnownOperatingStateResponseForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateLastKnownSleepDiscoveryModeForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateLoggedInAccount:(ACAccount *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdatePairingIdentity:(HMFPairingIdentity *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateServiceSubtypeForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateSoftwareVersion:(HMFSoftwareVersion *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateStoreID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateSupportsWalletKey:(bool)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateWifiNetworkInfo:(HMFWiFiNetworkInfo *)arg2;
- (void)accessoryDidRemoveSymptomsHandler:(HMAccessory *)arg1;
- (void)accessoryDidSetHasOnboardedForNaturalLighting:(HMAccessory *)arg1;
- (void)accessoryDidUpdateAdditionalSetupRequired:(HMAccessory *)arg1;
- (void)accessoryDidUpdateApplicationData:(HMAccessory *)arg1;
- (void)accessoryDidUpdateAudioDestination:(HMAccessory *)arg1;
- (void)accessoryDidUpdateAudioDestinationController:(HMAccessory *)arg1;
- (void)accessoryDidUpdateAudioReturnChannelSupport:(HMAccessory *)arg1;
- (void)accessoryDidUpdateCalibrationStatus:(HMAccessory *)arg1;
- (void)accessoryDidUpdateControllable:(HMAccessory *)arg1;
- (void)accessoryDidUpdateDiagnosticsTransferSupport:(HMAccessory *)arg1;
- (void)accessoryDidUpdateHomeLevelLocationServiceSettingSupport:(HMAccessory *)arg1;
- (void)accessoryDidUpdateMultiUserSupport:(HMAccessory *)arg1;
- (void)accessoryDidUpdatePairingIdentity:(HMAccessory *)arg1;
- (void)accessoryDidUpdatePendingConfigurationIdentifier:(HMAccessory *)arg1;
- (void)accessoryDidUpdatePreferredMediaUser:(HMAccessory *)arg1;
- (void)accessoryDidUpdateReachableTransports:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsAnnounce:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsAudioAnalysis:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsCompanionInitiatedRestart:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsDoorbellChime:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsDropIn:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsJustSiri:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsMediaActions:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsMusicAlarm:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsPreferredMediaUser:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsRMVonAppleTV:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsThirdPartyMusic:(HMAccessory *)arg1;
- (void)accessoryDidUpdateSupportsUserMediaSettings:(HMAccessory *)arg1;
- (void)accessoryDidUpdateTargetControlSupport:(HMAccessory *)arg1;

@end
