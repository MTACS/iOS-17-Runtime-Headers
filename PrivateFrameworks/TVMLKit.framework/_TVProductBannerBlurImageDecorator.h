
@interface _TVProductBannerBlurImageDecorator : NSObject {
    _UIBackdropViewSettings * _backdropSettings;
    bool  _lightStyle;
}

@property (nonatomic, retain) _UIBackdropViewSettings *backdropSettings;
@property (nonatomic) bool lightStyle;

- (void).cxx_destruct;
- (id)backdropSettings;
- (id)blurImageWithImage:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 scaleSize:(struct CGSize { double x1; double x2; })arg3;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize { double x1; double x2; })arg2 croppedToFit:(bool)arg3;
- (bool)lightStyle;
- (id)resizeImage:(struct CGImage { }*)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 shouldDither:(bool)arg3;
- (void)setBackdropSettings:(id)arg1;
- (void)setLightStyle:(bool)arg1;

@end
