
@interface PDFTileSurface : NSObject {
    struct CGImage { } * cgImageRef;
    struct __IOSurface { } * ioSurfaceRef;
    int  pageNumber;
    int  tileId;
    int  tileSize;
    int  type;
}

- (void)releaseSurface;

@end
