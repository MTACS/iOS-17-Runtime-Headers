
@protocol VKCTextSelectionLongPressHandlerDelegate <NSObject>

@required

- (bool)longPressHandler:(VKCTextSelectionLongPressDelegateHandler *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldRecieveTouch:(UITouch *)arg3;
- (bool)longPressHandler:(VKCTextSelectionLongPressDelegateHandler *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg3;

@end
