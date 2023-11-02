
@interface PTTextureRGBA : PTTexture {
    <MTLTexture> * _texRGBA;
}

@property (retain) <MTLTexture> *texRGBA;

- (void).cxx_destruct;
- (unsigned long long)height;
- (void)setTexRGBA:(id)arg1;
- (id)texRGBA;
- (unsigned long long)width;

@end
