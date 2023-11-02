
@interface CULiveAudioServerSession : NSObject {
    AVAudioConverter * _audioConverter;
    AVAudioEngine * _audioEngine;
    AVAudioFormat * _audioInputFormat;
    AVAudioFormat * _audioOutputFormat;
    AVAudioPlayerNode * _audioPlayerNode;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _playbackStarted;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (bool)activateAndReturnError:(id*)arg1;
- (id)dispatchQueue;
- (void)handleDataEvent:(id)arg1;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;

@end
