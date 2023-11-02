
@interface VNSession : NSObject <VNDetectorCacheDelegate, VNDetectorProviding, VNDetectorReleasing, VNLegacyForcedCleanupImplementing, VNRPNTrackerResourcesProviding, VNRequestWarming, VNTrackerProviding> {
    VNCIContextManager * _ciContextManager;
    VNCVPixelBufferPoolManager * _cvPixelBufferPoolManager;
    VNDetectorCache * _detectorCache_onlyAccessWithDetectorAccessingLock;
    VNFrameworkManager * _frameworkManager;
    VNTrackerManager * _trackerManager;
    VNRPNTrackerEspressoResourcesCache * _trackerResourceCache;
    VNVTSessionManager * _vtSessionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)globalSession;

- (void).cxx_destruct;
- (id)_cachedDetectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2;
- (id)_cachedTrackerResourcesConfiguredWithOptions:(id)arg1;
- (void)_releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;
- (id)createRPNTrackerResourcesConfiguredWithOptions:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)detectorCache:(id)arg1 didCacheDetector:(id)arg2;
- (void)detectorCache:(id)arg1 didEvictDetector:(id)arg2;
- (id)detectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3;
- (id)detectorOfType:(id)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithCachingBehavior:(unsigned long long)arg1;
- (void)legacyForcedCleanupOfFacePipelineWithLevel:(id)arg1;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)arg1;
- (void)legacyForcedCleanupOfScenePipelineWithLevel:(id)arg1;
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)arg1;
- (void)legacyForcedCleanupWithOptions:(id)arg1;
- (id)loadedDetectors;
- (bool)prepareForPerformingRequests:(id)arg1 error:(id*)arg2;
- (void)releaseCachedResources;
- (void)releaseCachedResourcesWithCompletionBlock:(id /* block */)arg1;
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;
- (void)releaseTracker:(id)arg1;
- (Class)trackerClassForOptions:(id)arg1 error:(id*)arg2;
- (id)trackerResourcesConfiguredWithOptions:(id)arg1 error:(id*)arg2;
- (id)trackerWithOptions:(id)arg1 error:(id*)arg2;
- (id)vnciContextManager;
- (id)vncvPixelBufferPoolManager;
- (id)vnvtSessionManager;

@end
