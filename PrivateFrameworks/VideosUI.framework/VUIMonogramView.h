
@interface VUIMonogramView : _UIFloatingContentView <VUIAuxiliaryViewSelecting, _UIFloatingContentViewDelegate> {
    VUIMonogramViewConfiguration * _configuration;
    VUIBaseView * _focusedShadowView;
    UIImage * _image;
    VUIImageProxy * _imageProxy;
    VUIImageView * _imageView;
    bool  _isSelected;
    VUIMonogramDescription * _monogramDescription;
    UIView * _overlayView;
    UIImage * _placeholderImage;
    VUIBaseView * _placeholderView;
    id /* block */  _pressCompletionBlock;
    double  _unfocusedImageAlpha;
    VUIBaseView * _unfocusedShadowView;
}

@property (nonatomic, retain) VUIMonogramViewConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIBaseView *focusedShadowView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) VUIImageProxy *imageProxy;
@property (nonatomic, retain) VUIImageView *imageView;
@property (nonatomic, retain) VUIMonogramDescription *monogramDescription;
@property (nonatomic, retain) UIView *overlayView;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, copy) id /* block */ pressCompletionBlock;
@property (readonly) Class superclass;
@property (nonatomic) double unfocusedImageAlpha;
@property (nonatomic, retain) VUIBaseView *unfocusedShadowView;

- (void).cxx_destruct;
- (void)_loadWithMonogramDescription:(id)arg1 imageProxy:(id)arg2;
- (void)_updateAppearanceForSelectionStateWithCoordinator:(id)arg1;
- (void)_updateFocusedShadowFrameAndLayerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updatePlaceholerView;
- (void)_updateUnfocusedShadowFrameAndLayerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)configuration;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)focusedShadowView;
- (id)image;
- (id)imageProxy;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (void)layoutSubviews;
- (id)monogramDescription;
- (id)overlayView;
- (id)placeholderImage;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id /* block */)pressCompletionBlock;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionMarginsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setConfiguration:(id)arg1;
- (void)setFocusedShadowView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageProxy:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMonogramDescription:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPressCompletionBlock:(id /* block */)arg1;
- (void)setPressed:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setUnFocusedShadowView:(id)arg1;
- (void)setUnfocusedImageAlpha:(double)arg1;
- (void)setUnfocusedShadowView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)unfocusedImageAlpha;
- (id)unfocusedShadowView;
- (void)updateShadowImage;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
