
@protocol NUSurfaceImage <NUBufferImage, NUTextureImage>

@required

- (void)readSurfaceRegion:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 8: NURegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <NUSurfaceTile> *, bool*, void*

@end
