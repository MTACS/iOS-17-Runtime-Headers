
@protocol PXVideoSessionDelegate <NSObject>

@required

- (void)videoSessionAudioSessionOutputVolumeDidChange:(PXVideoSession *)arg1 fromVolume:(float)arg2 toVolume:(float)arg3;
- (void)videoSessionDidPlayToEnd:(PXVideoSession *)arg1;

@end
