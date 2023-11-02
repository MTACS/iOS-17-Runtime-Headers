
@protocol ARUIRendering <NSObject>

@required

- (id)initWithDevice:(id <MTLDevice>)arg1 library:(id <MTLLibrary>)arg2;
- (MTLRenderPipelineDescriptor *)renderPipelineDescriptorFromLibrary:(id <MTLLibrary>)arg1;
- (<MTLRenderPipelineState> *)renderPipelineState;
- (void)setRenderPipelineState:(id <MTLRenderPipelineState>)arg1;

@end
