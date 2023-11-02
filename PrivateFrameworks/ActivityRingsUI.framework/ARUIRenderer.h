
@interface ARUIRenderer : NSObject {
    ARUICelebrationsRenderer * _celebrationsRenderer;
    <MTLCommandQueue> * _commandQueue;
    <MTLDeviceSPI> * _device;
    unsigned long long  _renderStyle;
    ARUIRingsRenderPipelineFactory * _ringsRenderPipelineFactory;
    ARUIRingsRenderer * _ringsRenderer;
    ARUISpritesRenderer * _spritesRenderer;
}

@property (nonatomic, readonly) unsigned long long renderStyle;

- (void).cxx_destruct;
- (void)_renderRings:(id)arg1 commandEncoder:(id)arg2 passDescriptor:(id)arg3 commandBuffer:(id)arg4 withContext:(id)arg5;
- (void)_renderRings:(id)arg1 passDescriptor:(id)arg2 commandBuffer:(id)arg3 withContext:(id)arg4;
- (void)_renderRings:(id)arg1 spriteSheet:(id)arg2 intoTexture:(id)arg3 presentingDrawable:(id)arg4 withContext:(id)arg5 waitUntilCompleted:(bool)arg6 completion:(id /* block */)arg7;
- (id)_snapshotRings:(id)arg1 spriteSheet:(id)arg2 withContext:(id)arg3;
- (void)clearCaches;
- (id)init;
- (id)initWithCommandQueue:(id)arg1;
- (id)initWithRenderStyle:(unsigned long long)arg1;
- (id)initWithRenderStyle:(unsigned long long)arg1 commandQueue:(id)arg2;
- (id)renderPipelineFactoryWithDevice:(id)arg1 library:(id)arg2;
- (id)renderPipelineFactoryWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;
- (void)renderRingGroupControllers:(void *)arg1 withSize:(void *)arg2 intoTexture:(void *)arg3 withDrawable:(void *)arg4 waitUntilCompleted:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 5: id, id, id, bool, id /* block */
- (void)renderRings:(id)arg1 intoDrawable:(id)arg2 withContext:(id)arg3;
- (void)renderRings:(id)arg1 intoDrawable:(id)arg2 withContext:(id)arg3 completion:(id /* block */)arg4;
- (void)renderRings:(id)arg1 spriteSheet:(id)arg2 intoDrawable:(id)arg3 withContext:(id)arg4;
- (void)renderRings:(id)arg1 spriteSheet:(id)arg2 intoDrawable:(id)arg3 withContext:(id)arg4 completion:(id /* block */)arg5;
- (unsigned long long)renderStyle;
- (id)ringsRenderPipelineConfigurationForRings:(id)arg1 context:(id)arg2;
- (id)snapshotRingGroupControllers:(void *)arg1 withSize:(void *)arg2; // needs 2 arg types, found 1: id
- (id)snapshotRings:(id)arg1 spriteSheet:(id)arg2 withContext:(id)arg3;
- (id)snapshotRings:(id)arg1 withContext:(id)arg2;

@end
