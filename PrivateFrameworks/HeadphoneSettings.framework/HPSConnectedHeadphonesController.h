
@interface HPSConnectedHeadphonesController : NSObject {
    BluetoothManager * _bluetoothManager;
    id /* block */  _deviceChangeHandler;
}

- (void).cxx_destruct;
- (bool)boolFromBluetoothPreferences:(id)arg1;
- (id)connectedHeadphoneInfo;
- (void)dealloc;
- (void)deviceConnectionHandler:(id)arg1;
- (id)getDeviceIcon:(unsigned int)arg1;
- (id)init;
- (bool)nicknameEnabled;
- (void)setDeviceChangeHandler:(id /* block */)arg1;
- (id)topLevelSpecifiers;

@end
