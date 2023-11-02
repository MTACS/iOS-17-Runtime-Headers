
@protocol AXDragSessionDelegate <NSObject>

@required

- (void)dragSessionChanged:(AXDragSession *)arg1 toStatus:(_DUIAccessibilityDragStatus *)arg2;
- (void)dragSessionEnded:(AXDragSession *)arg1 withOperation:(unsigned long long)arg2;
- (void)dragSessionWasTerminated:(AXDragSession *)arg1;

@optional

- (void)dragSession:(AXDragSession *)arg1 movedToPoint:(struct CGPoint { double x1; double x2; })arg2 byRequestor:(id)arg3;

@end
