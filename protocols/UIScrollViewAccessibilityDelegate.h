
@protocol UIScrollViewAccessibilityDelegate <UIScrollViewDelegate>

@optional

- (NSAttributedString *)accessibilityAttributedScrollStatusForScrollView:(UIScrollView *)arg1;
- (NSString *)accessibilityScrollStatusForScrollView:(UIScrollView *)arg1;

@end
