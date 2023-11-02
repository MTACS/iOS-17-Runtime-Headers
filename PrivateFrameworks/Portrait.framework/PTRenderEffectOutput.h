
@interface PTRenderEffectOutput : NSObject {
    <MTLTexture> * _effectDepth;
    <MTLTexture> * _effectRGBA;
}

@property (readonly) <MTLTexture> *effectDepth;
@property (readonly) <MTLTexture> *effectRGBA;

- (void).cxx_destruct;
- (id)effectDepth;
- (id)effectRGBA;
- (id)initWithEffectRGBA:(id)arg1 effectDepth:(id)arg2;

@end
