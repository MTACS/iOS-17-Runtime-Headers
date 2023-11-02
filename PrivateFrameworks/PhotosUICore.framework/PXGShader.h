
@interface PXGShader : NSObject {
    NSDictionary * _components;
    struct { 
        unsigned int fragmentTextureCoordinateOpcodes; 
        unsigned int fragmentColorOpcodes; 
        unsigned int fragmentAlphaOpcodes; 
    }  _opcodes;
    unsigned long long  _sampler;
    PXGShaderSource * _source;
    NSDictionary * _sourceByShaderFunction;
    NSArray * _texture2DUniforms;
    NSArray * _texture3DUniforms;
    NSArray * _uniforms;
    NSArray * _valueUniforms;
    NSMutableData * _valueUniformsData;
}

@property (nonatomic, readonly, copy) NSDictionary *components;
@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; } opcodes;
@property (nonatomic) unsigned long long sampler;
@property (nonatomic, readonly, copy) PXGShaderSource *source;
@property (nonatomic, readonly, copy) NSArray *uniforms;

- (void).cxx_destruct;
- (id)components;
- (id)description;
- (void)encodeBindableArgumentsWithEncoder:(id)arg1;
- (id)init;
- (id)initWithOpcodes:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1 source:(id)arg2 uniforms:(id)arg3 components:(id)arg4;
- (bool)isEquivalentToShader:(id)arg1;
- (bool)isOpaque;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; })opcodes;
- (id)parameterBindingDeclarations;
- (unsigned long long)sampler;
- (void)setSampler:(unsigned long long)arg1;
- (id)source;
- (id)uniforms;

@end
