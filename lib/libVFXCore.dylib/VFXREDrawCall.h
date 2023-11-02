
@interface VFXREDrawCall : NSObject {
    void _drawsForBlur;
    void _isDepthOnly;
    void _writesColor;
    void _writesSeparateDepth;
    void aabb;
    void drawCall;
    void handler;
    void reProvidedBuffers;
    void reProvidedTextures;
    void renderPassName;
}

@property (nonatomic, readonly) id /* block */ customHandler;
@property (nonatomic, readonly) bool drawsForBlur;
@property (nonatomic, readonly) bool hasCustomHandler;
@property (nonatomic, readonly) bool isDepthOnly;
@property (nonatomic, copy) NSString *renderPassName;
@property (nonatomic, readonly) bool writesColor;
@property (nonatomic, readonly) bool writesSeparateDepth;

- (void).cxx_destruct;
- (void)boundingBoxMax;
- (void)boundingBoxMin;
- (id /* block */)customHandler;
- (bool)drawsForBlur;
- (void)enumerateBuffers:(id /* block */)arg1;
- (void)enumerateTextures:(id /* block */)arg1;
- (bool)hasCustomHandler;
- (bool)hasLightingEnabled;
- (id)indexBuffer;
- (long long)indexBufferOffset;
- (long long)indexBufferSize;
- (long long)indexCount;
- (unsigned char)indexType;
- (id)init;
- (long long)instanceCount;
- (bool)isDepthOnly;
- (unsigned long long)materialIdentifier;
- (id)meshIdentifier;
- (unsigned long long)primitiveType;
- (id)renderPassName;
- (void)setRenderPassName:(id)arg1;
- (long long)vertexCount;
- (unsigned long long)winding;
- (void)withDefaultIBLConstantBuffer:(void*)arg1 :(id /* block */)arg2;
- (void)withDefaultLightConstantBuffer:(void*)arg1 :(id /* block */)arg2;
- (bool)writesColor;
- (bool)writesSeparateDepth;

@end
