
@interface HMDEventTriggerDevice : HMFObject {
    bool  _currentDevice;
    HMDDevice * _device;
}

@property (getter=isCurrentDevice, nonatomic, readonly) bool currentDevice;
@property (nonatomic, readonly) HMDDevice *device;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (unsigned long long)hash;
- (id)initWithCurrentDeviceForHome:(id)arg1;
- (id)initWithDevice:(id)arg1 forHome:(id)arg2;
- (bool)isCurrentDevice;
- (bool)isEqual:(id)arg1;

@end
