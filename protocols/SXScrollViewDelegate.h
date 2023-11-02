
@protocol SXScrollViewDelegate <NSObject>

@required

- (bool)shouldPreventDraggingForScrollView:(SXScrollView *)arg1;

@optional

- (bool)accessibilityShouldScrollForScrollView:(SXScrollView *)arg1;
- (bool)accessibilityShouldScrollForScrollView:(SXScrollView *)arg1 defaultValue:(bool)arg2;
- (bool)scrollView:(SXScrollView *)arg1 shouldOccludeAccessibilityElement:(id)arg2;

@end
