
@interface _UILegibilityImageSet : NSObject {
    UIImage * _image;
    UIImage * _shadowImage;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImage *shadowImage;

+ (id)imageFromImage:(id)arg1 withShadowImage:(id)arg2;

- (void)dealloc;
- (id)image;
- (id)imageSetFlippedForRightToLeft;
- (id)imageSetWithOrientation:(long long)arg1;
- (id)initWithImage:(id)arg1 shadowImage:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;

@end
