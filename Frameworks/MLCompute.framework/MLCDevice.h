
@interface MLCDevice : NSObject <NSCopying> {
    <MLComputeEngineControl><MLCLayerOperations><MLCEngineDispatch><MLComputeEngineOptimizerUpdate><MLCDeviceProperties> * _computeEngine;
    <MLCDeviceProperties> * _engine;
    int  _type;
}

@property (nonatomic, readonly) int actualDeviceType;
@property (nonatomic, retain) <MLComputeEngineControl><MLCLayerOperations><MLCEngineDispatch><MLComputeEngineOptimizerUpdate><MLCDeviceProperties> *computeEngine;
@property (nonatomic, retain) <MLCDeviceProperties> *engine;
@property (nonatomic, readonly) NSArray *gpuDevices;
@property (nonatomic) int type;

+ (id)aneDevice;
+ (id)cpuDevice;
+ (id)deviceWithGPUDevices:(id)arg1;
+ (id)deviceWithType:(int)arg1;
+ (id)deviceWithType:(int)arg1 selectsMultipleComputeDevices:(bool)arg2;
+ (id)gpuDevice;

- (void).cxx_destruct;
- (int)actualDeviceType;
- (id)computeEngine;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)engine;
- (id)gpuDevices;
- (unsigned long long)hash;
- (id)init;
- (id)initWithGPUs:(id)arg1;
- (id)initWithType:(int)arg1 engine:(id)arg2;
- (id)initWithType:(int)arg1 selectsMultipleComputeDevices:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (void)setComputeEngine:(id)arg1;
- (void)setEngine:(id)arg1;
- (void)setType:(int)arg1;
- (void)switchToCPUDevice;
- (int)type;

@end
