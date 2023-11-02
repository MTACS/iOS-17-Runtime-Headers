
@interface ARUISpritesParticleRenderer : NSObject {
    unsigned long long  _bufferSize;
    unsigned long long  _numIndicies;
    <MTLBuffer> * _spriteIndexBuffer;
    ARUISpriteParticleRenderState * _spriteRenderState;
    <MTLBuffer> * _spriteVertexBuffer;
    <MTLBuffer> * _uniformsBuffer;
    <MTLBuffer> * _vertexAttributesBuffer;
}

- (void).cxx_destruct;
- (void)_sharedInitWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1 library:(id)arg2 bufferSize:(unsigned long long)arg3;
- (id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 bufferSize:(unsigned long long)arg3;
- (void)renderSpriteSheet:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3;

@end
