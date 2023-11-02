
@interface AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> {
    NSArray * _figEndpoints;
}

@property (nonatomic, readonly) NSArray *allDevices;
@property (nonatomic, readonly) NSArray *availableOutputDeviceGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)allDevices;
- (id)availableOutputDeviceGroups;
- (void)dealloc;
- (id)init;
- (id)initWithAvailableFigEndpoints:(id)arg1;

@end
