
@protocol PRPosterContentStyleRenderer <NSObject>

@optional

- (void)renderCustomStyle:(PRPosterContentCustomStyle *)arg1;
- (void)renderDiscreteColorStyle:(PRPosterContentDiscreteColorsStyle *)arg1;
- (void)renderGradientStyle:(PRPosterContentGradientStyle *)arg1;
- (void)renderVibrantMaterialStyle:(PRPosterContentVibrantMaterialStyle *)arg1;
- (void)renderVibrantMonochromeStyle:(PRPosterContentVibrantMonochromeStyle *)arg1;

@end
