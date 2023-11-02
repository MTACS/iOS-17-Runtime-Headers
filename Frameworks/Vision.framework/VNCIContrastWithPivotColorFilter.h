
@interface VNCIContrastWithPivotColorFilter : VNCIFilter {
    NSNumber * _inputContrast;
    NSNumber * _inputPivot;
}

@property (nonatomic, copy) NSNumber *inputContrast;
@property (nonatomic, copy) NSNumber *inputPivot;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInputParameters:(id)arg1;
- (id)inputContrast;
- (id)inputPivot;
- (id)outputImage;
- (void)setInputContrast:(id)arg1;
- (void)setInputPivot:(id)arg1;

@end
