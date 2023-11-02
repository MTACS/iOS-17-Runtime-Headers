
@interface PTPersonSemanticsNetwork : NSObject {
    PTEffectUtil * _effectUtil;
    PTEspressoGenericExecutor * _executor;
    <MTLTexture> * _inRGBA;
    NSString * _inRGBAName;
    PTMetalContext * _metalContext;
    <MTLTexture> * _outPersonMask;
    <MTLTexture> * _outSkinMask;
    PTUtil * _util;
}

- (void).cxx_destruct;
- (unsigned int)executeNetwork:(id)arg1;
- (id)inRGBA;
- (id)initWithMetalContext:(id)arg1 effectUtil:(id)arg2 util:(id)arg3 sharedResources:(id)arg4;
- (id)outPersonMask;
- (id)outSkinMask;

@end
