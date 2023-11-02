
@interface BSCGImageFromIOSurfaceBuilder : NSObject {
    struct CGImage { } * _image;
    bool  _isDirty;
    bool  _isOpaque;
    IOSurface * _surface;
}

@property (getter=isOpaque, nonatomic, readonly) bool opaque;

- (void).cxx_destruct;
- (struct CGImage { }*)buildCGImage;
- (void)dealloc;
- (bool)isOpaque;
- (id)setOpaque:(bool)arg1;

@end
