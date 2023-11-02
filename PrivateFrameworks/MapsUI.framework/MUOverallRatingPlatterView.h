
@interface MUOverallRatingPlatterView : UIView {
    UILabel * _attributionLabel;
    UILabel * _ratingLabel;
    UILabel * _starLabel;
    UITapGestureRecognizer * _tapGestureRecognizer;
    <MUOverallRatingPlatterViewModel> * _viewModel;
}

@property (nonatomic, readonly) NSAttributedString *ratingString;
@property (nonatomic, readonly) NSAttributedString *starString;
@property (nonatomic, retain) <MUOverallRatingPlatterViewModel> *viewModel;

- (void).cxx_destruct;
- (id)_attributesWithFont:(id)arg1 color:(id)arg2;
- (void)_contentSizeDidChange;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateAttribution;
- (void)addSelectionGestureWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)ratingString;
- (void)setViewModel:(id)arg1;
- (id)starString;
- (id)viewModel;

@end
