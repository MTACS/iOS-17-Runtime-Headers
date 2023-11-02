
@interface SNAudioRecordingQueue : NSObject {
    SNAudioRecordingQueueScheduler * _aqCallbackScheduler;
    struct OpaqueAudioQueue { } * _audioQueue;
    SNAudioQueueConfiguration * _audioQueueConfiguration;
    id /* block */  _bufferHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _interruptionHandler;
    AVAudioFormat * _recordFormat;
    bool  _running;
    AVAudioSession * _session;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithFormat:(id)arg1 audioQueueConfiguration:(id)arg2 audioSession:(id)arg3 queue:(id)arg4 audioBufferHandler:(id /* block */)arg5 interruptionHandler:(id /* block */)arg6;
- (bool)start;
- (void)stop;

@end
