
@interface CICoreMLModelFilter : CIFilter {
    NSNumber * inputHeadIndex;
    CIImage * inputImage;
    MLModel * inputModel;
    NSNumber * inputSoftmaxNormalization;
}

@property (nonatomic, retain) NSNumber *inputHeadIndex;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) MLModel *inputModel;
@property (nonatomic, retain) NSNumber *inputSoftmaxNormalization;

+ (id)customAttributes;

- (id)inputHeadIndex;
- (id)inputImage;
- (id)inputModel;
- (id)inputSoftmaxNormalization;
- (id)outputImage;
- (void)setInputHeadIndex:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputModel:(id)arg1;
- (void)setInputSoftmaxNormalization:(id)arg1;

@end
