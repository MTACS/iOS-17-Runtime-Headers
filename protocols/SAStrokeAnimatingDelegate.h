
@protocol SAStrokeAnimatingDelegate <NSObject>

@optional

- (void)animationDidEnd;
- (void)animationDidReplay;
- (void)animationDidStart;

@end
