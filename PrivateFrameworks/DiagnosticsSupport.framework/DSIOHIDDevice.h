
@interface DSIOHIDDevice : NSObject {
    struct __IOHIDDevice { } * _device;
    unsigned long long  _deviceModel;
    struct __IOHIDManager { } * _manager;
}

@property (nonatomic, readonly) unsigned long long deviceModel;

+ (id)deviceMatchingAccessories:(id)arg1;
+ (id)deviceMatchingAccessories:(id)arg1 identifierMask:(unsigned long long)arg2;
+ (id)deviceWithAccessory:(unsigned long long)arg1;
+ (id)deviceWithAccessory:(unsigned long long)arg1 identifierMask:(unsigned long long)arg2;

- (id)_sharedSerialQueue;
- (void)dealloc;
- (unsigned long long)deviceModel;
- (id)initWithDeviceIdentifiers:(id)arg1 identifierMask:(unsigned long long)arg2;
- (bool)reportWithID:(long long)arg1 reportType:(int)arg2 object:(char *)arg3 length:(long long*)arg4;
- (id)serialNumber;
- (id)stringFromHIDReport:(long long)arg1;

@end
