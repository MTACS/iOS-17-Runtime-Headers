
@protocol PXStoryMutableResourcesPreloader

@required

- (void)cancelProcessingAllRequests;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentPlaybackTime;
- (long long)currentSegmentIdentifier;
- (void)setCurrentPlaybackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCurrentSegmentIdentifier:(long long)arg1;
- (void)startProcessingRequest:(PXStoryResourcesPreloadingRequest *)arg1;

@end
