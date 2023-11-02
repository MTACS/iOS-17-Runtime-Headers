
@interface DropInCore.AudioPowerManager : NSObject <TUAudioFrequencyControllerDelegate> {
    void audioFrequencyController;
    void delegate;
    void delegateQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void queue;
    void registeredStreamTokens;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signposter;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)frequencyController:(id)arg1 audioPowerChanged:(float)arg2 forParticipantWithStreamToken:(long long)arg3;
- (id)init;

@end
