
@interface _MLCCPULayer : NSObject {
    MLCDeviceCPU * _device;
    NSArray * _deviceOps;
    void ** _filter;
    void ** _secondaryFilter;
}

@property (nonatomic, readonly) MLCDeviceCPU *device;
@property (nonatomic, retain) NSArray *deviceOps;
@property (nonatomic) void**filter;
@property (nonatomic) void**secondaryFilter;

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensors:(id)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)device;
- (id)deviceOps;
- (void**)filter;
- (id)initWithDevice:(id)arg1 deviceOps:(id)arg2;
- (void**)secondaryFilter;
- (void)setDeviceOps:(id)arg1;
- (void)setFilter:(void**)arg1;
- (void)setSecondaryFilter:(void**)arg1;

@end
