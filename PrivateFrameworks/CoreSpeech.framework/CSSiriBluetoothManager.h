
@interface CSSiriBluetoothManager : NSObject {
    CSSiriMobileBluetoothDeviceDataSource * _dataSource;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)deviceWithAddress:(id)arg1;
- (id)deviceWithUID:(id)arg1;
- (void)prewarmDeviceWithIdentifier:(id)arg1;

@end
