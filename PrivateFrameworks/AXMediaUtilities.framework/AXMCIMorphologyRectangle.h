
@interface AXMCIMorphologyRectangle : CIFilter {
    NSNumber * inputHeight;
    CIImage * inputImage;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) NSNumber *inputHeight;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (void).cxx_destruct;
- (bool)_doMinimum;
- (bool)_isIdentity;
- (id)inputHeight;
- (id)inputImage;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputHeight:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
