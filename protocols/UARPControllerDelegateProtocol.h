
@protocol UARPControllerDelegateProtocol <NSObject>

@required

- (void)assetAvailablityUpdateForAccessoryID:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2;
- (bool)sendMessageToAccessory:(UARPAccessory *)arg1 uarpMsg:(NSData *)arg2 error:(id*)arg3;

@optional

- (void)accessoryTransportNeeded:(UARPAccessory *)arg1 isNeeded:(bool)arg2;
- (void)assetSolicitationComplete:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2 withStatus:(unsigned long long)arg3;
- (void)assetSolicitationProgress:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2 bytesReceived:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
- (void)attestationCertificates:(NSDictionary *)arg1 forSubjectKeyIdentifier:(NSString *)arg2;
- (void)firmwareStagingComplete:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2 withStatus:(unsigned long long)arg3;
- (void)firmwareStagingProgress:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
- (void)firmwareUpdateComplete:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2 withStatus:(unsigned long long)arg3;
- (void)firmwareUpdateProgress:(UARPAccessory *)arg1 assetID:(UARPAssetID *)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
- (void)firmwareUpdateResult:(UARPAccessory *)arg1 vendorSpecificStatus:(unsigned int)arg2 error:(NSError *)arg3;
- (UARPUploader *)newUploader;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 appleModelNumber:(NSString *)arg2 error:(NSError *)arg3;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 firmwareVersion:(NSString *)arg2 error:(NSError *)arg3;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 friendlyName:(NSString *)arg2 error:(NSError *)arg3;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 hardwareVersion:(NSString *)arg2 error:(NSError *)arg3;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 hsmodelsDownloaded:(NSArray *)arg2 error:(NSError *)arg3;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 hsmodelsPreInstalled:(NSArray *)arg2 error:(NSError *)arg3;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 hwFusingType:(NSString *)arg2 error:(NSError *)arg3;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 manufacturer:(NSString *)arg2 error:(NSError *)arg3;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 modelName:(NSString *)arg2 error:(NSError *)arg3;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 serialNumber:(NSString *)arg2 error:(NSError *)arg3;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 stagedFirmwareVersion:(NSString *)arg2 error:(NSError *)arg3;
- (void)queryCompleteForAccessory:(UARPAccessory *)arg1 stats:(UARPStats *)arg2 error:(NSError *)arg3;
- (void)stagedFirmwareApplicationComplete:(UARPAccessory *)arg1 withStatus:(unsigned long long)arg2;
- (void)stagedFirmwareRescindComplete:(UARPAccessory *)arg1 withStatus:(unsigned long long)arg2;
- (void)supportedAccessories:(NSSet *)arg1 forProductGroup:(UARPProductGroup *)arg2;

@end
