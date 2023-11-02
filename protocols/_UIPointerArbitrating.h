
@protocol _UIPointerArbitrating <NSObject>

@required

- (void)applyStyle:(void *)arg1 forRegion:(void *)arg2 effectSourceHandler:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 16: UIPointerStyle *, UIPointerRegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIPortalView *, _UIPortalView *, _UIPointerContentEffectAnimationBuilder *, _UILumaTrackingBackdropView *, void*, id /* block */, void*, void, id /* block */, void*
- (void)beginScrollingWithRegion:(UIPointerRegion *)arg1;
- (void)endScrollingWithRegion:(UIPointerRegion *)arg1;
- (void)exitRegion:(void *)arg1 removeStyle:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIPointerRegion *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<_UIAssertion> *)obtainPointerUpdatePauseAssertion;
- (long long)pointerState;

@end
