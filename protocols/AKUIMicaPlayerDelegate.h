
@protocol AKUIMicaPlayerDelegate <NSObject>

@optional

- (void)AKUIMicaPlayerDidChangePlaybackTime:(AKUIMicaPlayer *)arg1;
- (void)AKUIMicaPlayerDidStartPlaying:(AKUIMicaPlayer *)arg1;
- (void)AKUIMicaPlayerDidStopPlaying:(AKUIMicaPlayer *)arg1;

@end
