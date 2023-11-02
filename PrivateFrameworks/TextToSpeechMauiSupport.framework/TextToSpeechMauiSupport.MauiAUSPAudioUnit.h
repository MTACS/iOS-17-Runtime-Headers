
@interface TextToSpeechMauiSupport.MauiAUSPAudioUnit : TextToSpeech.TTSMagicFirstPartyAudioUnit <TTSFirstPartyAURegistrar> {
    void _outputBusses;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _sentencePauseDuration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _timbre;
    void currentByteOffset;
    void currentFramePosition;
    void currentMauiBuffer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentResourceLoadToken;
    void currentStrippedSSML;
    void format;
    void lastSentRange;
    void markerQueue;
    void mauiEngine;
    void outputBus;
    void phonemeMappings;
    void request;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requestStart;
    void ssmlMarkerPosition;
    void vocalizerMarkup;
    void voiceResourceQueue;
}

@property (nonatomic, readonly) id /* block */ internalRenderBlock;
@property (nonatomic, readonly) AUAudioUnitBusArray *outputBusses;
@property (nonatomic, copy) NSArray *speechVoices;

// Image: /System/Library/PrivateFrameworks/TextToSpeechMauiSupport.framework/TextToSpeechMauiSupport

+ (void)registerAudioUnit;

- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (void)cancelSpeechRequest;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (void)setSpeechVoices:(id)arg1;
- (id)speechVoices;
- (void)synthesizeSpeechRequest:(id)arg1;

@end
