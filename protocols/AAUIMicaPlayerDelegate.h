
@protocol AAUIMicaPlayerDelegate <NSObject>

@optional

- (void)AAUIMicaPlayerDidChangePlaybackTime:(AAUIMicaPlayer *)arg1;
- (void)AAUIMicaPlayerDidStartPlaying:(AAUIMicaPlayer *)arg1;
- (void)AAUIMicaPlayerDidStopPlaying:(AAUIMicaPlayer *)arg1;

@end
