
@protocol SUUIObservableScrollViewDelegate <NSObject>

@required

- (<SUUIScrollViewDelegateObserver> *)scrollViewDelegateObserver;
- (void)setScrollViewDelegateObserver:(id <SUUIScrollViewDelegateObserver>)arg1;

@end
