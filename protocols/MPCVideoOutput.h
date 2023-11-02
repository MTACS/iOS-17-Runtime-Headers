
@protocol MPCVideoOutput <NSObject>

@required

- (bool)allowsPictureInPicturePlayback;
- (void)enterFullScreenWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)exitFullScreenWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isPictureInPictureActive;
- (bool)isReadyForDisplay;
- (UIViewController *)playerViewController;
- (struct CGSize { double x1; double x2; })presentationSize;
- (void)setAllowsPictureInPicturePlayback:(bool)arg1;
- (void)setShowsPlaybackControls:(bool)arg1;
- (void)setVideoGravity:(NSString *)arg1;
- (void)setVideoOutputDelegate:(id <MPCVideoOutputDelegate>)arg1;
- (void)showFullScreenPresentationFromView:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)showsPlaybackControls;
- (void)stopPictureInPicture;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoBounds;
- (NSString *)videoGravity;
- (<MPCVideoOutputDelegate> *)videoOutputDelegate;

@end
