
@interface XBLaunchImageProvider : NSObject {
    <BSInvalidatable> * _stateCaptureAssertion;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addBadLaunchInterfaceToDenyList:(id)arg1 forError:(id)arg2;
- (void)_generateImageForSnapshot:(id)arg1 inManifest:(id)arg2 withContext:(id)arg3 asyncImageData:(bool)arg4 dataProvider:(id)arg5 scheduleAsyncGeneration:(bool)arg6 completion:(id /* block */)arg7;
- (void)_resetBadLaunchInterfaceCount:(id)arg1;
- (void)captureLaunchImageForManifest:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequests:(id)arg3 createCaptureInfo:(bool)arg4 firstImageIsReady:(id /* block */)arg5 withCompletionHandler:(id /* block */)arg6;
- (id /* block */)createLaunchImageGeneratorWithContext:(id)arg1 asyncImageData:(bool)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)init;
- (void)preheatServiceWithTimeout:(double)arg1;

@end
