
@protocol UIFocusItemScrollableContainer <UIFocusItemContainer>

@required

- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })visibleSize;

@end
