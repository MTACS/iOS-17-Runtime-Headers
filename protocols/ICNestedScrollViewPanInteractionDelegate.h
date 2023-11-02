
@protocol ICNestedScrollViewPanInteractionDelegate <NSObject>

@required

- (bool)nestedScrollViewPanInteraction:(ICNestedScrollViewPanInteraction *)arg1 shouldAllowPanningInNestedScrollView:(UIScrollView *)arg2;
- (bool)nestedScrollViewPanInteraction:(ICNestedScrollViewPanInteraction *)arg1 shouldReceiveTouch:(UIEvent *)arg2;

@end
