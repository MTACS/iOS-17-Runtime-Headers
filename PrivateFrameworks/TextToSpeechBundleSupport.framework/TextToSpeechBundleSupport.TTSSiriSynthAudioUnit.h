
@interface TextToSpeechBundleSupport.TTSSiriSynthAudioUnit : TextToSpeech.TTSMagicFirstPartyAudioUnit <AUAudioUnit_FirstPartySpeechExtensionAdditions, TTSFirstPartyAURegistrar, TTSSiriSynthWrapperDelegate> {
    void $__lazy_storage_$_accessManager;
    void $__lazy_storage_$_voicebankingService;
    void _fetchRequestCount;
    void _fetchedVoices;
    void _hostAuditToken;
    void bufferLock;
    void bufferRefilled;
    void currentBuffer;
    void currentFramePosition;
    void currentRequest;
    void currentStrippedSSML;
    void lastSentRange;
    void lastVoice;
    void markerBuffer;
    void markerQueue;
    void maxFramesToRender;
    void maxNumberOfChannels;
    void numChannels;
    void ourOutputBusses;
    void outputBus;
    void queue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requestStart;
    void sampleBuffers;
    void sampleIndex;
    void sampleRate;
    void ssmlMarkerPosition;
    void synthIsStarting;
    void synthesizer;
    void vocalizerMarkup;
    void voiceIsAllowedToRenderSpeech;
}

@property (nonatomic) struct { unsigned int x1[8]; } _hostAuditToken;
@property (nonatomic, readonly) id /* block */ internalRenderBlock;
@property (nonatomic, readonly) AUAudioUnitBusArray *outputBusses;
@property (nonatomic, copy) NSArray *speechVoices;

// Image: /System/Library/PrivateFrameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport

+ (void)registerAudioUnit;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })_hostAuditToken;
- (void)cancelSpeechRequest;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (id)requireFirstUnlockForVoiceLoad;
- (void)setSpeechVoices:(id)arg1;
- (void)set_hostAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)siri:(id)arg1 didGenerateBuffer:(id)arg2;
- (void)siri:(id)arg1 didGenerateMarkers:(const struct SiriTTSMarker { bool x1; bool x2; unsigned short x3; unsigned int x4; unsigned long long x5; }*)arg2 count:(long long)arg3;
- (void)siriDidEndSynthesis:(id)arg1 successfully:(bool)arg2;
- (void)siriDidStartSynthesis:(id)arg1;
- (id)speechVoices;
- (void)synthesizeSpeechRequest:(id)arg1;
- (id)voicesExternallyManaged;

@end
