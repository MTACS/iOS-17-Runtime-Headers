
@protocol SVVideoMetadata <NSObject>

@required

- (double)duration;
- (double)framerate;
- (bool)muted;
- (struct CGSize { double x1; double x2; })naturalSize;
- (unsigned long long)playbackState;
- (double)time;
- (double)timePlayed;
- (NSURL *)videoURL;
- (double)volume;

@end
