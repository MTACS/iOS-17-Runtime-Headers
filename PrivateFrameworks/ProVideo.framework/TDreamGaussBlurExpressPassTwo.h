
@interface TDreamGaussBlurExpressPassTwo : TDreamProgramWrapper {
    double  _sigma;
    float  sigmaUniform;
}

@property (nonatomic) double sigma;

- (id)init;
- (void)setSigma:(double)arg1;
- (void)setUniforms;
- (double)sigma;

@end
