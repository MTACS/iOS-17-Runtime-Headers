
@interface APAVAudioSessionManager : NSObject {
    bool  _forceRAW;
    bool  _isSetUp;
    struct OpaqueFigSimpleMutex { } * _mutex;
    AVAudioSession * _session;
    unsigned long long  _type;
}

@property (nonatomic, readonly) AVAudioSession *session;

+ (id)ambientSessionManager;
+ (id)mediaSessionManager;

- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;
- (void)resetSession;
- (id)session;
- (bool)setActive:(bool)arg1 error:(id*)arg2;
- (bool)setAudioMode:(struct __CFString { }*)arg1 isLongForm:(bool)arg2 error:(id*)arg3;
- (bool)setDuckOthers:(unsigned char)arg1 error:(id*)arg2;
- (bool)setPrefersMultichannelAudio:(unsigned char)arg1 error:(id*)arg2;
- (void)setUpSessionWithIsMixable:(bool)arg1;

@end
