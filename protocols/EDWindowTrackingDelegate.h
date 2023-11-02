
@protocol EDWindowTrackingDelegate <NSObject>

@required

- (void)trackedTouchesBegan:(NSSet *)arg1;
- (void)trackedTouchesCancelled:(NSSet *)arg1;
- (void)trackedTouchesEnded:(NSSet *)arg1;
- (void)trackedTouchesMoved:(NSSet *)arg1;

@end
