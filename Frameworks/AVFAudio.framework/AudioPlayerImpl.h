
@interface AudioPlayerImpl : NSObject {
    NSDictionary * _actualSettings;
    AVAudioSession * _audioSession;
    NSArray * _channelAssignments;
    NSData * _data;
    <AVAudioPlayerDelegate> * _delegate;
    unsigned long long  _endInterruptionFlags;
    AVAudioFormat * _format;
    NSObject<OS_dispatch_queue> * _gcd;
    void * _localPlayer;
    bool  _playRetain;
    bool  _sessionListenerWasSet;
    NSURL * _url;
}

- (void)dealloc;
- (id)init;

@end
