
@interface _TtC9ActionKitP33_3FD069E75236963E75C4BE2D87E9ECB629SpeechSynthesizerAsyncWrapper : NSObject <WFSpeechSynthesizerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  continuation;
    void synthesizer;
}

- (void).cxx_destruct;
- (id)init;
- (void)speechSynthesizer:(id)arg1 didFailSpeakingUtterance:(id)arg2 error:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingUtterance:(id)arg2 intoFile:(id)arg3;

@end
