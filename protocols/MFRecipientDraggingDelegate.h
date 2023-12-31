
@protocol MFRecipientDraggingDelegate <NSObject>

@required

- (void)dragEnteredAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dragExited;
- (void)dragMovedToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dropItems:(NSArray *)arg1;

@end
