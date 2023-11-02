
@interface VNProcessingDevice : NSObject <NSCopying>

+ (void)_lockStaticObjectsAccessLock;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)allDevices;
+ (id)defaultANEDevice;
+ (id)defaultCPUDevice;
+ (id)defaultDevice;
+ (id)defaultMetalDevice;
+ (id)deviceForMetalDevice:(id)arg1;
+ (id)directANEDevice;
+ (void)forcedCleanup;

- (id)computeDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (int)espressoStorageType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)metalDevice;
- (bool)targetsANE;
- (bool)targetsCPU;
- (bool)targetsGPU;

@end
