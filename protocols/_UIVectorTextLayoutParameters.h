
@protocol _UIVectorTextLayoutParameters <NSObject>

@required

- (NSAttributedString *)attributedText;
- (long long)lineBreakMode;
- (unsigned long long)numberOfLines;
- (UITraitCollection *)traitCollection;
- (struct CGSize { double x1; double x2; })withinSize;

@end
