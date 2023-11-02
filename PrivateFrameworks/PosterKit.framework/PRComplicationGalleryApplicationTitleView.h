
@interface PRComplicationGalleryApplicationTitleView : UIView {
    NSLayoutConstraint * _contentBottomConstraint;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _contentInsets;
    NSLayoutConstraint * _contentLeadingConstraint;
    NSLayoutConstraint * _contentTopConstraint;
    NSLayoutConstraint * _contentTrailingConstraint;
    NSLayoutConstraint * _imageHeightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageWidthConstraint;
    UILabel * _textLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *contentBottomConstraint;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, retain) NSLayoutConstraint *contentLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *contentTrailingConstraint;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) NSLayoutConstraint *imageHeightConstraint;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) NSLayoutConstraint *imageWidthConstraint;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSLayoutAnchor *titleLabelLeadingAnchor;

+ (struct CGSize { double x1; double x2; })iconImageSize;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_textLabelFont;
- (unsigned long long)_textLabelNumberOfLines;
- (id)contentBottomConstraint;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)contentLeadingConstraint;
- (id)contentTopConstraint;
- (id)contentTrailingConstraint;
- (void)dealloc;
- (id)iconImage;
- (id)imageHeightConstraint;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageView;
- (id)imageWidthConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentBottomConstraint:(id)arg1;
- (void)setContentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentLeadingConstraint:(id)arg1;
- (void)setContentTopConstraint:(id)arg1;
- (void)setContentTrailingConstraint:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setImageHeightConstraint:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageView:(id)arg1;
- (void)setImageWidthConstraint:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)textLabel;
- (id)title;
- (id)titleLabelLeadingAnchor;
- (void)traitCollectionDidChange:(id)arg1;

@end
