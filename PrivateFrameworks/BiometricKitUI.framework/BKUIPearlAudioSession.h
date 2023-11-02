
@interface BKUIPearlAudioSession : NSObject {
    AVAudioEngine * _audioEngine;
    AVAudioPlayerNode * _audioNode;
    NSObject<OS_dispatch_queue> * _avPlayerNodeOperationQueue;
    AVAudioPCMBuffer * _completeSoundBuffer;
    AVAudioPCMBuffer * _endSoundBuffer;
    AVAudioPCMBuffer * _failSoundBuffer;
    AVAudioPCMBuffer * _lockSoundBuffer;
    bool  _mediaServicesConnected;
    AVAudioPCMBuffer * _scanSoundBuffer;
}

@property (nonatomic, readonly) AVAudioEngine *audioEngine;
@property (nonatomic, readonly) AVAudioPCMBuffer *completeSoundBuffer;
@property (nonatomic, readonly) AVAudioPCMBuffer *endSoundBuffer;
@property (nonatomic, readonly) AVAudioPCMBuffer *failSoundBuffer;
@property (nonatomic, readonly) AVAudioPCMBuffer *lockSoundBuffer;
@property (nonatomic, readonly) AVAudioPCMBuffer *scanSoundBuffer;

+ (id)_loadSound:(id)arg1;

- (void).cxx_destruct;
- (void)_mediaServicesConnectionWasLost:(id)arg1;
- (void)_mediaServicesReconnect:(id)arg1;
- (id)_setupMediaStack;
- (id)audioEngine;
- (id)completeSoundBuffer;
- (void)dealloc;
- (id)endSoundBuffer;
- (id)failSoundBuffer;
- (id)init;
- (id)lockSoundBuffer;
- (void)play;
- (id)scanSoundBuffer;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)scheduleBuffer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;

@end
