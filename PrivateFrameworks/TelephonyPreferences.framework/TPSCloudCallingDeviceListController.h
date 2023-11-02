
@interface TPSCloudCallingDeviceListController : TPSCloudCallingListController <TPSCloudCallingDeviceControllerDelegate> {
    TPSCloudCallingDeviceController * _deviceController;
    NSArray * _deviceSwitchSpecifiers;
    PSSpecifier * _devicesGroupSpecifier;
    PSSpecifier * _mainGroupSpecifier;
    PSSpecifier * _mainSwitchSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TPSCloudCallingDeviceController *deviceController;
@property (nonatomic, copy) NSArray *deviceSwitchSpecifiers;
@property (nonatomic, readonly) PSSpecifier *devicesGroupSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PSSpecifier *mainGroupSpecifier;
@property (nonatomic, readonly) PSSpecifier *mainSwitchSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cloudCallingDeviceController:(id)arg1 didChangeDevices:(id)arg2;
- (id)deviceController;
- (id)deviceSwitchSpecifiers;
- (id)devicesGroupSpecifier;
- (id)init;
- (id)isDeviceSwitchOn:(id)arg1;
- (id)isMainSwitchOn:(id)arg1;
- (id)mainGroupSpecifier;
- (id)mainSwitchSpecifier;
- (void)setDeviceSwitchOn:(id)arg1 specifier:(id)arg2;
- (void)setDeviceSwitchSpecifiers:(id)arg1;
- (void)setMainSwitchOn:(id)arg1 specifier:(id)arg2;
- (id)specifiers;

@end
