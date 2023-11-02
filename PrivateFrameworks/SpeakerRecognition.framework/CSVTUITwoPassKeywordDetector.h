
@interface CSVTUITwoPassKeywordDetector : CSVTUIKeywordDetector {
    unsigned long long  _analyzerTrailingSamples;
    CSAudioCircularBuffer * _audioBuffer;
    unsigned long long  _extraSamplesAtStart;
    CSKeywordAnalyzerNDAPIResult * _firstPassResult;
    bool  _isFirstPassTriggered;
    CSKeywordAnalyzerNDAPI * _keywordAnalyzer;
    float  _keywordThreshold;
    CSPhraseDetector * _phraseDetector;
    bool  _supportsMph;
}

- (void).cxx_destruct;
- (unsigned long long)_sampleLengthFrom:(unsigned int)arg1 To:(unsigned int)arg2;
- (id)analyze:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 supportMph:(bool)arg2;
- (void)internalReset;
- (void)reset;
- (id)triggeredUtterance:(id)arg1;

@end
