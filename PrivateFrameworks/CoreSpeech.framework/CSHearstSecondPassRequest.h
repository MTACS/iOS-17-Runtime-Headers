
@interface CSHearstSecondPassRequest : NSObject {
    CSAudioProvider * _audioProvider;
    CSAudioStreamHolding * _audioStreamHolding;
    NSString * _firstPassDeviceID;
    bool  _isSecondPassRunning;
    float  _remoteMicVADScore;
    CSVoiceTriggerSecondChanceContext * _secondChanceContext;
    CSSpeechManager * _speechManager;
    CSVoiceTriggerSecondPass * _voiceTriggerSecondPass;
}

@property (nonatomic, retain) CSAudioProvider *audioProvider;
@property (nonatomic, retain) CSAudioStreamHolding *audioStreamHolding;
@property (nonatomic, retain) NSString *firstPassDeviceID;
@property (nonatomic) bool isSecondPassRunning;
@property (nonatomic) float remoteMicVADScore;
@property (nonatomic, retain) CSVoiceTriggerSecondChanceContext *secondChanceContext;
@property (nonatomic, retain) CSSpeechManager *speechManager;
@property (nonatomic, retain) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;

- (void).cxx_destruct;
- (id)audioProvider;
- (id)audioStreamHolding;
- (void)cancelAudioStreamHold;
- (void)dealloc;
- (id)firstPassDeviceID;
- (void)holdAudioStreamWithTimeout:(double)arg1;
- (id)initWithDeviceID:(id)arg1;
- (id)initWithDeviceID:(id)arg1 speechManager:(id)arg2;
- (bool)isSecondPassRunning;
- (float)remoteMicVADScore;
- (void)reset;
- (id)secondChanceContext;
- (void)setAsset:(id)arg1;
- (void)setAudioProvider:(id)arg1;
- (void)setAudioStreamHolding:(id)arg1;
- (void)setFirstPassDeviceID:(id)arg1;
- (void)setIsSecondPassRunning:(bool)arg1;
- (void)setRemoteMicVADScore:(float)arg1;
- (void)setSecondChanceContext:(id)arg1;
- (void)setSpeechManager:(id)arg1;
- (void)setVoiceTriggerSecondPass:(id)arg1;
- (id)speechManager;
- (void)start;
- (id)voiceTriggerSecondPass;

@end
