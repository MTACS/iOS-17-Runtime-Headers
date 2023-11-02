
@protocol MLComputeDeviceRegistryProtocol <NSObject>

@required

+ (id)sharedRegistry;

- (NSArray *)registeredAndAccessibleComputeDevices;
- (NSArray *)registeredComputeDevices;

@end
