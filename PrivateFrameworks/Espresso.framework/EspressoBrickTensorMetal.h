
@interface EspressoBrickTensorMetal : EspressoBrickTensor {
    <MTLTexture> * _texture;
}

@property (retain) <MTLTexture> *texture;

- (void).cxx_destruct;
- (void)setTexture:(id)arg1;
- (id)texture;

@end
