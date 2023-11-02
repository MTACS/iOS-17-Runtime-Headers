
@interface TDreamEdgesOpt : TDreamProgramWrapperTwoInput {
    double  _sigma;
    float  oneOverSize;
    int  oneOverSizeUniform;
    int  radioUniform;
}

@property (nonatomic) double sigma;

- (id)init;
- (void)setOneOverSize:(const float*)arg1;
- (void)setSigma:(double)arg1;
- (void)setUniforms;
- (double)sigma;

@end
