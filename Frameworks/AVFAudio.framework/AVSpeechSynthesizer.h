
@interface AVSpeechSynthesizer : NSObject {
    <AVSpeechSynthesizerDelegate> * _delegate;
    bool  _mixToTelephonyUplink;
    NSArray * _outputChannels;
    bool  _paused;
    bool  _speaking;
    bool  _usesApplicationAudioSession;
}

@property (nonatomic) <AVSpeechSynthesizerDelegate> *delegate;
@property (nonatomic) bool detectSSMLAndModifyUtterances;
@property (nonatomic, retain) AVSpeechUtterance *inflightUtterance;
@property (nonatomic) bool initializedWebKitUsage;
@property (nonatomic) bool mixToTelephonyUplink;
@property (nonatomic, retain) NSArray *outputChannels;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (setter=smu_setAudioSessionCategory:, nonatomic, retain) NSString *smu_audioSessionCategory;
@property (getter=isSpeaking, nonatomic, readonly) bool speaking;
@property (nonatomic) bool usesApplicationAudioSession;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

+ (void)initialize;
+ (unsigned long long)personalVoiceAuthorizationStatus;
+ (void)requestPersonalVoiceAuthorizationWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)continueSpeaking;
- (id)delegate;
- (bool)isPaused;
- (bool)isSpeaking;
- (bool)mixToTelephonyUplink;
- (id)outputChannels;
- (bool)pauseSpeakingAtBoundary:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMixToTelephonyUplink:(bool)arg1;
- (void)setOutputChannels:(id)arg1;
- (void)setUsesApplicationAudioSession:(bool)arg1;
- (void)speakUtterance:(id)arg1;
- (bool)stopSpeakingAtBoundary:(long long)arg1;
- (bool)usesApplicationAudioSession;
- (void)writeUtterance:(id)arg1 toBufferCallback:(id /* block */)arg2;
- (void)writeUtterance:(id)arg1 toBufferCallback:(id /* block */)arg2 toMarkerCallback:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (id)smu_audioSessionCategory;
- (void)smu_setAudioSessionCategory:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

+ (bool)_supportsSpeakingWithPersonalVoices;
+ (id /* block */)assetFlushedCallback;
+ (bool)isSoftAppUsageProtectionDisabled;
+ (unsigned long long)personalVoiceAuthorizationStatus;
+ (void)requestPersonalVoiceAuthorizationWithCompletionHandler:(id /* block */)arg1;
+ (void)setAssetFlushedCallback:(id /* block */)arg1;

- (void)_applyWebKitBehaviors;
- (long long)_convertBoundary:(long long)arg1;
- (void)_enqueueNextJob;
- (void)_handleSpeechDone:(id)arg1 successful:(bool)arg2;
- (void)_speakUtterance:(id)arg1;
- (unsigned int)audioQueueFlags;
- (id)audioSession;
- (id)audioSessionCategory;
- (unsigned long long)audioSessionCategoryOptions;
- (bool)continueSpeaking;
- (void)dealloc;
- (bool)detectSSMLAndModifyUtterances;
- (id)inflightUtterance;
- (id)init;
- (bool)initializedWebKitUsage;
- (bool)isInAudioInterruption;
- (bool)isInternalSynth;
- (bool)isPaused;
- (bool)isSpeaking;
- (bool)mixToTelephonyUplink;
- (id)outputChannels;
- (bool)pauseSpeakingAtBoundary:(long long)arg1;
- (void)prepareSpeechManager;
- (void)processSpeechJobFinished:(id)arg1 successful:(bool)arg2;
- (unsigned long long)setActiveOptions;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (void)setAudioSessionCategory:(id)arg1;
- (void)setAudioSessionCategoryOptions:(unsigned long long)arg1;
- (void)setAudioSessionInactiveTimeout:(double)arg1;
- (void)setDetectSSMLAndModifyUtterances:(bool)arg1;
- (void)setInflightUtterance:(id)arg1;
- (void)setInitializedWebKitUsage:(bool)arg1;
- (void)setIsInternalSynth:(bool)arg1;
- (void)setMixToTelephonyUplink:(bool)arg1;
- (void)setOutputChannels:(id)arg1;
- (void)setSetActiveOptions:(unsigned long long)arg1;
- (void)setSkipLuthorRules:(id)arg1;
- (void)setSpeechSource:(id)arg1;
- (void)setSupportsAccurateWordCallbacks:(id)arg1;
- (void)setUsesApplicationAudioSession:(bool)arg1;
- (id)skipLuthorRules;
- (void)speakUtterance:(id)arg1;
- (id)speechManager;
- (id)speechQueue;
- (id)speechSource;
- (bool)stopSpeakingAtBoundary:(long long)arg1;
- (id)supportsAccurateWordCallbacks;
- (void)tearDownWarmupManager;
- (bool)usesApplicationAudioSession;
- (void)writeUtterance:(id)arg1 toBufferCallback:(id /* block */)arg2;
- (void)writeUtterance:(id)arg1 toBufferCallback:(id /* block */)arg2 toMarkerCallback:(id /* block */)arg3;

@end
