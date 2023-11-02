
@protocol AVPictureInPictureSampleBufferPlaybackDelegate <NSObject>

@required

- (void)pictureInPictureController:(AVPictureInPictureController *)arg1 didTransitionToRenderSize:(struct { int x1; int x2; })arg2;
- (void)pictureInPictureController:(AVPictureInPictureController *)arg1 setPlaying:(bool)arg2;
- (void)pictureInPictureController:(void *)arg1 skipByInterval:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: AVPictureInPictureController *, struct { long long x1; int x2; unsigned int x3; long long x4; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)pictureInPictureControllerIsPlaybackPaused:(AVPictureInPictureController *)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })pictureInPictureControllerTimeRangeForPlayback:(AVPictureInPictureController *)arg1;

@optional

- (bool)pictureInPictureControllerShouldProhibitBackgroundAudioPlayback:(AVPictureInPictureController *)arg1;

@end
