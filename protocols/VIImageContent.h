
@protocol VIImageContent <NSObject>

@required

- (struct CGSize { double x1; double x2; })imageSize;
- (bool)isLoaded;
- (unsigned int)orientation;
- (struct __CVBuffer { }*)pixelBuffer;

@end
