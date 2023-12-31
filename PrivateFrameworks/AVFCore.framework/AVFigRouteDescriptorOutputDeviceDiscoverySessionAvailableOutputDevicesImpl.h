
@interface AVFigRouteDescriptorOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> {
    NSArray * _routeDescriptors;
    struct OpaqueFigRouteDiscoverer { } * _routeDiscoverer;
}

@property (nonatomic, readonly) NSArray *allDevices;
@property (nonatomic, readonly) NSArray *availableOutputDeviceGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)allDevices;
- (void)dealloc;
- (id)init;
- (id)initWithRouteDescriptors:(id)arg1 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { }*)arg2;

@end
