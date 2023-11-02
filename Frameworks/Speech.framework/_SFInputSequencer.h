
@interface _SFInputSequencer : NSObject {
    SpeechAnalyzerClientInputSequencerInternal * _underlyingObject;
}

@property (nonatomic, readonly) SpeechAnalyzerClientInputSequencerInternal *underlyingObject;

- (void).cxx_destruct;
- (void)addAudio:(id)arg1;
- (void)finishAudio;
- (id)init;
- (id)underlyingObject;

@end
