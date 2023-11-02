
@interface BWDeferredCaptureContainerManager : BWDeferredContainerManagerBase {
    NSObject<OS_dispatch_source> * _cacheExpiryTimer;
    unsigned int  _cacheResidencySeconds;
    unsigned int  _cacheSize;
    NSMutableArray * _cachedContainers;
    unsigned long long  _cachedLowDiskThresholdBytes;
    NSObject<OS_dispatch_queue> * _flushQueue;
    NSObject<OS_dispatch_queue> * _flushQueueBackground;
    NSMutableArray * _inflightContainers;
    NSMutableDictionary * _pools;
    NSMutableArray * _stagedContainers;
}

+ (id)sharedInstance;

- (int)abortContainer:(id)arg1 error:(int)arg2;
- (int)addBufferPool:(id)arg1;
- (int)addCaptureContainer:(id)arg1;
- (bool)canDefer;
- (int)commitContainer:(id)arg1;
- (int)containerWaitForFlush:(id)arg1;
- (id)copyRemoteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3;
- (id)createCaptureContainerWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3;
- (int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2;
- (void)flush:(id)arg1 toMinimumCapacity:(unsigned long long)arg2;
- (id)init;
- (id)lookupCaptureContainer:(id)arg1;
- (id)manifestsForApplicationID:(id)arg1 err:(int*)arg2;
- (struct __CVBuffer { }*)newPixelBuffer:(id)arg1;
- (int)queryContainerStatusForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 status:(int*)arg3;
- (int)releaseRemoteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2;
- (int)removeBufferPool:(id)arg1;

@end
