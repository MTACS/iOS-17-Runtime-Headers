
@interface NUComputeKernel : NSObject {
    <MTLDevice> * _device;
}

@property (nonatomic, readonly) <MTLDevice> *device;

+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })gridSizeForThreadGroupSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 imageSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })groupSizeForImageSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 pipelineState:(id)arg2;
+ (id)pipelineStateForFunctionWithName:(id)arg1 constants:(id)arg2 key:(id)arg3 device:(id)arg4 error:(out id*)arg5;
+ (id)pipelineStateForFunctionWithName:(id)arg1 device:(id)arg2 error:(out id*)arg3;

- (void).cxx_destruct;
- (id)device;
- (void)encodeToCommandBuffer:(id)arg1 destinationTexture:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end
