
@protocol _UIMenuElementStateObserver <NSObject>

@required

- (void)_elementStateDidChange:(UIMenuElement<_UIMenuStateObserverableLeaf> *)arg1;
- (void)_elementWillPerformAction:(UIMenuElement<_UIMenuStateObserverableLeaf> *)arg1;

@end
