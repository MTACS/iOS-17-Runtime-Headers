
@protocol PXGMetalSpriteTexture <PXGSpriteTexture>

@required

- (float)alpha;
- (<MTLTexture> *)chromaTexture;
- (void)cleanupAfterRender:(long long)arg1;
- (PXGColorProgram *)colorProgram;
- (void)getTextureInfos:(void *)arg1 forSpriteIndexes:(void *)arg2 geometries:(void *)arg3 spriteStyles:(void *)arg4 spriteInfos:(void *)arg5 screenScale:(void *)arg6 count:(void *)arg7; // needs 7 arg types, found 4: struct { float x1; }*, unsigned int*, const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*, const struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*
- (bool)isAtlas;
- (bool)isCaptureTexture;
- (void)prepareForRender:(long long)arg1;
- (long long)renderPipelineIndex;
- (void)setRenderPipelineIndex:(long long)arg1;
- (int)shaderFlags;
- (<MTLTexture> *)texture;

@end
