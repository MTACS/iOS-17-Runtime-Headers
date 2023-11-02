
@interface AMPOnboardingFeatureView : UIView {
    UILabel * _descriptionLabel;
    UIImageView * _imageView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (id)descriptionLabel;
- (id)imageView;
- (id)initWithFeature:(id)arg1;
- (void)layoutSubviews;
- (void)setDescriptionLabel:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
