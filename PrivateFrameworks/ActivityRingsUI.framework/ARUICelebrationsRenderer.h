
@interface ARUICelebrationsRenderer : NSObject {
    <MTLDevice> * _device;
    _TtC3VFX11VFXRenderer * _renderer;
}

- (void).cxx_destruct;
- (bool)_needsCelebrationRenderPassOn:(id)arg1;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2;
- (void)renderCelebrationsForRings:(id)arg1 withCommandBuffer:(id)arg2 intoTexture:(id)arg3 withContext:(id)arg4;

@end
