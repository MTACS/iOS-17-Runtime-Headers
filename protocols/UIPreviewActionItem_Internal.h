
@protocol UIPreviewActionItem_Internal <NSObject>

@required

- (UIColor *)_color;
- (UIColor *)_effectiveColor;
- (UIImage *)_effectiveImage;
- (void)_setColor:(UIColor *)arg1;
- (NSString *)identifier;
- (UIImage *)image;
- (void)setIdentifier:(NSString *)arg1;
- (void)setImage:(UIImage *)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(NSString *)arg1;
- (long long)style;
- (NSString *)title;

@end