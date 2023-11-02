
@interface VTUIAnalytics : NSObject {
    int  _aboutViewShown;
    int  _asrError;
    int  _introViewShown;
    NSString * _languageCode;
    NSString * _setupMode;
    int  _skippedFromIntroAOP;
    int  _skippedFromIntroNonAOP;
    int  _turnOnSiriNonAOP;
    int  _voiceTrainingCancelled;
    int  _voiceTrainingCancelledStep;
    int  _voiceTrainingCompleted;
    int  _voiceTrainingStarted;
    int  _vtError;
}

@property (nonatomic) int aboutViewShown;
@property (nonatomic) int asrError;
@property (nonatomic) int introViewShown;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSString *setupMode;
@property (nonatomic) int skippedFromIntroAOP;
@property (nonatomic) int skippedFromIntroNonAOP;
@property (nonatomic) int turnOnSiriNonAOP;
@property (nonatomic) int voiceTrainingCancelled;
@property (nonatomic) int voiceTrainingCancelledStep;
@property (nonatomic) int voiceTrainingCompleted;
@property (nonatomic) int voiceTrainingStarted;
@property (nonatomic) int vtError;

- (void).cxx_destruct;
- (int)aboutViewShown;
- (int)asrError;
- (int)introViewShown;
- (id)languageCode;
- (void)logEvent;
- (void)setAboutViewShown:(int)arg1;
- (void)setAsrError:(int)arg1;
- (void)setIntroViewShown:(int)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setSetupMode:(id)arg1;
- (void)setSkippedFromIntroAOP:(int)arg1;
- (void)setSkippedFromIntroNonAOP:(int)arg1;
- (void)setTurnOnSiriNonAOP:(int)arg1;
- (void)setVoiceTrainingCancelled:(int)arg1;
- (void)setVoiceTrainingCancelledStep:(int)arg1;
- (void)setVoiceTrainingCompleted:(int)arg1;
- (void)setVoiceTrainingStarted:(int)arg1;
- (void)setVtError:(int)arg1;
- (id)setupMode;
- (int)skippedFromIntroAOP;
- (int)skippedFromIntroNonAOP;
- (int)turnOnSiriNonAOP;
- (int)voiceTrainingCancelled;
- (int)voiceTrainingCancelledStep;
- (int)voiceTrainingCompleted;
- (int)voiceTrainingStarted;
- (int)vtError;

@end
