
@interface SFFaviconView : UIView {
    UIImage * _icon;
    UIImageView * _imageView;
    UIColor * _themeColor;
    double  _trailingInset;
    id /* block */  _trailingInsetChangeHandler;
}

@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) long long iconContentMode;
@property (nonatomic, retain) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, retain) UIColor *themeColor;
@property (nonatomic, readonly) double trailingInset;
@property (nonatomic, copy) id /* block */ trailingInsetChangeHandler;

- (void).cxx_destruct;
- (id)_determineIconBackingColorAndInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg1;
- (void)_updateIconBackingColorAndInset;
- (id)icon;
- (long long)iconContentMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)preferredSymbolConfiguration;
- (void)setIcon:(id)arg1;
- (void)setIconContentMode:(long long)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setThemeColor:(id)arg1;
- (void)setTrailingInset:(double)arg1;
- (void)setTrailingInsetChangeHandler:(id /* block */)arg1;
- (id)themeColor;
- (double)trailingInset;
- (id /* block */)trailingInsetChangeHandler;

@end
