
@interface TDreamStrokeAndBlendOpt : TDreamProgramWrapperTwoInput {
    float  oneOverSize;
    int  oneOverSizeUniform;
}

- (id)init;
- (void)setOneOverSize:(const float*)arg1;
- (void)setUniforms;

@end
