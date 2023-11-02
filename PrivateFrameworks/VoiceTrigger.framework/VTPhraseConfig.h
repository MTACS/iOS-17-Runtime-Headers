
@interface VTPhraseConfig : NSObject {
    float  _keywordRejectLoggingThreshold;
    float  _loggingThreshold;
    NSString * _name;
    float  _ndapiScaleFactor;
    float  _preTriggerSilenceOffset;
    float  _recognizerScoreOffset;
    float  _recognizerScoreScaleFactor;
    NSString * _recognizerToken;
    float  _remoraTwoShotFeedbackDelay;
    float  _secondChanceThreshold;
    float  _speakerRejectLoggingThreshold;
    float  _threshold;
    float  _twoShotFeedbackDelay;
}

@property (nonatomic, readonly) float keywordRejectLoggingThreshold;
@property (nonatomic, readonly) float loggingThreshold;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) float ndapiScaleFactor;
@property (nonatomic, readonly) float preTriggerSilenceOffset;
@property (nonatomic, readonly) float recognizerScoreOffset;
@property (nonatomic, readonly) float recognizerScoreScaleFactor;
@property (nonatomic, readonly) NSString *recognizerToken;
@property (nonatomic, readonly) float remoraTwoShotFeedbackDelay;
@property (nonatomic, readonly) float secondChanceThreshold;
@property (nonatomic, readonly) float speakerRejectLoggingThreshold;
@property (nonatomic, readonly) float threshold;
@property (nonatomic, readonly) float twoShotFeedbackDelay;

- (void).cxx_destruct;
- (id)copyWithThreshold:(float)arg1 secondChanceThreshold:(float)arg2 loggingThreshold:(float)arg3 ndapiScaleFactor:(float)arg4 recognizerScoreOffset:(float)arg5 recognizerScoreScaleFactor:(float)arg6 keywordRejectLoggingThreshold:(float)arg7;
- (id)initWithName:(id)arg1 threshold:(float)arg2 secondChanceThreshold:(float)arg3 loggingThreshold:(float)arg4 ndapiScaleFactor:(float)arg5 recognizerScoreOffset:(float)arg6 recognizerScoreScaleFactor:(float)arg7 recognizerToken:(id)arg8 twoShotFeedbackDelay:(float)arg9 remoraTwoShotFeedbackDelay:(float)arg10 keywordRejectLoggingThreshold:(float)arg11 speakerRejectLoggingThreshold:(float)arg12 preTriggerSilenceOffset:(float)arg13;
- (float)keywordRejectLoggingThreshold;
- (float)loggingThreshold;
- (id)name;
- (float)ndapiScaleFactor;
- (float)preTriggerSilenceOffset;
- (float)recognizerScoreOffset;
- (float)recognizerScoreScaleFactor;
- (id)recognizerToken;
- (float)remoraTwoShotFeedbackDelay;
- (float)secondChanceThreshold;
- (float)speakerRejectLoggingThreshold;
- (float)threshold;
- (float)twoShotFeedbackDelay;

@end
