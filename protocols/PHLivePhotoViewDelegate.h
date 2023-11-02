
@protocol PHLivePhotoViewDelegate <NSObject>

@optional

- (bool)livePhotoView:(PHLivePhotoView *)arg1 canBeginPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(PHLivePhotoView *)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (double)livePhotoView:(PHLivePhotoView *)arg1 extraMinimumTouchDurationForTouch:(UITouch *)arg2 withStyle:(long long)arg3;
- (void)livePhotoView:(PHLivePhotoView *)arg1 willBeginPlaybackWithStyle:(long long)arg2;

@end
