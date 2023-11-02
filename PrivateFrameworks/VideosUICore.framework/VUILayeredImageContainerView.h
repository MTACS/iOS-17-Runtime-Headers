
@interface VUILayeredImageContainerView : _UIStackedImageContainerView <VUIAuxiliaryViewSelecting> {
    bool  _layeredImageLoaded;
    VUILayeredImageProxy * _layeredImageProxy;
    UIImage * _loadedImage;
    UIView * _overlayView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fixedFrameOverlayView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIStackedImageContainerLayer *layeredImageContainerLayer;
@property (getter=isLayeredImageLoaded, nonatomic) bool layeredImageLoaded;
@property (nonatomic, retain) VUILayeredImageProxy *layeredImageProxy;
@property (nonatomic, retain) UIImage *loadedImage;
@property (nonatomic, retain) UIView *overlayView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadLayeredImage;
- (bool)fixedFrameOverlayView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayeredImageProxy:(id)arg1;
- (bool)isLayeredImageLoaded;
- (id)layeredImageContainerLayer;
- (id)layeredImageProxy;
- (id)loadedImage;
- (id)overlayView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionMarginsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFixedFrameOverlayView:(bool)arg1;
- (void)setLayeredImageLoaded:(bool)arg1;
- (void)setLayeredImageProxy:(id)arg1;
- (void)setLoadedImage:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setOverlayView:(id)arg1 masked:(bool)arg2;
- (void)setPressed:(bool)arg1;
- (void)setPressed:(bool)arg1 animated:(bool)arg2;
- (void)setPressed:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 focusAnimationCoordinator:(id)arg3;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)willMoveToWindow:(id)arg1;

@end
