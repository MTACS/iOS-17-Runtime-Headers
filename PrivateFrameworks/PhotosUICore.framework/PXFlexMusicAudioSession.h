
@interface PXFlexMusicAudioSession : PXAVPlayerAudioSession {
    long long  _audioRequestID;
}

@property (nonatomic) long long audioRequestID;
@property (nonatomic, readonly) PXFlexMusicAsset *flexMusicAsset;

- (long long)audioRequestID;
- (void)cancelMediaRequest;
- (void)dealloc;
- (id)flexMusicAsset;
- (id)initWithAsset:(id)arg1 volume:(float)arg2 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 queue:(id)arg4 audioSessionDelegate:(id)arg5;
- (void)requestMediaWithResultHandler:(id /* block */)arg1;
- (void)setAudioRequestID:(long long)arg1;

@end
