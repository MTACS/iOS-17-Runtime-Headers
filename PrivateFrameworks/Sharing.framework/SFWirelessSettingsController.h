
@interface SFWirelessSettingsController : NSObject {
    bool  _airplaneModeEnabled;
    bool  _bluetoothEnabled;
    id  _delegate;
    bool  _deviceSupportsWAPI;
    bool  _firstCallbackCompleted;
    struct __SFOperation { } * _information;
    unsigned long long  _ultraWideBandStatus;
    unsigned long long  _uwbStatus;
    bool  _wifiEnabled;
    bool  _wirelessAccessPointEnabled;
    bool  _wirelessCarPlayEnabled;
}

@property (getter=isAirplaneModeEnabled) bool airplaneModeEnabled;
@property (getter=isBluetoothEnabled) bool bluetoothEnabled;
@property <SFWirelessSettingsControllerDelegate> *delegate;
@property (readonly) bool deviceSupportsWAPI;
@property (readonly) unsigned long long ultraWideBandStatus;
@property (getter=isWifiEnabled) bool wifiEnabled;
@property (getter=isWirelessAccessPointEnabled) bool wirelessAccessPointEnabled;
@property (getter=isWirelessCarPlayEnabled, readonly) bool wirelessCarPlayEnabled;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (bool)deviceSupportsWAPI;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;
- (void)invalidate;
- (bool)isAirplaneModeEnabled;
- (bool)isBluetoothEnabled;
- (bool)isWifiEnabled;
- (bool)isWirelessAccessPointEnabled;
- (bool)isWirelessCarPlayEnabled;
- (void)setAirplaneModeEnabled:(bool)arg1;
- (void)setBluetoothEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWifiEnabled:(bool)arg1;
- (void)setWirelessAccessPointEnabled:(bool)arg1;
- (unsigned long long)ultraWideBandStatus;

@end
