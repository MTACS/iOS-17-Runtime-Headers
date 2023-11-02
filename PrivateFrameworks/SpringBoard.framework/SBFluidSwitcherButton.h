
@interface SBFluidSwitcherButton : UIControl <UIPointerInteractionDelegate> {
    NSString * _backdropGroupName;
    UIView * _backgroundView;
    long long  _buttonStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _extendedEdgeInsets;
    UIImageView * _glyphImageView;
    UIView * _highlightView;
    UIImage * _image;
    UIImageView * _xPlusDView;
}

@property (nonatomic, retain) NSString *backdropGroupName;
@property (nonatomic) long long buttonStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } extendedEdgeInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHighlightViewIfNecessary;
- (id)_backgroundMaterialView;
- (void)_configureBackgroundViewIfNecessaryForStyle:(long long)arg1;
- (void)_configureGlyphImageViewIfNecessaryForStyle:(long long)arg1;
- (void)_configureXPlusDViewIfNecessaryForStyle:(long long)arg1;
- (void)_invalidateBackgroundView;
- (void)_invalidateXPlusDView;
- (id)backdropGroupName;
- (long long)buttonStyle;
- (void)didMoveToSuperview;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })extendedEdgeInsets;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setBackdropGroupName:(id)arg1;
- (void)setButtonStyle:(long long)arg1;
- (void)setExtendedEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;

@end
