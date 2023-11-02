
@interface CILanczosScaleTransform : CIFilter {
    NSNumber * inputAspectRatio;
    CIImage * inputImage;
    NSNumber * inputScale;
}

@property (nonatomic, retain) NSNumber *inputAspectRatio;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)inputAspectRatio;
- (id)inputImage;
- (id)inputScale;
- (id)outputImage;
- (id)outputImageNewScaleX:(double)arg1 scaleY:(double)arg2;
- (id)outputImageOldScaleX:(double)arg1 scaleY:(double)arg2;
- (void)setInputAspectRatio:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
