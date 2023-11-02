
@interface SBSWallpaperService : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    SBSWallpaperClient * _client;
    bool  _wasInvalidated;
}

@property (nonatomic, readonly) unsigned long long posterSignificantEventsCounter;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchContentCutoutBoundsForVariant:(long long)arg1 orientation:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchLimitedOcclusionBoundsForOrientation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLockScreenContentCutoutBoundsForOrientation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLockScreenTimeBoundsForOrientation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMaximalLockScreenContentCutoutBoundsForOrientation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchObscurableBoundsForOrientation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchOriginalImageForVariant:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchOriginalVideoURLForVariant:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchPosterSignificantEventsCounterWithCompletionHandler:(id /* block */)arg1;
- (void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (unsigned long long)posterSignificantEventsCounter;
- (void)restoreDefaultWallpaperWithCompletion:(id /* block */)arg1;
- (bool)setWallpaperColor:(id)arg1 darkColor:(id)arg2 forVariants:(unsigned long long)arg3;
- (bool)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2;
- (bool)setWallpaperGradient:(id)arg1 forVariants:(unsigned long long)arg2;
- (bool)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 wallpaperMode:(long long)arg3;
- (unsigned long long)significantEventsCounterForPosterWithIdentifier:(id)arg1;
- (void)triggerPosterSignificantEventWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (void)staging_fetchPosterSignificantEventsCounterWithCompletionHandler:(id /* block */)arg1;

@end
