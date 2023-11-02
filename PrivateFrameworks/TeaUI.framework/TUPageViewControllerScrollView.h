
@interface TUPageViewControllerScrollView : UIScrollView {
    <TUPageViewControllerScrollViewAccessibilityDelegate> * _accessibilityDelegate;
}

@property (nonatomic) <TUPageViewControllerScrollViewAccessibilityDelegate> *accessibilityDelegate;

- (void).cxx_destruct;
- (id)accessibilityDelegate;
- (bool)accessibilityScroll:(long long)arg1;
- (void)setAccessibilityDelegate:(id)arg1;

@end
