
@protocol ISLivePhotoUIViewDelegate <NSObject>

@required

- (bool)livePhotoViewCanBeginInteractivePlayback:(ISLivePhotoUIView *)arg1;
- (double)livePhotoViewExtraMinimumTouchDuration:(ISLivePhotoUIView *)arg1 touch:(UITouch *)arg2;

@end
