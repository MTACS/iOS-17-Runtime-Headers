
@protocol _UIHoverEventRespondable <NSObject>

@required

- (void)_hoverCancelled:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_hoverEntered:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_hoverExited:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)_hoverMoved:(NSSet *)arg1 withEvent:(UIEvent *)arg2;

@end
