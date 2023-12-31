
@interface CISparseRendererPreFiltering : CIFilter {
    NSNumber * inputApertureScaling;
    CIImage * inputImage;
    NSNumber * inputScale;
    NSDictionary * inputTuningParameters;
}

@property (copy) NSNumber *inputApertureScaling;
@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSDictionary *inputTuningParameters;

- (id)_kernel:(bool)arg1;
- (void)dumpImage:(id)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 prefixFilename:(id)arg3;
- (id)inputApertureScaling;
- (id)inputImage;
- (id)inputScale;
- (id)inputTuningParameters;
- (id)outputImage;
- (id)outputImage:(id)arg1 horizontal:(bool)arg2 width:(double)arg3;
- (void)setInputApertureScaling:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
