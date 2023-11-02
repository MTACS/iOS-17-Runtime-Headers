
@protocol PXStoryResourcesPreloadingCoordinatable

@required

- (bool)isCompleted;
- (unsigned long long)isCompletedChangeDescriptor;
- (bool)isPreloadingEnabled;
- (void)setIsPreloadingEnabled:(bool)arg1;

@end
