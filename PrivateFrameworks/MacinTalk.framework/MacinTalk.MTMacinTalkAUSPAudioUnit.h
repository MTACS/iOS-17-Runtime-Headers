
@interface MacinTalk.MTMacinTalkAUSPAudioUnit : TextToSpeech.TTSMagicFirstPartyAudioUnit <MacinTalkPhraseProcessorDelegate, TTSFirstPartyAURegistrar> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _maxSpeakingRate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _minSpeakingRate;
    void _outputBusses;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _pitchModulation;
    void currentBuffer;
    void currentPhraseProcessor;
    void currentPlainTalkString;
    void currentSegmentOffset;
    void lastVoice;
    void outputBus;
    void requests;
    void rulesetRunner;
    void ssmlMarkerPosition;
    void voice;
}

@property (nonatomic, readonly) id /* block */ internalRenderBlock;
@property (nonatomic, readonly) AUAudioUnitBusArray *outputBusses;
@property (nonatomic, copy) NSArray *speechVoices;

// Image: /System/Library/PrivateFrameworks/MacinTalk.framework/MacinTalk

+ (void)registerAudioUnit;

- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (void)cancelSpeechRequest;
- (void)didFinishGeneratingSamples;
- (void)didGenerateSamplesForPhoneme:(long long)arg1 phonemeOpcode:(short)arg2;
- (void)didGenerateSamplesForSync:(long long)arg1 message:(unsigned int)arg2;
- (void)didGenerateSamplesForWord:(long long)arg1 stringPosition:(unsigned long long)arg2 length:(unsigned short)arg3;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (void)setSpeechVoices:(id)arg1;
- (id)speechVoices;
- (void)synthesizeSpeechRequest:(id)arg1;

@end
