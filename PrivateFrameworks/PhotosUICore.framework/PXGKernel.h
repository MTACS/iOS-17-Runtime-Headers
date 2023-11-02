
@interface PXGKernel : NSObject

+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })gridSizeForThreadGroupSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 imageSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })groupSizeForImageSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 pipelineState:(id)arg2;
+ (id)pipelineStateForFunctionWithName:(id)arg1 constants:(id)arg2 key:(id)arg3 device:(id)arg4;

- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 targetScale:(double)arg4;
- (void)preloadWithDevice:(id)arg1;

@end
