
@interface VOSBluetoothManager : NSObject {
    bool  _audioConnected;
    unsigned int  _authorizedServices;
    long long  _available;
    NSDictionary * _brailleDriverDeviceDetectionInfo;
    NSMutableDictionary * _btAddrDict;
    NSMutableDictionary * _btDeviceDict;
    struct BTDiscoveryAgentImpl { } * _discoveryAgent;
    struct BTLocalDeviceImpl { } * _localDevice;
    struct BTPairingAgentImpl { } * _pairingAgent;
    bool  _scanningEnabled;
    struct BTSessionImpl { } * _session;
    bool  _wantsDiscoveryEnabled;
    bool  _wantsScanningEnabled;
}

@property (nonatomic) unsigned int authorizedServices;
@property (nonatomic, readonly) NSArray *connectingDevices;
@property (nonatomic, readonly) NSArray *pairedBrailleDevices;
@property (nonatomic, readonly) NSArray *pairedDevices;

+ (int)lastInitError;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_attach:(id)arg1;
- (void)_cleanup:(bool)arg1;
- (void)_connectabilityChanged;
- (void)_connectedStatusChanged;
- (void)_discoveryStateChanged;
- (bool)_onlySensorsConnected;
- (void)_postNotification:(id)arg1;
- (void)_postNotificationWithArray:(id)arg1;
- (void)_powerChanged;
- (void)_removeDevice:(id)arg1;
- (void)_restartScan;
- (void)_setDiscoveryAgentScanning:(bool)arg1;
- (bool)_setup:(struct BTSessionImpl { }*)arg1;
- (void)acceptSSP:(int)arg1 forDevice:(id)arg2;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl { }*)arg1;
- (id)alertControllerWithVOSBluetoothResult:(unsigned long long)arg1 device:(id)arg2 buttonHandler:(id /* block */)arg3;
- (bool)audioConnected;
- (unsigned int)authorizedServices;
- (unsigned int)authorizedServicesForDevice:(id)arg1;
- (bool)available;
- (void)cancelPairing;
- (void)connectDevice:(id)arg1;
- (void)connectDevice:(id)arg1 withServices:(unsigned int)arg2;
- (bool)connectable;
- (bool)connected;
- (id)connectingDevices;
- (void)dealloc;
- (bool)devicePairingEnabled;
- (bool)deviceScanningEnabled;
- (bool)enabled;
- (id)init;
- (bool)isAnyoneScanning;
- (bool)isDiscoverable;
- (bool)isServiceSupported:(unsigned int)arg1;
- (bool)isValidBrailleDevice:(id)arg1;
- (id)pairedBrailleDevices;
- (id)pairedDevices;
- (void)postNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;
- (long long)powerState;
- (bool)powered;
- (void)resetDeviceScanning;
- (void)setAudioConnected:(bool)arg1;
- (void)setAuthorizedServices:(unsigned int)arg1;
- (void)setConnectable:(bool)arg1;
- (void)setDevicePairingEnabled:(bool)arg1;
- (void)setDeviceScanningEnabled:(bool)arg1;
- (void)setDiscoverable:(bool)arg1;
- (bool)setEnabled:(bool)arg1;
- (void)setPincode:(id)arg1 forDevice:(id)arg2;
- (bool)setPowered:(bool)arg1;
- (void)unpairDevice:(id)arg1;
- (bool)wasDeviceDiscovered:(id)arg1;

@end
