
@interface PKTextureLoadDescriptor : NSObject {
    struct CGColorSpace { } * _colorSpace;
    <MTLDevice> * _device;
    bool  _premultiplyAlpha;
    int  _renderingIntent;
    unsigned long long  _storageMode;
}

@property (nonatomic, readonly) struct CGColorSpace { }*colorSpace;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic) bool premultiplyAlpha;
@property (nonatomic, readonly) int renderingIntent;

- (void).cxx_destruct;
- (struct CGColorSpace { }*)colorSpace;
- (id)createLoaderForCGImage:(struct CGImage { }*)arg1;
- (void)dealloc;
- (id)device;
- (id)init;
- (id)initForDevice:(id)arg1;
- (bool)premultiplyAlpha;
- (int)renderingIntent;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1 renderingIntent:(int)arg2;
- (void)setPremultiplyAlpha:(bool)arg1;

@end
