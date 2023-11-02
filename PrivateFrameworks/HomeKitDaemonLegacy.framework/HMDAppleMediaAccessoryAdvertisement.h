
@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement {
    HMDDevice * _device;
}

@property (readonly) HMDDevice *device;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (id)initWithOutputDevice:(id)arg1 device:(id)arg2;

@end
