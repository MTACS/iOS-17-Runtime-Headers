
@interface PXContentSyndicationStackedImageView : UIView {
    PXGradientView * _bottomGradientView;
    unsigned long long  _darkenedStyle;
    UIView * _darkeningView;
    bool  _hasBottomDarkGradient;
    bool  _highlighted;
    UIImageView * _imageView;
    NSAttributedString * _overlayTitle;
    UILabel * _overlayTitleLabel;
    UIVisualEffectView * _visualEffectView;
}

@property (getter=isBlurred, nonatomic) bool blurred;
@property (nonatomic, retain) PXGradientView *bottomGradientView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long darkenedStyle;
@property (nonatomic, retain) UIView *darkeningView;
@property (nonatomic) bool hasBottomDarkGradient;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, copy) NSAttributedString *overlayTitle;
@property (nonatomic, retain) UILabel *overlayTitleLabel;
@property (nonatomic, readonly, copy) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (id)bottomGradientView;
- (double)cornerRadius;
- (unsigned long long)darkenedStyle;
- (id)darkeningView;
- (bool)hasBottomDarkGradient;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBlurred;
- (bool)isHighlighted;
- (id)overlayTitle;
- (id)overlayTitleLabel;
- (id)regionOfInterestForOneUpTransition;
- (void)setBlurred:(bool)arg1;
- (void)setBottomGradientView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDarkenedStyle:(unsigned long long)arg1;
- (void)setDarkeningView:(id)arg1;
- (void)setHasBottomDarkGradient:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setOverlayTitle:(id)arg1;
- (void)setOverlayTitleLabel:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (id)visualEffectView;

@end
