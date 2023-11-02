
@interface DSIOPSDevice : NSObject {
    unsigned long long  _deviceModel;
    NSDictionary * _info;
}

@property (nonatomic, readonly) unsigned long long deviceModel;
@property (nonatomic, retain) NSDictionary *info;

+ (id)deviceMatchingAccessories:(id)arg1;
+ (id)deviceWithAccessory:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)deviceModel;
- (id)info;
- (id)information;
- (id)initWithDeviceIdentifiers:(id)arg1;
- (id)serialNumber;
- (void)setInfo:(id)arg1;

@end
