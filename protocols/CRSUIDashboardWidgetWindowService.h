
@protocol CRSUIDashboardWidgetWindowService <NSObject>

@required

- (void)clientSetContentReady;
- (void)clientSetFocusableItems:(NSArray *)arg1;
- (void)clientSetWantsLargeSize:(bool)arg1 fenceHandle:(BKSAnimationFenceHandle *)arg2 animationSettings:(BSAnimationSettings *)arg3;
- (void)updateContextId:(unsigned int)arg1;

@end
