
@interface MLNeuralEngineComputeDeviceRegistry : NSObject <MLComputeDeviceRegistryProtocol> {
    MLNeuralEngineComputeDevice * _neuralEngineDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MLNeuralEngineComputeDevice *neuralEngineDevice;
@property (nonatomic, readonly, copy) NSArray *registeredAndAccessibleComputeDevices;
@property (nonatomic, readonly, copy) NSArray *registeredComputeDevices;
@property (readonly) Class superclass;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)initWithNeuralEngineDevice:(id)arg1;
- (id)neuralEngineDevice;
- (id)registeredAndAccessibleComputeDevices;
- (id)registeredComputeDevices;

@end
