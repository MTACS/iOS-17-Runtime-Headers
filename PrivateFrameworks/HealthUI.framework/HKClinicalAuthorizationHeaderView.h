
@interface HKClinicalAuthorizationHeaderView : UIView {
    NSLayoutConstraint * _imageToTitleConstraint;
    UIImageView * _imageView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) NSLayoutConstraint *imageToTitleConstraint;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (void)_updateForCurrentContentSizeCategory;
- (id)imageToTitleConstraint;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
