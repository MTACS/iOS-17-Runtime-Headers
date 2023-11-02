
@interface TDreamSobelOpt : TDreamProgramWrapper {
    float  offset;
    int  offsetUniform;
}

- (id)init;
- (void)setOffset:(const float*)arg1;
- (void)setUniforms;

@end
