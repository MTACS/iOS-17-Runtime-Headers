
@interface PXGTextureDataColorLookupCube : PXGColorLookupCube {
    NSData * _data;
    <MTLDevice> * _device;
    unsigned long long  _pixelFormat;
    <MTLTexture> * _texture;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long pixelFormat;

- (void).cxx_destruct;
- (void)center;
- (id)createTextureWithContext:(id)arg1;
- (id)data;
- (id)init;
- (id)initWithData:(id)arg1 edgeSize:(long long)arg2 pixelFormat:(unsigned long long)arg3;
- (unsigned long long)pixelFormat;
- (bool)shouldCache;
- (id)textureData;

@end
