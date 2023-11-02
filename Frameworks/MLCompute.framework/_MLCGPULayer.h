
@interface _MLCGPULayer : NSObject {
    NSArray * _deviceOps;
}

@property (nonatomic, retain) NSArray *deviceOps;

+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4;
+ (bool)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensors:(id)arg4;

- (void).cxx_destruct;
- (id)deviceOps;
- (void)setDeviceOps:(id)arg1;

@end
