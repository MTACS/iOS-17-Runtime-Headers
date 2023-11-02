
@interface TDreamGaussBlurExpressPassTwoOpt9 : TDreamProgramWrapper {
    float  kernel;
    int  kernelUniform;
    float  offsets;
    int  offsetsUniform;
}

- (id)init;
- (void)setKernel:(const double*)arg1;
- (void)setOffsets:(const double*)arg1;
- (void)setUniforms;

@end
