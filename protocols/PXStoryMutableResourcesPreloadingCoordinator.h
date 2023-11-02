
@protocol PXStoryMutableResourcesPreloadingCoordinator

@required

- (void)addPreloadingController:(PXObservable<PXStoryResourcesPreloadingCoordinatable> *)arg1 withPriority:(long long)arg2;
- (void)removePreloadingController:(PXObservable<PXStoryResourcesPreloadingCoordinatable> *)arg1;

@end
