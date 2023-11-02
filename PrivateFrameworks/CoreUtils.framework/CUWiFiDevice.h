
@interface CUWiFiDevice : NSObject {
    NSData * _bssid;
    NSData * _deviceIDOUI;
    NSData * _deviceIDSetupHash;
    NSData * _deviceIEBluetoothMAC;
    unsigned int  _deviceIECategory;
    NSData * _deviceIEDeviceID;
    unsigned int  _deviceIEFlags;
    NSString * _deviceIEManufacturer;
    NSString * _deviceIEModel;
    NSString * _deviceIEName;
    NSUUID * _identifier;
    NSData * _ieData;
    id  _platformObject;
    int  _present;
    NSDictionary * _rawScanResult;
    int  _rssi;
    NSString * _ssid;
}

@property (nonatomic, copy) NSData *bssid;
@property (nonatomic, copy) NSData *deviceIDOUI;
@property (nonatomic, copy) NSData *deviceIDSetupHash;
@property (nonatomic, copy) NSData *deviceIEBluetoothMAC;
@property (nonatomic) unsigned int deviceIECategory;
@property (nonatomic, copy) NSData *deviceIEDeviceID;
@property (nonatomic) unsigned int deviceIEFlags;
@property (nonatomic, copy) NSString *deviceIEManufacturer;
@property (nonatomic, copy) NSString *deviceIEModel;
@property (nonatomic, copy) NSString *deviceIEName;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *ieData;
@property (nonatomic, retain) id platformObject;
@property (nonatomic) int present;
@property (nonatomic, copy) NSDictionary *rawScanResult;
@property (nonatomic) int rssi;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (unsigned int)_updateWithDeviceIE:(const char *)arg1 end:(const char *)arg2;
- (id)bssid;
- (id)description;
- (id)deviceIDOUI;
- (id)deviceIDSetupHash;
- (id)deviceIEBluetoothMAC;
- (unsigned int)deviceIECategory;
- (id)deviceIEDeviceID;
- (unsigned int)deviceIEFlags;
- (id)deviceIEManufacturer;
- (id)deviceIEModel;
- (id)deviceIEName;
- (id)identifier;
- (id)ieData;
- (id)platformObject;
- (int)present;
- (id)rawScanResult;
- (int)rssi;
- (void)setBssid:(id)arg1;
- (void)setDeviceIDOUI:(id)arg1;
- (void)setDeviceIDSetupHash:(id)arg1;
- (void)setDeviceIEBluetoothMAC:(id)arg1;
- (void)setDeviceIECategory:(unsigned int)arg1;
- (void)setDeviceIEDeviceID:(id)arg1;
- (void)setDeviceIEFlags:(unsigned int)arg1;
- (void)setDeviceIEManufacturer:(id)arg1;
- (void)setDeviceIEModel:(id)arg1;
- (void)setDeviceIEName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIeData:(id)arg1;
- (void)setPlatformObject:(id)arg1;
- (void)setPresent:(int)arg1;
- (void)setRawScanResult:(id)arg1;
- (void)setRssi:(int)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;

@end
