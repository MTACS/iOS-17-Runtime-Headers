
@interface CICircularMaskFromPointImage : CIFilter {
    CIImage * inputCoordinate;
    CIImage * inputImage;
    NSNumber * inputInnerRadius;
    NSNumber * inputOuterRadius;
}

@property (nonatomic, retain) CIImage *inputCoordinate;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputInnerRadius;
@property (nonatomic, copy) NSNumber *inputOuterRadius;

+ (id)customAttributes;

- (id)_kernelDraw;
- (id)inputCoordinate;
- (id)inputImage;
- (id)inputInnerRadius;
- (id)inputOuterRadius;
- (id)outputImage;
- (void)setInputCoordinate:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputInnerRadius:(id)arg1;
- (void)setInputOuterRadius:(id)arg1;

@end
