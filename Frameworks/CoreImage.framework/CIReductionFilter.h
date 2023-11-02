
@interface CIReductionFilter : CIFilter {
    CIVector * inputExtent;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_reduceCrop;
- (id)inputExtent;
- (id)inputImage;
- (id)offsetAndCrop;
- (id)outputImage;
- (void)setInputExtent:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
