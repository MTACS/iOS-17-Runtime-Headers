
@interface __HMDRegisteredDeviceIdentity : __HMDRegisteredIdentity {
    HMDDevice * _device;
}

@property (readonly) HMDDevice *device;

- (void).cxx_destruct;
- (id)device;
- (id)initWithIdentity:(id)arg1;
- (id)initWithIdentity:(id)arg1 device:(id)arg2;

@end
