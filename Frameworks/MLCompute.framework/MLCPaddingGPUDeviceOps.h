
@interface MLCPaddingGPUDeviceOps : MLCGPUDeviceOps {
    id  _paddingGradientAccumulateKernel;
    int  _paddingType;
    float  _paddingValue;
}

@property (nonatomic, retain) id paddingGradientAccumulateKernel;
@property (nonatomic) int paddingType;
@property (nonatomic) float paddingValue;

+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;

- (void).cxx_destruct;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
- (id)paddingGradientAccumulateKernel;
- (int)paddingType;
- (float)paddingValue;
- (void)setPaddingGradientAccumulateKernel:(id)arg1;
- (void)setPaddingType:(int)arg1;
- (void)setPaddingValue:(float)arg1;

@end
