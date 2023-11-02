
@protocol SAUIElementViewProviding <SAElementViewProviding, SAUIElementLayoutAxisObserving>

@required

- (UIView *)leadingView;
- (UIView *)minimalView;
- (UIView *)trailingView;

@optional

- (UIView *)detachedMinimalView;

@end
