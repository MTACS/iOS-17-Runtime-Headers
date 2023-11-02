
@interface VFXCore.VFXCoreView : UIView {
    void delegate;
    void drawableSize;
    void effectID;
    void entityManager;
    void isDragging;
    void lastTouch;
    void metalLayer;
    void paused;
    void postRenderCallback;
    void preferredFramesPerSecond;
    void renderOutput;
    void renderer;
    void resizingMode;
    void sampleCount;
    void scaleFactor;
    void sizeDirty;
    void stereoMode;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) bool hidden;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)backgroundColor;
- (void)dealloc;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHidden;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
