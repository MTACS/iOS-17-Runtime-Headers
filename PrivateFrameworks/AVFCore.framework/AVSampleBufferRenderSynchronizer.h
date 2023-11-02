
@interface AVSampleBufferRenderSynchronizer : NSObject {
    AVSampleBufferRenderSynchronizerInternal * _synchronizerInternal;
}

@property (nonatomic) bool delaysRateChangeUntilHasSufficientMediaData;
@property (nonatomic) float rate;
@property (readonly) NSArray *renderers;
@property (readonly, retain) struct OpaqueCMTimebase { }*timebase;

+ (id)_makeSTSLabel;
+ (id)_videoRendererForRenderer:(id)arg1;
+ (id)currentFigRenderSynchronizerFactory;
+ (void)enableSTSLabels;
+ (void)setFigRenderSynchronizerFactory:(id)arg1 forQueue:(id)arg2;

- (bool)_addRenderer:(id)arg1 error:(id*)arg2;
- (long long)_addedAudioRendererCount;
- (long long)_addedAudioRendererCountInternal;
- (bool)_canAddRendererInternal:(id)arg1 error:(id*)arg2;
- (id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id /* block */)_getClientCompletionHandlerForRenderer:(id)arg1;
- (id)_getTimebaseObserverForRenderer:(id)arg1;
- (int)_initializeTimebase;
- (bool)_multipleAudioRenderersDisallowed;
- (void)_performRendererRemoval:(id)arg1;
- (void)_removeTimebaseObserverForRenderer:(id)arg1;
- (bool)_rendererConfigurationIsValid:(id*)arg1;
- (bool)_scheduleTimedRendererRemovalAtTime:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withClientCompletionHandler:(id /* block */)arg3;
- (int)_setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_storeObserver:(id)arg1 clientCompletionHandler:(id /* block */)arg2 forRenderer:(id)arg3;
- (void)_updateRateFromTimebase;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)addRenderer:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (bool)delaysRateChangeUntilHasSufficientMediaData;
- (id)init;
- (bool)isDefunct;
- (float)rate;
- (void)removeRenderer:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 completionHandler:(id /* block */)arg3;
- (void)removeRenderer:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withCompletionHandler:(id /* block */)arg3;
- (void)removeTimeObserver:(id)arg1;
- (id)renderers;
- (void)setDelaysRateChangeUntilHasSufficientMediaData:(bool)arg1;
- (void)setRate:(float)arg1;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (bool)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(id*)arg4;
- (struct OpaqueCMTimebase { }*)timebase;

@end
