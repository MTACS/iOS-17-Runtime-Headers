
@interface CSVTUIKeywordDetector : NSObject {
    CSAudioCircularBuffer * _audioBuffer;
    unsigned long long  _extraSamplesAtStart;
    SSRTriggerPhraseDetectorNDAPI * _keywordAnalyzer;
    float  _keywordThreshold;
    float  _lastKeywordScore;
}

- (void).cxx_destruct;
- (unsigned long long)_sampleLengthFrom:(unsigned int)arg1 To:(unsigned int)arg2;
- (id)analyze:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (void)reset;
- (id)triggeredUtterance:(id)arg1;

@end
