
@interface TPSCloudCallingThumperDeviceListController : TPSCloudCallingDeviceListController <TUCallCapabilitiesDelegatePrivate> {
    TPSCloudCallingThumperProvisioningURLController * _provisioningURLController;
    TPSCloudCallingThumperController * _thumperController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TPSCloudCallingThumperProvisioningURLController *provisioningURLController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TPSCloudCallingThumperController *thumperController;

- (void).cxx_destruct;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)arg1;
- (void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1;
- (id)init;
- (id)isDeviceSwitchOn:(id)arg1;
- (id)isMainSwitchOn:(id)arg1;
- (id)provisioningURLController;
- (void)setDeviceSwitchOn:(id)arg1 specifier:(id)arg2;
- (void)setMainSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)thumperController;

@end
