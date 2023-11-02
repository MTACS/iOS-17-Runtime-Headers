
@protocol WKKeyboardScrollableInternal <NSObject>

@required

- (struct CGPoint { double x1; double x2; })boundedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (void)didFinishScrolling;
- (double)distanceForIncrement:(unsigned char)arg1 inDirection:(unsigned char)arg2;
- (struct CGSize { double x1; double x2; })interactiveScrollVelocity;
- (bool)isKeyboardScrollable;
- (struct RectEdges<bool> { struct array<bool, 4UL> { bool x_1_1_1[4]; } x1; })rubberbandableDirections;
- (void)scrollToContentOffset:(struct FloatPoint { float x1; float x2; })arg1 animated:(bool)arg2;
- (void)scrollWithScrollToExtentAnimationTo:(struct CGPoint { double x1; double x2; })arg1;
- (struct RectEdges<bool> { struct array<bool, 4UL> { bool x_1_1_1[4]; } x1; })scrollableDirectionsFromOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
