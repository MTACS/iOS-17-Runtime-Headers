
@protocol AVPlayerViewControllerContentViewDelegate_Gen1 <NSObject>

@required

- (struct CGSize { double x1; double x2; })playerViewControllerContentViewContentDimensions:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidChangeSize:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidChangeVideoGravity:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidLayoutSubviews:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewDidUpdateScrollingStatus:(AVPlayerViewControllerContentView *)arg1;
- (bool)playerViewControllerContentViewHasActiveTransition:(AVPlayerViewControllerContentView *)arg1;
- (bool)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(AVPlayerViewControllerContentView *)arg1;
- (NSNumber *)playerViewControllerContentViewOverrideLayoutClass:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentViewPlaybackContentContainerViewChanged:(AVPlayerViewControllerContentView *)arg1;
- (bool)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(AVPlayerViewControllerContentView *)arg1;

@end
