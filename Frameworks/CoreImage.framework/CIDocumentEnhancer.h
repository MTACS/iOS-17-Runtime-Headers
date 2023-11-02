
@interface CIDocumentEnhancer : CIFilter {
    NSNumber * inputAmount;
    CIImage * inputImage;
}

@property (nonatomic, copy) NSNumber *inputAmount;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)inputAmount;
- (id)inputImage;
- (id)outputImage;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
