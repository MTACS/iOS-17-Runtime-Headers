
@protocol UIFenceProviding <NSObject>

@required

- (bool)isTrackingAnySystemAnimationFence;
- (BKSAnimationFenceHandle *)requestSystemAnimationFence;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)trackSystemAnimationFence:(BKSAnimationFenceHandle *)arg1;

@end
