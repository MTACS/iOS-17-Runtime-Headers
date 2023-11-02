
@interface PXAppleMusicPreviewAudioSession : PXAVPlayerAudioSession {
    long long  _requestID;
}

- (void)_handleRequestedAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)_handleValuesLoadedForAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)cancelMediaRequest;
- (id)initWithAsset:(id)arg1 volume:(float)arg2 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 queue:(id)arg4 audioSessionDelegate:(id)arg5;
- (void)requestMediaWithResultHandler:(id /* block */)arg1;

@end
