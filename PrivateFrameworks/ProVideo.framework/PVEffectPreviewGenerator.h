
@interface PVEffectPreviewGenerator : PVRendererBase

+ (void)cleanupCaches;
+ (id)sharedGenerator;

- (void)cancelAllPendingPreviewRequests;
- (void)generatePreviewForEffect:(id)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 inputImage:(struct CGImage { }*)arg3 outputSize:(struct CGSize { double x1; double x2; })arg4 waitForFinish:(bool)arg5 completionHandler:(id /* block */)arg6;
- (id)initWithOptions:(id)arg1;

@end
