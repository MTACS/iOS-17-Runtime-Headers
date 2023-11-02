
@interface SearchUIBackgroundColorView : UICollectionReusableView {
    SFColor * _color;
    SearchUIGradientView * _colorBlendView;
    <SearchUIBackgroundColorViewProtocol> * _delegate;
    SearchUIGradientView * _gradientView;
    SearchUIGradientView * _gradientViewMaskView;
    TLKProminenceView * _highlightView;
    bool  _highlighted;
    bool  _needsTintForReadability;
    UIView * _platterView;
    TLKProminenceView * _prominenceView;
    bool  _showsPlaceholderPlatterView;
}

@property (nonatomic, retain) SFColor *color;
@property (retain) SearchUIGradientView *colorBlendView;
@property (nonatomic) <SearchUIBackgroundColorViewProtocol> *delegate;
@property (retain) SearchUIGradientView *gradientView;
@property (retain) SearchUIGradientView *gradientViewMaskView;
@property (retain) TLKProminenceView *highlightView;
@property (nonatomic) bool highlighted;
@property (nonatomic) bool needsTintForReadability;
@property (retain) UIView *platterView;
@property (retain) TLKProminenceView *prominenceView;
@property (nonatomic) bool showsPlaceholderPlatterView;

+ (void)updateAppearance:(id)arg1 forViews:(id)arg2 withColors:(id)arg3;

- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)color;
- (id)colorBlendView;
- (id)delegate;
- (void)didMoveToWindow;
- (id)gradientView;
- (id)gradientViewMaskView;
- (id)highlightView;
- (bool)highlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)needsTintForReadability;
- (id)platterView;
- (id)prominenceView;
- (void)setColor:(id)arg1;
- (void)setColorBlendView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setGradientViewMaskView:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNeedsTintForReadability:(bool)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setProminenceView:(id)arg1;
- (void)setShowsPlaceholderPlatterView:(bool)arg1;
- (bool)showsPlaceholderPlatterView;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)tlks_setCornerRadius:(double)arg1 withStyle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewsToOverrideAppearance;

@end
