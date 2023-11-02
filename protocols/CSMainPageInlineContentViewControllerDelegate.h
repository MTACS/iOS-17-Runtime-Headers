
@protocol CSMainPageInlineContentViewControllerDelegate

@required

- (void)didReceiveBackgroundScroll;
- (void)didReceiveBackgroundTouch;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inlineContentFrame;
- (bool)shouldDismissInlineContentForNowPlaying;
- (bool)shouldDismissInlineContentForUnlock;
- (bool)shouldInlineContentReceiveBackgroundTouches;

@end
