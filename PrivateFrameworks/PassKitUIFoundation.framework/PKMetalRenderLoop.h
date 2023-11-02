
@interface PKMetalRenderLoop : PKRenderLoop {
    struct CGColorSpace { } * _colorSpace;
    <CAMetalDrawable> * _currentDrawable;
    <MTLDevice> * _device;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawableSize;
    bool  _drawableSizeDirty;
    CAMetalLayer * _layer;
    unsigned long long  _pixelFormat;
}

@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (nonatomic) <PKMetalRenderLoopDelegate> *delegate;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic) struct CGSize { double x1; double x2; } drawableSize;
@property (nonatomic) bool framebufferOnly;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) unsigned long long pixelFormat;

- (void).cxx_destruct;
- (void)_didDraw;
- (void)_didInvalidate;
- (bool)_isForcingPause;
- (void)_willDraw;
- (struct CGColorSpace { }*)colorSpace;
- (id)currentDrawable;
- (void)dealloc;
- (id)device;
- (struct CGSize { double x1; double x2; })drawableSize;
- (bool)framebufferOnly;
- (id)init;
- (id)initWithPixelFormat:(unsigned long long)arg1 forDevice:(id)arg2;
- (bool)isDrawableAvailable;
- (id)layer;
- (unsigned long long)pixelFormat;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setDrawableSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFramebufferOnly:(bool)arg1;

@end
