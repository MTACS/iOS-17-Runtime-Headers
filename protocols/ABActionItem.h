
@protocol ABActionItem <NSObject>

@required

- (bool)canBeHighlighted;
- (UIColor *)color;
- (NSString *)identifier;
- (UIImage *)image;

@end
