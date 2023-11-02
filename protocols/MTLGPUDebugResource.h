
@protocol MTLGPUDebugResource <MTLResourceSPI>

@required

- (<MTLResource> *)baseObject;
- (unsigned long long)gpuAddress;
- (unsigned long long)handleForOffset:(unsigned long long)arg1;
- (unsigned long long)length;
- (unsigned long long)underlyingGPUAddress;
- (void)useWithComputeEncoder:(MTLGPUDebugComputeCommandEncoder *)arg1 usage:(unsigned long long)arg2;
- (void)useWithRenderEncoder:(MTLGPUDebugRenderCommandEncoder *)arg1 usage:(unsigned long long)arg2 stages:(struct optional<unsigned long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })arg3;

@end
