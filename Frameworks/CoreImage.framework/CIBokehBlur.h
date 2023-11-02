
@interface CIBokehBlur : CIFilter {
    NSMutableArray * _recipe;
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputRingAmount;
    NSNumber * inputRingSize;
    NSNumber * inputSoftness;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (void)dealloc;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
