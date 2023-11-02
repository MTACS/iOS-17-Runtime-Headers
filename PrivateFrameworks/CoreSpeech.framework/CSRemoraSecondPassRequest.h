
@interface CSRemoraSecondPassRequest : NSObject {
    CSAudioProvider * _audioProvider;
    CSAudioStreamHolding * _audioStreamHolding;
    CSAsset * _currentAsset;
    NSString * _firstPassDeviceID;
    double  _firstPassTriggerEndTime;
    float  _goodnessScore;
    bool  _isCancelled;
    bool  _isSecondPassRunning;
    CSVoiceTriggerUserSelectedPhrase * _multiPhraseSelectedStatus;
    CSVoiceTriggerSecondChanceContext * _secondChanceContext;
    unsigned long long  _timestamp;
    CSVoiceTriggerSecondPass * _voiceTriggerSecondPass;
}

@property (nonatomic, retain) CSAudioProvider *audioProvider;
@property (nonatomic, retain) CSAudioStreamHolding *audioStreamHolding;
@property (nonatomic, retain) CSAsset *currentAsset;
@property (nonatomic, retain) NSString *firstPassDeviceID;
@property (nonatomic) double firstPassTriggerEndTime;
@property (nonatomic) float goodnessScore;
@property (nonatomic) bool isCancelled;
@property (nonatomic) bool isSecondPassRunning;
@property (nonatomic, retain) CSVoiceTriggerUserSelectedPhrase *multiPhraseSelectedStatus;
@property (nonatomic, retain) CSVoiceTriggerSecondChanceContext *secondChanceContext;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;

- (void).cxx_destruct;
- (id)_secondPassWorkQueue;
- (id)audioProvider;
- (id)audioStreamHolding;
- (void)cancelAudioStreamHold;
- (void)cancelRequest;
- (id)currentAsset;
- (void)dealloc;
- (id)firstPassDeviceID;
- (double)firstPassTriggerEndTime;
- (float)goodnessScore;
- (void)holdAudioStreamWithTimeout:(double)arg1;
- (id)initWithDeviceID:(id)arg1;
- (bool)isCancelled;
- (bool)isSecondPassRunning;
- (id)multiPhraseSelectedStatus;
- (void)reset;
- (id)secondChanceContext;
- (void)setAsset:(id)arg1;
- (void)setAudioProvider:(id)arg1;
- (void)setAudioStreamHolding:(id)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setFirstPassDeviceID:(id)arg1;
- (void)setFirstPassTriggerEndTime:(double)arg1;
- (void)setGoodnessScore:(float)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setIsSecondPassRunning:(bool)arg1;
- (void)setMultiPhraseSelectedStatus:(id)arg1;
- (void)setSecondChanceContext:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVoiceTriggerSecondPass:(id)arg1;
- (void)start;
- (unsigned long long)timestamp;
- (id)voiceTriggerSecondPass;

@end
