
@protocol CNAvatarImageRenderingScope <NSObject>

@required

- (unsigned long long)avatarViewBackgroundStyle;
- (unsigned long long)avatarViewStyle;
- (PRMonogramColor *)color;
- (struct CGSize { double x1; double x2; })pointSize;
- (bool)rightToLeft;
- (double)scale;
- (UIColor *)strokeColor;
- (double)strokeWidth;

@end
