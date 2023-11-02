
@protocol UIButtonDeprecatedAPISupportingVisualProvider <UIButtonVisualProvider>

@required

- (bool)deferToLazyTitleFont;
- (UIFont *)font;
- (bool)fontIsDefaultForIdiom;
- (long long)lineBreakMode;
- (void)setFont:(UIFont *)arg1 isDefaultForIdiom:(bool)arg2;
- (void)setLineBreakMode:(long long)arg1;
- (void)setTitleShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })titleShadowOffset;

@end
