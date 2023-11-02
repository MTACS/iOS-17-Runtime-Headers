
@interface SBSWallpaperClient : FBSServiceFacilityClient

@property (nonatomic, readonly) unsigned long long posterSignificantEventsCounter;

- (void)_fetchLockScreenBoundsCheckOfType:(long long)arg1 orientation:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchContentCutoutBoundsForVariant:(unsigned int)arg1 orientation:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchLimitedOcclusionBoundsForOrientation:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLockScreenContentCutoutBoundsForOrientation:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchLockScreenTimeBoundsForOrientation:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMaximalLockScreenContentCutoutBoundsForOrientation:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchObscurableBoundsForOrientation:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchOriginalImageForVariant:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchOriginalVideoURLForVariant:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchPosterSignificantEventsCounterWithCompletionHandler:(id /* block */)arg1;
- (void)fetchThumbnailForVariant:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2;
- (unsigned long long)posterSignificantEventsCounter;
- (void)restoreDefaultWallpaperWithCompletion:(id /* block */)arg1;
- (bool)setWallpaperColor:(id)arg1 darkColor:(id)arg2 forVariants:(unsigned long long)arg3;
- (bool)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2;
- (bool)setWallpaperGradient:(id)arg1 forVariants:(unsigned long long)arg2;
- (bool)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 wallpaperMode:(unsigned char)arg3;
- (unsigned long long)significantEventsCounterForPosterWithIdentifier:(id)arg1;
- (void)triggerPosterSignificantEventWithCompletion:(id /* block */)arg1;

@end
