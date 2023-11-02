
@interface NUAlphaHistogramCalculator : NUHistogramCalculator {
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    }  _luminanceThresholds;
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    }  _luminanceWeights;
}

@property (nonatomic) struct { float x1; float x2; float x3; float x4; } luminanceThresholds;
@property (nonatomic) struct { float x1; float x2; float x3; float x4; } luminanceWeights;

- (id)_computeAlphaHistogramForBufferBGRA8:(id)arg1 error:(out id*)arg2;
- (id)computeHistogramFromBuffer:(id)arg1 error:(out id*)arg2;
- (id)init;
- (struct { float x1; float x2; float x3; float x4; })luminanceThresholds;
- (struct { float x1; float x2; float x3; float x4; })luminanceWeights;
- (void)setLuminanceThresholds:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setLuminanceWeights:(struct { float x1; float x2; float x3; float x4; })arg1;

@end
