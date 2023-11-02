
@interface DSEADevice : NSObject {
    EAAccessory * _device;
}

@property (nonatomic, retain) EAAccessory *device;

+ (id)deviceWithModelNumber:(id)arg1;
+ (id)deviceWithSerialNumber:(id)arg1;
+ (id)devicesWithModelNumbers:(id)arg1;

- (void).cxx_destruct;
- (id)device;
- (id)information;
- (id)initWithAccessory:(id)arg1;
- (id)initWithModelNumber:(id)arg1;
- (id)initWithSerialNumber:(id)arg1;
- (void)setDevice:(id)arg1;

@end
