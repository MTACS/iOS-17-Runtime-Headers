
@interface HMDDeviceRegistrationEntry : HMFObject {
    NSArray * _accessoryUUIDList;
    HMDDevice * _device;
}

@property (nonatomic, readonly) NSArray *accessoryUUIDList;
@property (nonatomic, readonly) HMDDevice *device;

- (void).cxx_destruct;
- (id)accessoryUUIDList;
- (id)device;
- (id)initWithDevice:(id)arg1 accessoryList:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
