
@interface SSRTriggerPhraseDetector : NSObject {
    SSRTriggerPhraseDetectorNDAPI * _detectorNDAPI;
    SSRTriggerPhraseDetectorQuasar * _detectorQuasar;
    float  _recognizerScoreScaleFactor;
}

@property (nonatomic, retain) SSRTriggerPhraseDetectorNDAPI *detectorNDAPI;
@property (nonatomic, retain) SSRTriggerPhraseDetectorQuasar *detectorQuasar;
@property (nonatomic) float recognizerScoreScaleFactor;

+ (id)filterVTAudioFiles:(id)arg1 withLocale:(id)arg2 withAsset:(id)arg3;

- (void).cxx_destruct;
- (void)computeTriggerConfidenceForAudio:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)detectorNDAPI;
- (id)detectorQuasar;
- (id)initWithLocale:(id)arg1 asset:(id)arg2;
- (float)recognizerScoreScaleFactor;
- (void)setDetectorNDAPI:(id)arg1;
- (void)setDetectorQuasar:(id)arg1;
- (void)setRecognizerScoreScaleFactor:(float)arg1;

@end
