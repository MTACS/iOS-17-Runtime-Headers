
@interface RMSTVRemoteCoreServiceProvider : NSObject <RMSServiceProvider, TVRCDeviceQueryDelegate> {
    <RMSServiceProviderDelegate> * _delegate;
    TVRCDeviceQuery * _deviceQuery;
    NSSet * _devices;
    NSMapTable * _services;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSServiceProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_serviceWithDevice:(id)arg1;

- (void).cxx_destruct;
- (void)_didDiscoverDevice:(id)arg1;
- (void)_didRemoveDevice:(id)arg1;
- (void)beginDiscovery;
- (id)delegate;
- (void)deviceQueryDidUpdateDevices:(id)arg1;
- (void)endDiscovery;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
