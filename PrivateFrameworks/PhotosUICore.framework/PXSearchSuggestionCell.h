
@interface PXSearchSuggestionCell : UICollectionViewListCell {
    UILabel * _countLabel;
    UIImageView * _imageView;
    UILayoutGuide * _imageViewLayoutGuide;
    NSLayoutConstraint * _imageViewLayoutGuideWidthConstraint;
    UIStackView * _textStackView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *countLabel;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILayoutGuide *imageViewLayoutGuide;
@property (nonatomic, readonly) NSLayoutConstraint *imageViewLayoutGuideWidthConstraint;
@property (nonatomic, readonly) UIStackView *textStackView;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateContentColors;
- (void)_updateLayoutWithContentSizeCategory:(id)arg1;
- (id)countLabel;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)imageView;
- (id)imageViewLayoutGuide;
- (double)imageViewLayoutGuideWidth;
- (id)imageViewLayoutGuideWidthConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setSearchSuggestion:(id)arg1;
- (id)textStackView;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConfigurationUsingState:(id)arg1;

@end
