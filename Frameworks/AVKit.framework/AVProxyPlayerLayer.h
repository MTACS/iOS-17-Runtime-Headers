
@interface AVProxyPlayerLayer : AVPlayerLayer {
    bool  _avkit_isFullScreen;
    UIWindow * _avkit_originalWindow;
}

@property (setter=avkit_setIsFullScreen:, nonatomic) bool avkit_isFullScreen;
@property (setter=avkit_setOriginalWindow:, nonatomic, retain) UIWindow *avkit_originalWindow;

- (void).cxx_destruct;
- (bool)avkit_isFullScreen;
- (id)avkit_originalWindow;
- (void)avkit_setIsFullScreen:(bool)arg1;
- (void)avkit_setOriginalWindow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avkit_videoRectInWindow;
- (id)avkit_window;

@end
