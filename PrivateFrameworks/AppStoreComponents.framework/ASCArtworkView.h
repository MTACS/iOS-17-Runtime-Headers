
@interface ASCArtworkView : UIView {
    ASCBorderView * _borderView;
    NSString * _decoration;
    UIImageView * _imageView;
    UIView * _overlayView;
    UIColor * _placeholderColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    ASCScreenshotDisplayConfiguration * _screenshotDisplayConfiguration;
}

@property (nonatomic, readonly) ASCBorderView *borderView;
@property (nonatomic, retain) NSString *decoration;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) UIView *overlayView;
@property (nonatomic, retain) UIColor *placeholderColor;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, copy) ASCScreenshotDisplayConfiguration *screenshotDisplayConfiguration;

- (void).cxx_destruct;
- (id)borderView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)cornerCurveForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)cornerMaskForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)cornerRadiusForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)decoration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (id)overlayView;
- (id)placeholderColor;
- (struct CGSize { double x1; double x2; })preferredSize;
- (id)screenshotDisplayConfiguration;
- (void)setDataChanged;
- (void)setDecoration:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScreenshotDisplayConfiguration:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
