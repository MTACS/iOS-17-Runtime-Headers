
@interface CIDepthEffectApplyBlurMapRemainder : CIDepthEffectApplyBlurMap {
    CIImage * inputBackground;
}

@property (retain) CIImage *inputBackground;

+ (id)customAttributes;

- (id)inputBackground;
- (id)outputImage;
- (void)setInputBackground:(id)arg1;
- (id)unifiedRenderingOutputImage:(struct CGImageMetadata { }*)arg1;

@end
