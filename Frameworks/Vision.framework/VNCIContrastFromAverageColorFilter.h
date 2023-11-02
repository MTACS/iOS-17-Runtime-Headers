
@interface VNCIContrastFromAverageColorFilter : VNCIFilter {
    NSNumber * _inputContrast;
}

@property (nonatomic, copy) NSNumber *inputContrast;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInputParameters:(id)arg1;
- (id)inputContrast;
- (id)outputImage;
- (void)setInputContrast:(id)arg1;

@end
