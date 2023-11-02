
@interface NUPageViewControllerScrollView : UIScrollView {
    <NUPageViewControllerScrollViewAccessibilityDelegate> * _accessibilityDelegate;
}

@property (nonatomic) <NUPageViewControllerScrollViewAccessibilityDelegate> *accessibilityDelegate;

- (void).cxx_destruct;
- (id)accessibilityDelegate;
- (bool)accessibilityScroll:(long long)arg1;
- (void)setAccessibilityDelegate:(id)arg1;

@end
