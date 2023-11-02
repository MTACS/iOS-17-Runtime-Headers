
@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination {
    HMDDevice * _device;
    HMDDeviceHandle * _preferredHandle;
}

@property (nonatomic, readonly) HMDDevice *device;
@property (nonatomic, copy) HMDDeviceHandle *preferredHandle;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)device;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 device:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)preferredHandle;
- (id)privateDescription;
- (id)remoteDestinationString;
- (void)setPreferredHandle:(id)arg1;
- (id)shortDescription;

@end
