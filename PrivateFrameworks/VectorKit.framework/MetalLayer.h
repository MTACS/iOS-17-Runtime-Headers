
@interface MetalLayer : CAMetalLayer <GGLLayer> {
    struct CGSize { 
        double width; 
        double height; 
    }  _backingSize;
    <GGLLayerDelegate> * _delegate;
    struct shared_ptr<ggl::MetalDevice> { 
        struct MetalDevice {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _device;
    <CAMetalDrawable> * _prevDrawable;
    bool  _sRGB;
    struct shared_ptr<ggl::SamplerState> { 
        struct SamplerState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _samplerState;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _texture;
}

@property (readonly) int backingFormat;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } backingSize;
@property <GGLLayerDelegate> *renderDelegate;
@property (nonatomic, readonly) bool sRGB;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createTexture;
- (void)_onTimerFired:(double)arg1 withPresent:(id /* block */)arg2;
- (id)_updateDrawable;
- (int)backingFormat;
- (struct CGSize { double x1; double x2; })backingSize;
- (void)didEnterBackground;
- (void)display;
- (id)initWithDevice:(struct shared_ptr<ggl::MetalDevice> { struct MetalDevice {} *x1; struct __shared_weak_count {} *x2; })arg1 sRGB:(bool)arg2;
- (void)layoutSublayers;
- (void)onTimerFired:(double)arg1;
- (void)onTimerFired:(double)arg1 presentAfterMinimumDuration:(double)arg2;
- (void)onTimerFired:(double)arg1 presentAtTime:(double)arg2;
- (id)renderDelegate;
- (bool)sRGB;
- (void)setRenderDelegate:(id)arg1;

@end
