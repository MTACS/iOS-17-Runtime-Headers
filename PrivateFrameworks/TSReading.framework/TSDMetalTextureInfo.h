
@interface TSDMetalTextureInfo : NSObject {
    bool  _containsMipmaps;
    unsigned int  _height;
    <MTLTexture> * _name;
    unsigned int  _width;
}

@property (nonatomic, readonly) bool containsMipmaps;
@property (nonatomic, readonly) unsigned int height;
@property (nonatomic, readonly) <MTLTexture> *name;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned int width;

+ (id)textureInfoWithCGImage:(struct CGImage { }*)arg1 forDevice:(id)arg2;
+ (id)textureInfoWithName:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 containsMipmaps:(bool)arg4;

- (void).cxx_destruct;
- (bool)containsMipmaps;
- (id)description;
- (unsigned int)height;
- (id)initWithName:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 containsMipmaps:(bool)arg4;
- (id)name;
- (struct CGSize { double x1; double x2; })size;
- (void)teardown;
- (unsigned int)width;

@end
