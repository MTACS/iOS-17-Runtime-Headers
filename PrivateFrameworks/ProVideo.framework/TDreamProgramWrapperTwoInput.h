
@interface TDreamProgramWrapperTwoInput : TDreamProgramWrapper {
    int  filterInputTextureUniform2;
    int  filterSecondTextureCoordinateAttribute;
}

- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (void)initializeAttributes;
- (void)renderTo:(unsigned int)arg1 from:(unsigned int)arg2 andFrom:(unsigned int)arg3;

@end
