
@interface GDCTransform : NSObject {
    FigMetalContext * _metalContext;
    <MTLComputePipelineState> * _pipelineStates;
    <MTLSamplerState> * _samplers;
}

- (void).cxx_destruct;
- (int)_compileShaders;
- (struct { float x1[8]; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[3]; } x2; })_legacyParametersToUniforms:(const struct { float x1[8]; float x2[8]; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10[9]; float x11[9]; struct CGSize { double x_12_1_1; double x_12_1_2; } x12; bool x13; int x14; struct { /* ? */ } *x15; int x16; float x17; bool x18; float x19; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_20_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_20_1_2; } x20; }*)arg1 withScale:(float)arg2 andMode:(int)arg3;
- (int)_setSamplersWithNormalizedCoordinates:(bool)arg1;
- (id)initWithOptionalCommandQueue:(id)arg1;
- (int)transformFrom:(id)arg1 to:(id)arg2 withParameters:(const struct { float x1[8]; float x2[8]; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10[9]; float x11[9]; struct CGSize { double x_12_1_1; double x_12_1_2; } x12; bool x13; int x14; struct { /* ? */ } *x15; int x16; float x17; bool x18; float x19; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_20_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_20_1_2; } x20; }*)arg3 withScale:(float)arg4 withMode:(int)arg5 andCommandBuffer:(id)arg6;

@end
