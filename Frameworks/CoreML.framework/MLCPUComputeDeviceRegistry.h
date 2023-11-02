
@interface MLCPUComputeDeviceRegistry : NSObject <MLComputeDeviceRegistryProtocol> {
    MLCPUComputeDevice * _cpuDevice;
}

@property (nonatomic, readonly) MLCPUComputeDevice *cpuDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *registeredAndAccessibleComputeDevices;
@property (nonatomic, readonly, copy) NSArray *registeredComputeDevices;
@property (readonly) Class superclass;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)cpuDevice;
- (id)initWithCpuDevice:(id)arg1;
- (id)registeredAndAccessibleComputeDevices;
- (id)registeredComputeDevices;

@end
