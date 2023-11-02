
@interface VFX.VFXRenderer : NSObject {
    void backgroundColor;
    void depthTexture;
    void effect;
    void performMetalCaptureDuringSnapshot;
    void pointOfView;
    void postRenderCallback;
    void renderer;
    void scene;
    void texture;
}

@property (nonatomic) bool additiveWritesToAlpha;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) <MTLTexture> *depthTexture;
@property (nonatomic, retain) _TtC3VFX9VFXEffect *effect;
@property (nonatomic) bool enableDeferredRendering;
@property (nonatomic, retain) _TtC3VFX13VFXCoreCamera *pointOfView;
@property (nonatomic, copy) id /* block */ postRenderCallback;
@property (nonatomic, retain) _TtC3VFX8VFXScene *scene;
@property (nonatomic, retain) <MTLTexture> *texture;

- (void).cxx_destruct;
- (bool)additiveWritesToAlpha;
- (id)backgroundColor;
- (id)depthTexture;
- (id)effect;
- (bool)enableDeferredRendering;
- (void)encodeWithCommandBuffer:(id)arg1;
- (void)finalizeEncoding;
- (bool)hasRenderableObjects;
- (id)init;
- (id)initWithCommandQueue:(id)arg1;
- (id)pointOfView;
- (id /* block */)postRenderCallback;
- (id)scene;
- (void)setAdditiveWritesToAlpha:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDepthTexture:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setEnableDeferredRendering:(bool)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setPostRenderCallback:(id /* block */)arg1;
- (void)setScene:(id)arg1;
- (void)setTexture:(id)arg1;
- (id)snapshotImageWithSize:(struct CGSize { double x1; double x2; })arg1 deltaTime:(double)arg2;
- (id)snapshotWithSize:(struct CGSize { double x1; double x2; })arg1 deltaTime:(double)arg2;
- (id)texture;

@end
