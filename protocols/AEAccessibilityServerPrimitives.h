
@protocol AEAccessibilityServerPrimitives

@required

- (bool)isRestrictedForAAC;
- (<AEObservation> *)observeGuidedAccessActiveStateChangeOnQueue:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 6: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
