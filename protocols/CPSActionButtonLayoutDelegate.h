
@protocol CPSActionButtonLayoutDelegate <NSObject>

@optional

- (UIColor *)buttonBackgroundColor;
- (struct CGSize { double x1; double x2; })buttonGlyphSize;
- (UIColor *)buttonImageTintColor;
- (double)buttonRadius;
- (struct CGSize { double x1; double x2; })buttonSize;
- (bool)buttonsShouldFill;
- (void)configureButton:(CPSActionButton *)arg1;
- (UIFont *)font;

@end
