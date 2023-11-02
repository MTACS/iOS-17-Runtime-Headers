
@interface MUDisclosureActionRowView : MUPlaceSectionRowView {
    UIImageView * _disclosureView;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageWidthConstraint;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UILabel * _titleLabel;
    UILayoutGuide * _titleValueLayoutGuide;
    UILabel * _valueLabel;
    <MUDisclosureActionViewModelProviding> * _viewModel;
}

@property (nonatomic, retain) <MUDisclosureActionViewModelProviding> *viewModel;

- (void).cxx_destruct;
- (void)_buttonCellTapped;
- (void)_contentSizeDidChange;
- (double)_imageWidth;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateForPlatterAvailability;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewModel:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)viewModel;

@end
