
@interface VFXCore.AudioPlayer : NSObject {
    void _lock;
    void engine;
    void isValid;
    void loops;
    void mixer;
    void player;
    void samplesRaw;
    void samplesRawCount;
    void samplesRawSampleRate;
    void samplesRawTime;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
