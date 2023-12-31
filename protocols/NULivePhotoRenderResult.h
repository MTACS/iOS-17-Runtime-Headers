
@protocol NULivePhotoRenderResult <NURenderResult>

@required

- (struct CGImage { }*)photo;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoTime;
- (AVAsset *)video;
- (AVVideoComposition *)videoComposition;
- (NUImageGeometry *)videoGeometry;

@end
