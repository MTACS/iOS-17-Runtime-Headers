
@interface CSScrollView : SBFPagedScrollView

@property (nonatomic) <CSScrollViewDelegate> *delegate;

- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;

@end
