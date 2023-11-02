
@protocol NTKVideoPlayerViewFaceDelegate

@required

- (void)customizeFaceViewForListing:(NTKVideoPlayerListing *)arg1 changeEvent:(unsigned long long)arg2 animated:(bool)arg3;
- (void)videoDidBeginPlayingQueuedVideo;
- (void)videoDidFinishPlayingToEnd;

@end
