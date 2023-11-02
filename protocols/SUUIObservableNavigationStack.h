
@protocol SUUIObservableNavigationStack <NSObject>

@required

- (bool)isShowingNavigationStackRootContent;
- (<SUUINavigationStackObserver> *)navigationStackObserver;
- (void)popToNavigationStackRootContentAnimated:(bool)arg1 withBehavior:(long long)arg2;
- (void)setNavigationStackObserver:(id <SUUINavigationStackObserver>)arg1;
- (void)setShowingNavigationStackRootContent:(bool)arg1;

@end
