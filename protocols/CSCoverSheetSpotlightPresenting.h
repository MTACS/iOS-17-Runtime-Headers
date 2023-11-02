
@protocol CSCoverSheetSpotlightPresenting <SBUILegibility>

@required

- (void)dismissSpotlightAnimated:(bool)arg1;
- (bool)isSpotlightPresented;
- (void)presentSpotlightAnimated:(bool)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
