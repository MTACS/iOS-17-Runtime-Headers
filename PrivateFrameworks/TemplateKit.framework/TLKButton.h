
@interface TLKButton : UIView {
    UIView * _backgroundView;
    TLKTapContainerButton * _button;
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedSize;
    TLKImageView * _imageView;
    bool  _indeterminate;
    CAShapeLayer * _innerProgressLayer;
    CAShapeLayer * _outerProgressLayer;
    UIImage * _overlayImage;
    double  _progress;
    bool  _toggled;
    UIImage * _toggledImage;
    UIImage * _untoggledImage;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) TLKTapContainerButton *button;
@property (nonatomic) UIView *containerView;
@property (nonatomic) struct CGSize { double x1; double x2; } fixedSize;
@property (readonly) UIView *hitView;
@property (readonly) UIImage *imageOnImageView;
@property (nonatomic, retain) TLKImageView *imageView;
@property (getter=isIndeterminate, nonatomic, readonly) bool indeterminate;
@property (nonatomic, retain) CAShapeLayer *innerProgressLayer;
@property (nonatomic, retain) CAShapeLayer *outerProgressLayer;
@property (nonatomic, retain) UIImage *overlayImage;
@property (nonatomic) double progress;
@property (getter=isToggled, nonatomic) bool toggled;
@property (nonatomic, retain) UIImage *toggledImage;
@property (nonatomic, retain) UIImage *untoggledImage;

+ (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })_calculateStatistics:(struct CGImage { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)blurColorForColor:(id)arg1;
+ (id)blurColorForImage:(id)arg1 forButtonSize:(struct CGSize { double x1; double x2; })arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4;

- (void).cxx_destruct;
- (void)_beginIndeterminateAnimation;
- (id)_innerProgressLayer;
- (id)_newShapeViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2;
- (id)_outerProgressLayer;
- (void)_updateInnerProgressLayerStroke;
- (void)addTarget:(id)arg1 forAction:(SEL)arg2;
- (id)backgroundView;
- (void)beginIndeterminateAnimation;
- (id)button;
- (id)containerView;
- (void)didMoveToWindow;
- (void)endIndeterminateAnimation;
- (struct CGSize { double x1; double x2; })fixedSize;
- (void)hideProgressAnimated:(bool)arg1;
- (id)hitView;
- (id)iconColor;
- (id)imageOnImageView;
- (id)imageView;
- (id)init;
- (id)innerProgressLayer;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isIndeterminate;
- (bool)isToggled;
- (void)layoutSubviews;
- (id)outerProgressLayer;
- (id)overlayImage;
- (double)progress;
- (void)setBackgroundView:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonSelectionState:(bool)arg1;
- (void)setContainerView:(id)arg1;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageView:(id)arg1;
- (void)setInnerProgressLayer:(id)arg1;
- (void)setOuterProgressLayer:(id)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgress:(float)arg1 animated:(bool)arg2;
- (void)setToggled:(bool)arg1;
- (void)setToggledImage:(id)arg1;
- (void)setUntoggledImage:(id)arg1;
- (void)showPlayIndicator:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)toggledImage;
- (void)traitCollectionDidChange:(id)arg1;
- (id)untoggledImage;
- (void)updateOuterProgressLayerStroke;

@end
