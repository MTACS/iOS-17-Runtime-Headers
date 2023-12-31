
@protocol PHLivePhotoViewDelegatePrivate <NSObject>

@optional

- (void)livePhotoViewDidBeginHinting:(PHLivePhotoView *)arg1;
- (void)livePhotoViewDidBeginScrubbing:(PHLivePhotoView *)arg1;
- (void)livePhotoViewDidEndPlayingVitality:(PHLivePhotoView *)arg1;
- (void)livePhotoViewDidEndScrubbing:(PHLivePhotoView *)arg1;

@end
