
@interface UARPControllerXPC : NSObject <UARPControllerInternalDelegate> {
    UARPController * _controller;
    NSError * _lastProviderError;
    id /* block */  _providerErrorReply;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_os_log> * _xpcLog;
}

@property (readonly) bool useAssetAvailabilityNotifications;
@property (readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (bool)addAccessory:(id)arg1 assetID:(id)arg2;
- (bool)changeAssetLocation:(id)arg1 assetID:(id)arg2;
- (bool)checkForUpdate:(id)arg1;
- (void)dealloc;
- (bool)disableTRMSystemAuthenticationForRegistryEntryID:(id)arg1;
- (bool)downloadAvailableFirmwareUpdate:(id)arg1 assetID:(id)arg2 withUserIntent:(bool)arg3;
- (bool)downloadReleaseNotes:(id)arg1 assetID:(id)arg2;
- (bool)enableTRMSystemAuthenticationForRegistryEntryID:(id)arg1;
- (id)getAssetIDForAccessoryID:(id)arg1;
- (id)getAttestationCertificates:(id)arg1;
- (bool)getAttestationCertificates:(id)arg1 assetID:(id)arg2;
- (id)getSandboxExtensionTokenForAssetID:(id)arg1;
- (id)getSupplementalAssetNameForAccessoryID:(id)arg1;
- (id)getSupportedAccessories:(id)arg1;
- (bool)getSupportedAccessories:(id)arg1 assetID:(id)arg2;
- (id)initWithController:(id)arg1;
- (id)invocationForProviderSelector:(SEL)arg1;
- (void)manifestPropertiesReceivedForAccessory:(id)arg1 assetTag:(unsigned int)arg2 properties:(id)arg3;
- (bool)performSynchronousProviderInvocation:(id)arg1 accessory:(id)arg2 requireKnown:(bool)arg3 description:(const char *)arg4;
- (bool)personalizationVectorForAccessory:(id)arg1 assetTag:(unsigned int)arg2 outVector:(unsigned int*)arg3;
- (void)progressForUARPConsent:(id)arg1 bytesSent:(unsigned long long)arg2 bytesTotal:(unsigned long long)arg3;
- (void)progressForUARPConsentInPostLogout:(id)arg1 bytesSent:(unsigned long long)arg2 bytesTotal:(unsigned long long)arg3;
- (bool)removeAccessory:(id)arg1;
- (bool)requestConsent:(id)arg1;
- (bool)revokeConsentRequest:(id)arg1;
- (void)sendFirmwareUpdateProgressForAccessory:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
- (void)sendFirmwareUpdateProgressForUARPConsent:(id)arg1 bytesSent:(unsigned long long)arg2 bytesTotal:(unsigned long long)arg3;
- (void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)arg1 assetID:(id)arg2 params:(id)arg3;
- (bool)updateProperty:(unsigned long long)arg1 value:(id)arg2 forAccessory:(id)arg3;
- (bool)useAssetAvailabilityNotifications;
- (id)xpcConnection;

@end
