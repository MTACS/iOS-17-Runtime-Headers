
@interface SKUniformInfo : NSObject {
    unsigned long long  seed;
    unsigned long long  textureTarget;
    SKUniform * uniform;
}

@property unsigned long long seed;
@property unsigned long long textureTarget;
@property (retain) SKUniform *uniform;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)seed;
- (void)setSeed:(unsigned long long)arg1;
- (void)setTextureTarget:(unsigned long long)arg1;
- (void)setUniform:(id)arg1;
- (unsigned long long)textureTarget;
- (id)uniform;

@end
