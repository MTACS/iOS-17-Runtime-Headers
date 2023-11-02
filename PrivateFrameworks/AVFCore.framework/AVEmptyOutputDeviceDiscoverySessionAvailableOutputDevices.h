
@interface AVEmptyOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl>

@property (nonatomic, readonly) NSArray *allDevices;
@property (nonatomic, readonly) NSArray *availableOutputDeviceGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)allDevices;
- (id)availableOutputDeviceGroups;

@end
