
@interface HMDPendingNewAccessorySetupContext : HMFObject {
    HMDAccessory * _accessory;
    HMDDevice * _remoteDevice;
    HMFTimer * _timer;
}

@property (readonly) HMDAccessory *accessory;
@property (readonly) HMDDevice *remoteDevice;
@property (readonly) HMFTimer *timer;

- (void).cxx_destruct;
- (id)accessory;
- (id)initWithAccessory:(id)arg1 remoteDevice:(id)arg2 timer:(id)arg3;
- (id)remoteDevice;
- (id)timer;

@end
