
@protocol SKUIObservableNavigationStack <NSObject>

@required

- (bool)isShowingNavigationStackRootContent;
- (<SKUINavigationStackObserver> *)navigationStackObserver;
- (void)popToNavigationStackRootContentAnimated:(bool)arg1 withBehavior:(long long)arg2;
- (void)setNavigationStackObserver:(id <SKUINavigationStackObserver>)arg1;
- (void)setShowingNavigationStackRootContent:(bool)arg1;

@end
