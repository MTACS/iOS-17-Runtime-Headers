
@protocol FigCaptureSessionObserver <NSObject>

@required

- (void)captureSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(NSData *)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)captureSessionDidStart:(FigCaptureSessionProxy *)arg1;
- (void)captureSessionDidStop:(long long)arg1;
- (void)captureSessionWillStart;
- (int)photoThumbnailMaxDimension;
- (float)photoThumbnailQuality;
- (bool)photoThumbnailQualitySpecified;

@end
