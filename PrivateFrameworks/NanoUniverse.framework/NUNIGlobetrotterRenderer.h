
@interface NUNIGlobetrotterRenderer : NUNIClassicRenderer {
    CLKUIMetalResourcePool * _globeLineTextureResourcePool;
    <MTLTexture> * _globeLinesCurrentTexture;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _globeLinesMatrix;
}

- (void).cxx_destruct;
- (void)_createPipelineForProgramType:(unsigned long long)arg1 fromLibrary:(id)arg2;
- (void)_initPrograms;
- (id)_renderGlobeLinesWithCommandBuffer:(id)arg1 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; float x4; float x5; struct NUNIClassicGeometryRange { int x_6_1_1; int x_6_1_2; } x6; struct NUNIClassicGeometryRange { int x_7_1_1; int x_7_1_2; } x7; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_8_1_1[4]; } x8; struct { void*x_9_1_1[4]; } x9; }*)arg2 spheroid:(id)arg3;
- (void)draw3DWithEncoder:(id)arg1 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; float x4; float x5; struct NUNIClassicGeometryRange { int x_6_1_1; int x_6_1_2; } x6; struct NUNIClassicGeometryRange { int x_7_1_1; int x_7_1_2; } x7; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_8_1_1[4]; } x8; struct { void*x_9_1_1[4]; } x9; }*)arg2 spheroid:(id)arg3;
- (void)drawOffscreen3DWithCommandBuffer:(id)arg1 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; float x4; float x5; struct NUNIClassicGeometryRange { int x_6_1_1; int x_6_1_2; } x6; struct NUNIClassicGeometryRange { int x_7_1_1; int x_7_1_2; } x7; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_8_1_1[4]; } x8; struct { void*x_9_1_1[4]; } x9; }*)arg2 spheroid:(id)arg3;

@end
