
@interface SVAdPrivacyButton : SVButton

+ (id)font;
+ (double)height;
+ (struct CGSize { double x1; double x2; })size;
+ (id)title;

- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElement;

@end
