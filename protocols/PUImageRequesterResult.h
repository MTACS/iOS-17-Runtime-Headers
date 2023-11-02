
@protocol PUImageRequesterResult

@required

- (<PUDisplayAsset> *)asset;
- (NSString *)debugDescription;
- (struct CGImage { }*)gainMapImage;
- (float)gainMapValue;
- (UIImage *)image;
- (bool)imageIsFullQuality;
- (struct CGSize { double x1; double x2; })targetSize;
- (double)timeIntervalSinceRequest;

@end
