
@protocol NCNotificationLongLookViewDelegate <PLExpandedPlatterViewDelegate>

@required

- (bool)notificationLongLookView:(NCNotificationLongLookView *)arg1 tapGestureRecognizerShouldReceiveTouch:(UITouch *)arg2;
- (void)notificationLongLookView:(NCNotificationLongLookView *)arg1 willInteractWithURL:(NSURL *)arg2;

@end
