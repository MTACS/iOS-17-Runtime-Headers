
@interface PXGUniform : NSObject {
    const void * _bytes;
    long long  _bytesLength;
    <MTLTexture> * _cachedTexture;
    void _float2Value;
    void _float3Value;
    void _float4Value;
    float  _floatValue;
    struct CGImage { } * _image;
    NSString * _name;
    id /* block */  _textureProvider;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long bindType;
@property (nonatomic, readonly) const void*bytes;
@property (nonatomic, readonly) long long bytesLength;
@property (nonatomic, retain) <MTLTexture> *cachedTexture;
@property (nonatomic, readonly, copy) NSString *declaration;
@property (nonatomic, readonly) void encodableValue;
@property (nonatomic) void float2Value;
@property (nonatomic) void float3Value;
@property (nonatomic) void float4Value;
@property (nonatomic) float floatValue;
@property (nonatomic) struct CGImage { }*image;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) id /* block */ textureProvider;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (unsigned long long)bindType;
- (id)bindableTextureForContext:(id)arg1;
- (const void*)bytes;
- (long long)bytesLength;
- (id)cachedTexture;
- (void)dealloc;
- (id)declaration;
- (id)description;
- (void)encodableValue;
- (void)float2Value;
- (void)float3Value;
- (void)float4Value;
- (float)floatValue;
- (struct CGImage { }*)image;
- (id)init;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEquivalentToUniform:(id)arg1;
- (id)name;
- (id)parameterDeclarationWithBindingIndex:(long long)arg1;
- (void)setCachedTexture:(id)arg1;
- (void)setFloat2Value;
- (void)setFloat3Value;
- (void)setFloat4Value;
- (void)setFloatValue:(float)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setTextureProvider:(id /* block */)arg1;
- (void)setType:(unsigned long long)arg1;
- (id /* block */)textureProvider;
- (unsigned long long)type;

@end
