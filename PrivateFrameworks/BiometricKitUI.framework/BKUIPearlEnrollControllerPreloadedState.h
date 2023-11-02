
@interface BKUIPearlEnrollControllerPreloadedState : NSObject {
    BKUIPearlAudioSession * _cachedAudioSession;
    NSArray * _cachedEntryAnimationImages;
    BKUIPearlVideoCaptureSession * _cachedVideoCaptureSession;
}

- (void).cxx_destruct;
- (id)acquireCachedAudioSession;
- (id)acquireCachedEntryAnimationImages;
- (id)acquireCachedVideoCaptureSession;
- (void)cacheAudioSession:(id)arg1;
- (void)cacheEntryAnimationImages:(id)arg1;
- (void)cacheVideoCaptureSession:(id)arg1;

@end
