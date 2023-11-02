
@interface PLTVOutWindow : UIWindow {
    UIView * _backgroundView;
    UIView * _videoView;
}

- (bool)_setupTargetScreen:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)setVideoView:(id)arg1;
- (id)videoView;

@end
