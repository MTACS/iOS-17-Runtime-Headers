
@interface SpeechAnalyzerClientInputSequencerInternal : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  continuation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  inputStream;
}

- (void).cxx_destruct;
- (void)addAudioWithBuffer:(id)arg1;
- (void)finishAudio;
- (id)init;

@end
