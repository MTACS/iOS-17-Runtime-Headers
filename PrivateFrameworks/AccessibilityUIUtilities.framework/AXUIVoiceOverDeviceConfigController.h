
@interface AXUIVoiceOverDeviceConfigController : AXUISettingsSetupCapableListController {
    SCROBrailleClient * _brailleClient;
    <VOSBluetoothConnectableDevice> * _device;
    NSArray * _deviceSpecifiers;
    bool  _dismissed;
}

@property (nonatomic, retain) <VOSBluetoothConnectableDevice> *device;

- (void).cxx_destruct;
- (void)_allowUSBRM;
- (void)_clearVOUSBRMDisabler;
- (void)_doReallyForgetDevice;
- (void)dealloc;
- (id)device;
- (void)deviceConnectedHandler:(id)arg1;
- (void)deviceRemoved:(id)arg1;
- (void)deviceUpdated:(id)arg1;
- (id)disconnectOnSleep:(id)arg1;
- (void)forgetDevice:(id)arg1;
- (id)init;
- (void)setDevice:(id)arg1;
- (void)setDisconnectOnSleep:(id)arg1 specifier:(id)arg2;
- (id)specifiers;

@end
