
@protocol NUVideoRenderResult <NURenderResult>

@required

- (AVAudioMix *)audioMix;
- (AVComposition *)avAsset;
- (AVVideoComposition *)avVideoComposition;
- (NUImageGeometry *)geometry;
- (AVAsset *)video;
- (AVVideoComposition *)videoComposition;

@end
