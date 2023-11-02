
@interface CPUIBannerViewButton : UIControl {
    UIView * _highlightView;
    NSLayoutConstraint * _imageCenterConstraint;
    UIImageView * _imageView;
    UILabel * _textLabel;
    bool  _wantsChevronImage;
}

@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic, retain) NSLayoutConstraint *imageCenterConstraint;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic) bool wantsChevronImage;

+ (id)_chevronImageForTraitCollection:(id)arg1;
+ (id)buttonWithChevronImage;
+ (id)buttonWithOK;
+ (id)buttonWithText:(id)arg1;

- (void).cxx_destruct;
- (void)_setupImagesIfNecessary;
- (void)_updateFontIfNecessary;
- (void)_updateImageConstraint;
- (id)highlightView;
- (id)imageCenterConstraint;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightView:(id)arg1;
- (void)setImageCenterConstraint:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setWantsChevronImage:(bool)arg1;
- (id)textLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)wantsChevronImage;

@end
