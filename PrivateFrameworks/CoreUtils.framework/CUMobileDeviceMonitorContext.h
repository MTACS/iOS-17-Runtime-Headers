
@interface CUMobileDeviceMonitorContext : NSObject {
    CUMobileDevice * _device;
    CUMobileDeviceDiscovery * _discovery;
}

@property (nonatomic, retain) CUMobileDevice *device;
@property (nonatomic, retain) CUMobileDeviceDiscovery *discovery;

- (void).cxx_destruct;
- (id)device;
- (id)discovery;
- (void)setDevice:(id)arg1;
- (void)setDiscovery:(id)arg1;

@end
