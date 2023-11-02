
@protocol _UIGestureOwning <NSObject>

@required

- (<_UIGestureOwning> *)_actingGestureParent;
- (long long)_depthComparison:(id <_UIGestureOwning>)arg1;
- (UIWindow *)_eventReceivingWindow;
- (bool)_isGestureOwningType:(long long)arg1;
- (NSArray *)_nativeInteractions;
- (void)addGestureRecognizer:(UIGestureRecognizer *)arg1;
- (<_UIGestureOwning> *)gestureParent;
- (NSArray *)gestureRecognizers;
- (unsigned long long)indexOfGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)removeGestureRecognizer:(UIGestureRecognizer *)arg1;

@end
