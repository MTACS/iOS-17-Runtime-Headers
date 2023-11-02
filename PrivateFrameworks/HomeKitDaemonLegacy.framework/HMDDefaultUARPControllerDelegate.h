
@interface HMDDefaultUARPControllerDelegate : HMFObject <HMFLogging, UARPControllerDelegateProtocol> {
    HMDAccessoryFirmwareUpdateManager * _accessoryFirmwareUpdateManager;
}

@property (readonly) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryFirmwareUpdateManager;
- (void)assetAvailablityUpdateForAccessoryID:(id)arg1 assetID:(id)arg2;
- (void)assetSolicitationComplete:(id)arg1 assetID:(id)arg2 withStatus:(unsigned long long)arg3;
- (void)assetSolicitationProgress:(id)arg1 assetID:(id)arg2 bytesReceived:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
- (void)firmwareStagingComplete:(id)arg1 assetID:(id)arg2 withStatus:(unsigned long long)arg3;
- (void)firmwareStagingProgress:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4;
- (void)firmwareUpdateResult:(id)arg1 vendorSpecificStatus:(unsigned int)arg2 error:(id)arg3;
- (id)initWithAccessoryFirmwareUpdateManager:(id)arg1;
- (bool)sendMessageToAccessory:(id)arg1 uarpMsg:(id)arg2 error:(id*)arg3;
- (void)stagedFirmwareApplicationComplete:(id)arg1 withStatus:(unsigned long long)arg2;

@end
