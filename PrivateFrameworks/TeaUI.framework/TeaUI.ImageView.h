
@interface TeaUI.ImageView : UIView {
    void _backgroundColor;
    void imageView;
    void loadingIdentifier;
}

@property (nonatomic) bool accessibilityIgnoresInvertColors;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) bool clipsToBounds;
@property (nonatomic) long long contentMode;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)backgroundColor;
- (bool)clipsToBounds;
- (long long)contentMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessibilityIgnoresInvertColors:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setClipsToBounds:(bool)arg1;
- (void)setContentMode:(long long)arg1;

@end
