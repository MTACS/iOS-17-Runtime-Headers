
@interface PNGRenderer : CGRenderer {
    struct CGColor { } * background;
    struct CGColorSpace { } * colorSpace;
    struct __CFURL { } * fullURL;
}

- (struct CGImage { }*)cgimage;
- (void)dealloc;
- (void)flushRender;
- (id)init;
- (bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setFileURL:(id)arg1;

@end
