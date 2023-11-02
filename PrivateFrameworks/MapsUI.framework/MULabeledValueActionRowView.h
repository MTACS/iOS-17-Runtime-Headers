
@interface MULabeledValueActionRowView : MUPlaceSectionRowView {
    MUCirclePlatterView * _actionPlatterView;
    NSLayoutConstraint * _actionPlatterWidthConstraint;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIView<MULabelViewProtocol> * _tertiaryLabel;
    UIView<MULabelViewProtocol> * _titleLabel;
    UILayoutGuide * _titleValueLayoutGuide;
    UIView<MULabelViewProtocol> * _valueLabel;
    <MULabeledValueActionViewModelProviding> * _viewModel;
}

@property (nonatomic, retain) <MULabeledValueActionViewModelProviding> *viewModel;

- (void).cxx_destruct;
- (void)_actionButtonTapped;
- (void)_contentSizeDidChange;
- (double)_platterLength;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateValueText;
- (id)_valueLabelFont;
- (void)copy:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
