
@interface PITempTintFilter : CIFilter {
    CIImage * _inputImage;
    double  _inputTemperature;
    double  _inputTint;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic) double inputTemperature;
@property (nonatomic) double inputTint;
@property (nonatomic) double temperature;
@property (nonatomic) double tint;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)inputImage;
- (double)inputTemperature;
- (double)inputTint;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputTemperature:(double)arg1;
- (void)setInputTint:(double)arg1;
- (void)setInputVectorsForFilter:(id)arg1;
- (void)setTemperature:(double)arg1;
- (void)setTint:(double)arg1;
- (double)temperature;
- (double)tint;

@end
