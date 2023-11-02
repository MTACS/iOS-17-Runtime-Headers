
@interface CIPhotoEffect : CIFilter {
    NSNumber * inputExtrapolate;
    CIImage * inputImage;
}

@property (nonatomic, copy) NSNumber *inputExtrapolate;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (int)_defaultVersion;
- (int)_maxVersion;
- (id)cubeColorSpaceName;
- (id)cubeName;
- (id)cubePath;
- (id)init;
- (id)inputExtrapolate;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputExtrapolate:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
