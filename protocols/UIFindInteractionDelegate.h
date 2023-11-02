
@protocol UIFindInteractionDelegate <NSObject>

@required

- (UIFindSession *)findInteraction:(UIFindInteraction *)arg1 sessionForView:(UIView *)arg2;

@optional

- (void)findInteraction:(UIFindInteraction *)arg1 didBeginFindSession:(UIFindSession *)arg2;
- (void)findInteraction:(UIFindInteraction *)arg1 didEndFindSession:(UIFindSession *)arg2;

@end
