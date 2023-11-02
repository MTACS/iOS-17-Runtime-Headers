
@interface FigPhotoTiledLayer : CALayer {
    CMPhotoTiledLayer * _tiledLayer;
}

@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;

- (void)dealloc;
- (void)flushCache;
- (long long)imageOrientation;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithContainerData:(id)arg1 containerImageIndex:(long long)arg2 backgroundImageSize:(struct CGSize { double x1; double x2; })arg3 screenSize:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithContainerData:(id)arg1 containerImageIndex:(long long)arg2 placeholderImage:(struct CGImage { }*)arg3 screenSize:(struct CGSize { double x1; double x2; })arg4;
- (id)initWithContainerURL:(id)arg1 containerImageIndex:(long long)arg2 backgroundImageSize:(struct CGSize { double x1; double x2; })arg3 screenSize:(struct CGSize { double x1; double x2; })arg4;
- (void)setVisibleRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)sizeToFit;

@end
