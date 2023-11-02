
@protocol MicaPlayerDelegate <NSObject>

@optional

- (void)micaPlayerDidChangePlaybackTime:(MicaPlayer *)arg1 isPlaybackAtEnd:(bool)arg2;
- (void)micaPlayerDidStartPlaying:(MicaPlayer *)arg1;
- (void)micaPlayerDidStopPlaying:(MicaPlayer *)arg1;

@end
