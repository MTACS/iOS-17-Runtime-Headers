
@interface MUButtonCellRowView : MUPlaceSectionRowView <MUDynamicButtonCellModelChangeDelegate> {
    MUCirclePlatterView * _actionPlatterView;
    UIButton * _menuButton;
    NSLayoutConstraint * _platterWidthConstraint;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UILabel * _titleLabel;
    UILayoutGuide * _titleValueLayoutGuide;
    UILabel * _valueLabel;
    <MUDynamicButtonCellModel> * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MUDynamicButtonCellModel> *viewModel;

- (void).cxx_destruct;
- (void)_buttonCellTapped;
- (void)_contentSizeDidChange;
- (double)_platterLength;
- (void)_setupAccessibilityIdentifier;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateForPlatterAvailability;
- (void)dynamicButtonCellModelDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewModel:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)viewModel;

@end
