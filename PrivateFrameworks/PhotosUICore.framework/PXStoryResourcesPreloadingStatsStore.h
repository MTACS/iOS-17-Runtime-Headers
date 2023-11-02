
@interface PXStoryResourcesPreloadingStatsStore : NSObject {
    struct { 
        long long preloadableClipsCount; 
        long long preloadedClipsCount; 
        double accumulatedClipsLoadingTime; 
        long long accumulatedClipsLoadedCount; 
    }  _imageClipsStats;
    struct { 
        long long preloadableClipsCount; 
        long long preloadedClipsCount; 
        double accumulatedClipsLoadingTime; 
        long long accumulatedClipsLoadedCount; 
    }  _livePhotoClipsStats;
    struct { 
        long long preloadableClipsCount; 
        long long preloadedClipsCount; 
        double accumulatedClipsLoadingTime; 
        long long accumulatedClipsLoadedCount; 
    }  _videoClipsStats;
}

@property (nonatomic, readonly) bool didDownloadFirstVideo;
@property (nonatomic, readonly) double estimatedLoadingTimeLeft;
@property (nonatomic, readonly) float loadedFraction;

- (void)_enumerateAllStats:(id /* block */)arg1;
- (void)_modifyStatsForPlaybackStyle:(long long)arg1 withModifier:(id /* block */)arg2;
- (bool)didDownloadFirstVideo;
- (double)estimatedLoadingTimeLeft;
- (float)loadedFraction;
- (void)noteClipWithPlaybackStyle:(long long)arg1 loadedWithLoadingTime:(double)arg2;
- (void)noteSessionStartedPreloadableClipsCounts:(struct { long long x1; long long x2; long long x3; })arg1;

@end
