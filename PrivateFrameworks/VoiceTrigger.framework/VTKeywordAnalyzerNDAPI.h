
@interface VTKeywordAnalyzerNDAPI : NSObject {
    unsigned int  _activePhId;
    bool  _isStartSampleCountMarked;
    unsigned long long  _lastSampleFed;
    VTNovDetector * _novDetector;
    unsigned long long  _sampleFedWrapAroundOffset;
    unsigned long long  _startAnalyzeSampleCount;
}

@property (nonatomic) unsigned int activePhId;

- (void).cxx_destruct;
- (id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)arg1 phId:(unsigned long long)arg2;
- (void)_processAudioFloatBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)_processAudioInt16Buffer:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)_resetStartAnalyzeTime;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (unsigned int)activePhId;
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)getAnalyzedResults;
- (id)getAnalyzedResultsFromFloatAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)getAnalyzedResultsFromInt16AudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)getBestAnalyzedResults;
- (id)getBestAnalyzedResultsFromFloatAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)getBestAnalyzedResultsFromInt16AudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
- (float)getLoggingThreshold;
- (float)getRejectLoggingThreshold;
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (float)getThreshold;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (void)reset;
- (void)resetBest;
- (void)setActivePhId:(unsigned int)arg1;

@end
