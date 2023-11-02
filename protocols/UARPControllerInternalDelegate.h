
@protocol UARPControllerInternalDelegate

@required

- (bool)addAccessory:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2;
- (bool)changeAssetLocation:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2;
- (bool)checkForUpdate:(UARPAccessory *)arg1;
- (bool)disableTRMSystemAuthenticationForRegistryEntryID:(NSNumber *)arg1;
- (bool)downloadAvailableFirmwareUpdate:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2 withUserIntent:(bool)arg3;
- (bool)downloadReleaseNotes:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2;
- (bool)enableTRMSystemAuthenticationForRegistryEntryID:(NSNumber *)arg1;
- (UARPAssetID *)getAssetIDForAccessoryID:(UARPAccessoryID *)arg1;
- (NSDictionary *)getAttestationCertificates:(NSString *)arg1;
- (bool)getAttestationCertificates:(NSString *)arg1 assetID:(UARPAssetID *)arg2;
- (NSString *)getSandboxExtensionTokenForAssetID:(UARPAssetID *)arg1;
- (NSString *)getSupplementalAssetNameForAccessoryID:(UARPAccessoryID *)arg1;
- (NSSet *)getSupportedAccessories:(NSString *)arg1;
- (bool)getSupportedAccessories:(NSString *)arg1 assetID:(UARPAssetID *)arg2;
- (void)manifestPropertiesReceivedForAccessory:(UARPAccessory *)arg1 assetTag:(unsigned int)arg2 properties:(UARPManifestProperties *)arg3;
- (bool)personalizationVectorForAccessory:(UARPAccessory *)arg1 assetTag:(unsigned int)arg2 outVector:(unsigned int*)arg3;
- (void)progressForUARPConsent:(UARPConsent *)arg1 bytesSent:(unsigned long long)arg2 bytesTotal:(unsigned long long)arg3;
- (void)progressForUARPConsentInPostLogout:(UARPConsent *)arg1 bytesSent:(unsigned long long)arg2 bytesTotal:(unsigned long long)arg3;
- (bool)removeAccessory:(UARPAccessory *)arg1;
- (bool)requestConsent:(UARPConsent *)arg1;
- (bool)revokeConsentRequest:(UARPConsent *)arg1;
- (void)sendFirmwareUpdateProgressForAccessory:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
- (void)sendFirmwareUpdateProgressForUARPConsent:(UARPConsent *)arg1 bytesSent:(unsigned long long)arg2 bytesTotal:(unsigned long long)arg3;
- (void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(UARPAccessoryID *)arg1 assetID:(UARPAssetID *)arg2 params:(UARPUpdateFirmwareAnalyticsEventFrameworkParams *)arg3;
- (bool)updateProperty:(unsigned long long)arg1 value:(NSString *)arg2 forAccessory:(UARPAccessory *)arg3;
- (bool)useAssetAvailabilityNotifications;

@end
