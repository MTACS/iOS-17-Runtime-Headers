
@interface DBIconDropShadowProvider : NSObject {
    UIImage * _iconImage;
    struct CGImage { } * _lightStyleShadowImage;
}

@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic) struct CGImage { }*lightStyleShadowImage;

+ (void)invalidate;

- (void).cxx_destruct;
- (void)_cleanupImages;
- (void)_shadow_drawing_queue_generateDarkStyleShadow;
- (void)_shadow_drawing_queue_generateLightStyleShadow;
- (id)iconImage;
- (void)imageForTraitCollection:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (struct CGImage { }*)lightStyleShadowImage;
- (void)setIconImage:(id)arg1;
- (void)setLightStyleShadowImage:(struct CGImage { }*)arg1;

@end
