
@interface MLAllComputeDeviceRegistry : NSObject <MLComputeDeviceRegistryProtocol> {
    NSArray * _deviceRegistries;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *deviceRegistries;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *registeredAndAccessibleComputeDevices;
@property (nonatomic, readonly, copy) NSArray *registeredComputeDevices;
@property (readonly) Class superclass;

+ (id)registryWithDeviceRegisteries:(id)arg1;
+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)deviceRegistries;
- (id)initWithDeviceRegisteries:(id)arg1;
- (id)registeredAndAccessibleComputeDevices;
- (id)registeredComputeDevices;

@end
