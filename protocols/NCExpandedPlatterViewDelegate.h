
@protocol NCExpandedPlatterViewDelegate <PLExpandedPlatterViewDelegate>

@optional

- (void)expandedPlatterView:(NCExpandedPlatterView *)arg1 requestsInteractionWithURL:(NSURL *)arg2;
- (bool)expandedPlatterView:(NCExpandedPlatterView *)arg1 tapGestureRecognizerShouldReceiveTouch:(UITouch *)arg2;

@end
