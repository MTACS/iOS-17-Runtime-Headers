
@interface VFX.VFXView : UIView {
    void coreView;
    void delegateImpl;
    void effect;
    void pointOfView;
    void scene;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, retain) _TtC3VFX9VFXEffect *effect;
@property (nonatomic) bool framebufferOnly;
@property (nonatomic) bool hidden;
@property (nonatomic) bool lowLatency;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic, retain) _TtC3VFX13VFXCoreCamera *pointOfView;
@property (nonatomic, copy) id /* block */ postRenderCallback;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) unsigned char resizingMode;
@property (nonatomic) double scaleFactor;
@property (nonatomic, retain) _TtC3VFX8VFXScene *scene;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)commandQueue;
- (id)effect;
- (bool)framebufferOnly;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHidden;
- (bool)lowLatency;
- (unsigned long long)pixelFormat;
- (id)pointOfView;
- (id /* block */)postRenderCallback;
- (long long)preferredFramesPerSecond;
- (void)renderWithCompletion:(id /* block */)arg1;
- (void)renderWithPresentWithTransaction:(bool)arg1 completion:(id /* block */)arg2;
- (unsigned char)resizingMode;
- (double)scaleFactor;
- (id)scene;
- (void)setBackgroundColor:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setFramebufferOnly:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLowLatency:(bool)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setPostRenderCallback:(id /* block */)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setResizingMode:(unsigned char)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setScene:(id)arg1;

@end
