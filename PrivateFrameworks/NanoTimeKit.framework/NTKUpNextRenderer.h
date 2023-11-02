
@interface NTKUpNextRenderer : NSObject {
    struct __IOSurface { } * _ioSurface;
    CARenderer * _renderer;
    <MTLTexture> * _texture;
}

- (void).cxx_destruct;
- (void)dealloc;
- (struct __IOSurface { }*)newSurfaceWithWidth:(double)arg1 height:(double)arg2;
- (id)renderView:(id)arg1;

@end
