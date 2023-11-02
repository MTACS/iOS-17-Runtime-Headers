
@interface MUCuratedCollectionSummaryView : UIView {
    UILabel * _descriptionLabel;
    UIImageView * _imageView;
    UILayoutGuide * _layoutGuide;
    UILabel * _titleLabel;
    <MUCuratedCollectionSummary> * _viewModel;
}

@property (nonatomic, retain) <MUCuratedCollectionSummary> *viewModel;

- (void).cxx_destruct;
- (id)_attributesWithFont:(id)arg1 color:(id)arg2;
- (void)_contentSizeDidChange;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateImageViewForInterfaceStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)publisherString;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
