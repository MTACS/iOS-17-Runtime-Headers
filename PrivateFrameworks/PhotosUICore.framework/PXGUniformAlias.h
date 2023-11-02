
@interface PXGUniformAlias : PXGUniform {
    long long  _index;
    PXGUniform * _original;
}

@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) PXGUniform *original;

- (void).cxx_destruct;
- (const void*)bytes;
- (long long)bytesLength;
- (id)cachedTexture;
- (id)description;
- (void)float2Value;
- (void)float3Value;
- (void)float4Value;
- (float)floatValue;
- (struct CGImage { }*)image;
- (long long)index;
- (id)initWithIndex:(long long)arg1 aliasing:(id)arg2;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEquivalentToUniform:(id)arg1;
- (id)name;
- (id)original;
- (void)setCachedTexture:(id)arg1;
- (id /* block */)textureProvider;

@end
