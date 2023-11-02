
@protocol UIPointerInteractionDelegate <NSObject>

@optional

- (UIPointerRegion *)pointerInteraction:(UIPointerInteraction *)arg1 regionForRequest:(UIPointerRegionRequest *)arg2 defaultRegion:(UIPointerRegion *)arg3;
- (UIPointerStyle *)pointerInteraction:(UIPointerInteraction *)arg1 styleForRegion:(UIPointerRegion *)arg2;
- (void)pointerInteraction:(UIPointerInteraction *)arg1 willEnterRegion:(UIPointerRegion *)arg2 animator:(id <UIPointerInteractionAnimating>)arg3;
- (void)pointerInteraction:(UIPointerInteraction *)arg1 willExitRegion:(UIPointerRegion *)arg2 animator:(id <UIPointerInteractionAnimating>)arg3;

@end
