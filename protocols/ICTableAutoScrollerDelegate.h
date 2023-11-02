
@protocol ICTableAutoScrollerDelegate <NSObject>

@optional

- (void)tableAutoScroller:(ICTableAutoScroller *)arg1 scrollOffsetDelta:(struct CGPoint { double x1; double x2; })arg2;
- (void)tableAutoScrollerWillStartScrolling:(ICTableAutoScroller *)arg1;
- (void)tableAutoScrollerWillStopScrolling:(ICTableAutoScroller *)arg1;

@end
