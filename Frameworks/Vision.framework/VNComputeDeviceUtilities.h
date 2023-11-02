
@interface VNComputeDeviceUtilities : NSObject

+ (id)allCPUAndGPUComputeDevices;
+ (id)allCPUAndNeuralEngineComputeDevices;
+ (id)allCPUComputeDevices;
+ (id)allComputeDevices;
+ (id)allGPUAndNeuralEngineComputeDevices;
+ (id)allGPUComputeDevices;
+ (id)allNeuralEngineComputeDevices;
+ (bool)computeDevice:(id)arg1 isOneTypeOfTypes:(unsigned long long)arg2;
+ (id)computeDeviceForMetalDevice:(id)arg1;
+ (id)computeDeviceOfComputeDevices:(id)arg1 mostCompatibleWithComputeDevice:(id)arg2 options:(unsigned long long)arg3;
+ (unsigned long long)computeDeviceTypesForMLComputeUnits:(long long)arg1;
+ (id)computeDevices:(id)arg1 ofTypes:(unsigned long long)arg2;
+ (id)computeDevices:(id)arg1 passingTest:(id /* block */)arg2;
+ (id)computeDevicesOfTypes:(unsigned long long)arg1;
+ (id)computeDevicesPassingTest:(id /* block */)arg1;
+ (id)espressoV1ModelComputeDevices;
+ (bool)isCPUComputeDevice:(id)arg1;
+ (bool)isGPUComputeDevice:(id)arg1;
+ (bool)isNeuralEngineComputeDevice:(id)arg1;
+ (id)metalDeviceForComputeDevice:(id)arg1;
+ (id)mostPerformantCPUComputeDevice;
+ (id)mostPerformantComputeDevice;
+ (id)mostPerformantComputeDeviceOfComputeDevices:(id)arg1;
+ (id)mostPerformantGPUComputeDevice;
+ (id)mostPerformantNeuralEngineComputeDevice;
+ (long long)performanceScoreForComputeDevice:(id)arg1;
+ (unsigned long long)typeOfComputeDevice:(id)arg1;

@end
