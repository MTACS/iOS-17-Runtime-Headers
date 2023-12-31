
@interface TDreamBFBlurPassTwo : TDreamProgramWrapperTwoInput {
    double  _sigma;
    double  _sigmaColor;
    int  sigmaColorUniform;
    int  sigmaUniform;
}

@property (nonatomic) double sigma;
@property (nonatomic) double sigmaColor;

- (id)init;
- (void)setSigma:(double)arg1;
- (void)setSigmaColor:(double)arg1;
- (void)setUniforms;
- (double)sigma;
- (double)sigmaColor;

@end
