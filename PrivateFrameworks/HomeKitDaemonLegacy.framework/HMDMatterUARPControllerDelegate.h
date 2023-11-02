
@interface HMDMatterUARPControllerDelegate : HMFObject <HMFLogging, UARPControllerDelegateProtocol> {
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
- (id)initWithAccessoryFirmwareUpdateManager:(id)arg1;
- (id)newUploader;
- (bool)sendMessageToAccessory:(id)arg1 uarpMsg:(id)arg2 error:(id*)arg3;

@end
