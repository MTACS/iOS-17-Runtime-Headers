
@interface ComplicationDisplay.ApricotNamedImageView : UIView <CDComplicationImageView> {
    void baseline;
    void color;
    void hostingViewController;
    void imageProvider;
    void maxSize;
    void monochromeFraction;
    void overrideColor;
    void usesLegibility;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) CLKImageProvider *imageProvider;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic) bool usesLegibility;

- (void).cxx_destruct;
- (id)color;
- (id)imageProvider;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)overrideColor;
- (void)setColor:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setUsesLegibility:(bool)arg1;
- (bool)usesLegibility;

@end
