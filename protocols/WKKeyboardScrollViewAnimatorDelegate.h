
@protocol WKKeyboardScrollViewAnimatorDelegate <NSObject>

@optional

- (bool)isScrollableForKeyboardScrollViewAnimator:(WKKeyboardScrollViewAnimator *)arg1;
- (double)keyboardScrollViewAnimator:(WKKeyboardScrollViewAnimator *)arg1 distanceForIncrement:(unsigned char)arg2 inDirection:(unsigned char)arg3;
- (void)keyboardScrollViewAnimatorDidFinishScrolling:(WKKeyboardScrollViewAnimator *)arg1;
- (void)keyboardScrollViewAnimatorWillScroll:(WKKeyboardScrollViewAnimator *)arg1;

@end
