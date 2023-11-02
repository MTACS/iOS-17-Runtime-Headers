
@interface TDreamBFBlurPassTwoOpt : TDreamProgramWrapperTwoInput {
    double  _sigma;
    double  _sigmaColor;
    float  oneOverSize;
    int  oneOverSizeUniform;
}

@property (nonatomic) double sigma;
@property (nonatomic) double sigmaColor;

- (id)init;
- (void)setOneOverSize:(const float*)arg1;
- (void)setSigma:(double)arg1;
- (void)setSigmaColor:(double)arg1;
- (void)setUniforms;
- (double)sigma;
- (double)sigmaColor;

@end
