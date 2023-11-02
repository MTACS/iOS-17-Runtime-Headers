
@protocol BNImageProviding <NSObject, NSSecureCoding>

@required

- (UIImage *)image;
- (bool)isImageProvider;

@end
