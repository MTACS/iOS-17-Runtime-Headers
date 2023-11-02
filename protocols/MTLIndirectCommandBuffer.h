
@protocol MTLIndirectCommandBuffer <MTLResource>

@required

- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (<MTLIndirectComputeCommand> *)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (<MTLIndirectRenderCommand> *)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (void)resetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)size;

@end
