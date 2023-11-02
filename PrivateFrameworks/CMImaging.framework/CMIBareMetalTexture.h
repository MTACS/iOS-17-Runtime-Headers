
@interface CMIBareMetalTexture : NSObject {
    unsigned int  _dataOffset;
    unsigned int  _osType;
    unsigned int  _stride;
    <MTLTexture> * _texture;
    MTLTextureDescriptor * _textureDescriptor;
}

@property (nonatomic, readonly) <MTLTexture> *texture;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 device:(id)arg2;
- (id)initWithFile:(id)arg1 device:(id)arg2;
- (id)initWithTexture:(id)arg1;
- (bool)saveToFile:(id)arg1;
- (bool)saveToFile:(id)arg1 withBMTLversion:(unsigned int)arg2;
- (id)texture;
- (int)updateTextureContent:(id)arg1;
- (int)updateTextureDescriptor:(id)arg1;
- (bool)updateTextureWithData:(id)arg1;
- (bool)updateTextureWithFile:(id)arg1;

@end
