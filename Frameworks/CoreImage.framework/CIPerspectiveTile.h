
@interface CIPerspectiveTile : CIFilter {
    CIVector * inputBottomLeft;
    CIVector * inputBottomRight;
    CIImage * inputImage;
    CIVector * inputTopLeft;
    CIVector * inputTopRight;
}

@property (nonatomic, retain) CIVector *inputBottomLeft;
@property (nonatomic, retain) CIVector *inputBottomRight;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputTopLeft;
@property (nonatomic, retain) CIVector *inputTopRight;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputBottomLeft;
- (id)inputBottomRight;
- (id)inputImage;
- (id)inputTopLeft;
- (id)inputTopRight;
- (id)outputImage;
- (void)setInputBottomLeft:(id)arg1;
- (void)setInputBottomRight:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputTopLeft:(id)arg1;
- (void)setInputTopRight:(id)arg1;

@end
