
@interface ARUISpritesRenderer : NSObject {
    ARUISpriteUniformsCache * _cache;
    unsigned long long  _numIndicies;
    <MTLBuffer> * _spriteIndexBuffer;
    ARUISpriteRenderState * _spriteRenderState;
    <MTLBuffer> * _spriteVertexBuffer;
}

+ (void)clearCaches;

- (void).cxx_destruct;
- (void)_sharedInitWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;
- (void)renderSpriteSheet:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3;

@end
