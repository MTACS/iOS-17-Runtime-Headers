
@protocol TSDMTLParticleSystem <NSObject>

@required

+ (<TSDMTLParticleSystem> *)newParticleSystemWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize { double x1; double x2; })arg2 slideSize:(struct CGSize { double x1; double x2; })arg3 duration:(double)arg4 direction:(unsigned long long)arg5 randomGenerator:(id <TSDAnimationRandomGenerator>)arg6 shader:(TSDMetalShader *)arg7 metalContext:(TSDMetalContext *)arg8;
+ (<TSDMTLParticleSystem> *)newParticleSystemWithParticleSize:(struct CGSize { double x1; double x2; })arg1 particleSystemSize:(struct CGSize { double x1; double x2; })arg2 objectSize:(struct CGSize { double x1; double x2; })arg3 slideSize:(struct CGSize { double x1; double x2; })arg4 duration:(double)arg5 direction:(unsigned long long)arg6 randomGenerator:(id <TSDAnimationRandomGenerator>)arg7 shader:(TSDMetalShader *)arg8 metalContext:(TSDMetalContext *)arg9;

- (<TSDMTLDataBuffer> *)dataBuffer;
- (void)drawMetalWithEncoder:(id <MTLRenderCommandEncoder>)arg1;
- (TSDMetalContext *)metalContext;
- (void)setupMetalWithShader:(TSDMetalShader *)arg1;
- (<MTLTexture> *)vertexColorTexture;
- (struct CGSize { double x1; double x2; })vertexTextureSize;

@end
