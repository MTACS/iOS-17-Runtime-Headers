
@interface CIDiscBlur : CIFilter {
    NSMutableArray * _recipe;
    CIImage * inputImage;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (void)dealloc;
- (id)inputImage;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
