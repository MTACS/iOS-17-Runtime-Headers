
@interface CIBarsSwipeTransition : CIFilter {
    NSNumber * inputAngle;
    NSNumber * inputBarOffset;
    CIImage * inputImage;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) NSNumber *inputBarOffset;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIImage *inputTargetImage;
@property (nonatomic, retain) NSNumber *inputTime;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputAngle;
- (id)inputBarOffset;
- (id)inputImage;
- (id)inputTargetImage;
- (id)inputTime;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputBarOffset:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (void)setInputTime:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
