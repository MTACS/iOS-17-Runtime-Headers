
@interface VTUIAudioHintPlayer : NSObject {
    NSString * _language;
    AFVoiceInfo * _outputVoice;
    bool  _shouldSpeakAudioHint;
    VTUISpeechSynthesizer * _synth;
    NSTimer * _timer;
    NSArray * _trainingPageAudioHintFiles;
    NSArray * _trainingPageAudioHintInstructions;
    bool  _useCompactHints;
}

@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) AFVoiceInfo *outputVoice;
@property (nonatomic) bool shouldSpeakAudioHint;
@property (nonatomic, retain) VTUISpeechSynthesizer *synth;
@property (nonatomic, retain) NSArray *trainingPageAudioHintFiles;
@property (nonatomic, retain) NSArray *trainingPageAudioHintInstructions;
@property bool useCompactHints;

- (void).cxx_destruct;
- (id)_audioHintPathForFileName:(id)arg1;
- (id)_getTrainingPageAudioHintFiles;
- (bool)_hasValidHints;
- (void)_setupHints;
- (bool)_systemLanguageMatchesSiriLanguage:(id)arg1 siriLanguage:(id)arg2;
- (void)_timerFired;
- (void)cleanup;
- (id)initWithLanguage:(id)arg1;
- (id)initWithLanguage:(id)arg1 isCompact:(bool)arg2;
- (id)language;
- (id)outputVoice;
- (void)setLanguage:(id)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)setShouldSpeakAudioHint:(bool)arg1;
- (void)setSynth:(id)arg1;
- (void)setTrainingPageAudioHintFiles:(id)arg1;
- (void)setTrainingPageAudioHintInstructions:(id)arg1;
- (void)setUseCompactHints:(bool)arg1;
- (bool)shouldSpeakAudioHint;
- (void)speakAudioHint:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)speakConfirmationDialog:(id /* block */)arg1;
- (id)synth;
- (id)trainingPageAudioHintFiles;
- (id)trainingPageAudioHintInstructions;
- (bool)useCompactHints;

@end
