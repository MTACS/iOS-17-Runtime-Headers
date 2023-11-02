
@interface PTTextureYUV : PTTexture {
    <MTLTexture> * _texChroma;
    <MTLTexture> * _texLuma;
}

@property (retain) <MTLTexture> *texChroma;
@property (retain) <MTLTexture> *texLuma;

- (void).cxx_destruct;
- (unsigned long long)height;
- (void)setTexChroma:(id)arg1;
- (void)setTexLuma:(id)arg1;
- (id)texChroma;
- (id)texLuma;
- (unsigned long long)width;

@end
