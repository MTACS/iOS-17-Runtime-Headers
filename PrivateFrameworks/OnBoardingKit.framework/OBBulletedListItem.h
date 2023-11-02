
@interface OBBulletedListItem : UIView {
    UIButton * _accessoryButton;
    NSLayoutConstraint * _bottomConstraintToImageContainer;
    NSLayoutConstraint * _bottomConstraintToStackView;
    UILabel * _descriptionLabel;
    UIView * _imageContainer;
    NSArray * _imageContainerSizeConstraints;
    UIImageView * _imageView;
    UIStackView * _stackView;
    NSLayoutConstraint * _stackViewLeadingConstraintHorizontal;
    NSLayoutConstraint * _stackViewLeadingConstraintVertical;
    UILabel * _titleLabel;
    NSLayoutConstraint * _topConstraintToImageContainer;
    NSLayoutConstraint * _topConstraintToStackView;
}

@property (nonatomic, retain) UIButton *accessoryButton;
@property (nonatomic, retain) NSLayoutConstraint *bottomConstraintToImageContainer;
@property (nonatomic, retain) NSLayoutConstraint *bottomConstraintToStackView;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) UIView *imageContainer;
@property (nonatomic, retain) NSArray *imageContainerSizeConstraints;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIStackView *stackView;
@property (nonatomic, retain) NSLayoutConstraint *stackViewLeadingConstraintHorizontal;
@property (nonatomic, retain) NSLayoutConstraint *stackViewLeadingConstraintVertical;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *topConstraintToImageContainer;
@property (nonatomic, retain) NSLayoutConstraint *topConstraintToStackView;

- (void).cxx_destruct;
- (double)_combinedLabelHeight;
- (id)_descriptionFont;
- (double)_horizontalMargins;
- (double)_imageTextPadding;
- (id)_titleFont;
- (void)_updateImageViewLayout;
- (id)accessoryButton;
- (id)bottomConstraintToImageContainer;
- (id)bottomConstraintToStackView;
- (id)descriptionLabel;
- (id)imageContainer;
- (id)imageContainerSizeConstraints;
- (double)imageSizeForImage:(id)arg1;
- (id)imageView;
- (id)initWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 tintColor:(id)arg4;
- (id)initWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 tintColor:(id)arg4 linkButton:(id)arg5;
- (id)initWithTitle:(id)arg1 description:(id)arg2 symbolName:(id)arg3 tintColor:(id)arg4;
- (id)initWithTitle:(id)arg1 description:(id)arg2 symbolName:(id)arg3 tintColor:(id)arg4 linkButton:(id)arg5;
- (void)layoutSubviews;
- (double)leadingMargins;
- (void)setAccessoryButton:(id)arg1;
- (void)setBottomConstraintToImageContainer:(id)arg1;
- (void)setBottomConstraintToStackView:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setImageContainer:(id)arg1;
- (void)setImageContainerSizeConstraints:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setStackViewLeadingConstraintHorizontal:(id)arg1;
- (void)setStackViewLeadingConstraintVertical:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTopConstraintToImageContainer:(id)arg1;
- (void)setTopConstraintToStackView:(id)arg1;
- (bool)shouldLayoutVertically;
- (id)stackView;
- (id)stackViewLeadingConstraintHorizontal;
- (id)stackViewLeadingConstraintVertical;
- (id)titleLabel;
- (id)topConstraintToImageContainer;
- (id)topConstraintToStackView;
- (double)trailingMargins;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
