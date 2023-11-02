
@protocol PXTouchingUIGestureRecognizerDelegate <NSObject>

@optional

- (void)touchingUIGestureRecognizerDidBeginTouching:(PXTouchingUIGestureRecognizer *)arg1;
- (void)touchingUIGestureRecognizerDidEndTouching:(PXTouchingUIGestureRecognizer *)arg1;
- (void)touchingUIGestureRecognizerWillBeginTouching:(PXTouchingUIGestureRecognizer *)arg1;
- (void)touchingUIGestureRecognizerWillEndTouching:(PXTouchingUIGestureRecognizer *)arg1;

@end
