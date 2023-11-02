
@protocol CSScrollViewDelegate <BSUIScrollViewDelegate>

@required

- (bool)coverSheetScrollView:(CSScrollView *)arg1 gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg2;
- (bool)coverSheetScrollView:(CSScrollView *)arg1 shouldSetContentOffset:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;

@end
