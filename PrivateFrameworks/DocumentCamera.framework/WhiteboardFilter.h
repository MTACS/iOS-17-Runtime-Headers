
@interface WhiteboardFilter : CIFilter {
    CIImage * _inputImage;
    NSNumber * _stride;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *stride;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setStride:(id)arg1;
- (id)stride;
- (id)whiteboardFilterKernel;

@end
