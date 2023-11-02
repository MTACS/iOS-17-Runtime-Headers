
@interface SpeakerRecognition.CSVTUIKeywordDetectorHelper : NSObject <SpeakerRecognition.CSVTUIKeywordDetectorSwift> {
    void audioBuffer;
    void extraSamplesAtStart;
    void keywordAnalyzer;
    void keywordThreshold;
    void lastKeywordScore;
}

- (void).cxx_destruct;
- (id)analyzeWithBuffer:(id)arg1;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (void)reset;
- (id)triggeredUtteranceWithVoiceTriggerEventInfo:(id)arg1;

@end
