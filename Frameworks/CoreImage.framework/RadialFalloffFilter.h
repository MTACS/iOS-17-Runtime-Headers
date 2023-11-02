
@interface RadialFalloffFilter : CIFilter {
    NSNumber * inputAnisotropic;
    CIImage * inputCenter;
    CIVector * inputExtent;
    NSNumber * inputFalloff;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) NSNumber *inputAnisotropic;
@property (nonatomic, retain) CIImage *inputCenter;
@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) NSNumber *inputFalloff;
@property (nonatomic, retain) NSNumber *inputRadius;

- (id)inputAnisotropic;
- (id)inputCenter;
- (id)inputExtent;
- (id)inputFalloff;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputAnisotropic:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputFalloff:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
