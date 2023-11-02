
@protocol SBWindowLayoutStrategy <NSObject>

@required

- (void)addObserver:(id <SBWindowLayoutStrategyObserving>)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithInterfaceOrientation:(long long)arg1 windowScene:(UIWindowScene *)arg2;
- (void)removeObserver:(id <SBWindowLayoutStrategyObserving>)arg1;
- (bool)shouldClipForWindow:(UIWindow *)arg1;

@end
