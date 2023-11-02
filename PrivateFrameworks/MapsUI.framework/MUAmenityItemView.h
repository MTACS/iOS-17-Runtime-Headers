
@interface MUAmenityItemView : MKViewWithHairline {
    UIImageView * _imageView;
    NSLayoutConstraint * _imageWidthConstraint;
    UIView<MULabelViewProtocol> * _titleLabel;
    <MUAmenityItemViewModel> * _viewModel;
}

@property (nonatomic, retain) <MUAmenityItemViewModel> *viewModel;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
