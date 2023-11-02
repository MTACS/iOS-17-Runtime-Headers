
@interface MUPunchoutView : UIView <MUActivityObserving> {
    UILayoutGuide * _layoutGuide;
    UIButton * _menuButton;
    UIView<MULabelViewProtocol> * _moreOnLabel;
    UIActivityIndicatorView * _spinner;
    UILabel * _vendorNameLabel;
    MUPunchoutViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) MUPunchoutViewModel *viewModel;

+ (double)_intrinsicWidth;
+ (double)preferredWidth;

- (void).cxx_destruct;
- (id)_attributedStringFromSymbol;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateLabelsWithAlpha:(double)arg1;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
