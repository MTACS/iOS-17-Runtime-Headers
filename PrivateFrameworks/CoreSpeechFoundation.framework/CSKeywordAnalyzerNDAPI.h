
@interface CSKeywordAnalyzerNDAPI : NSObject {
    unsigned long long  _activeChannel;
    unsigned int  _activePhId;
    bool  _isStartSampleCountMarked;
    unsigned long long  _lastSampleFed;
    CSNovDetector * _novDetector;
    unsigned long long  _sampleFedWrapAroundOffset;
    unsigned long long  _startAnalyzeSampleCount;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) unsigned int activePhId;

- (void).cxx_destruct;
- (id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)arg1 phId:(unsigned long long)arg2;
- (void)_processAudioChunk:(id)arg1;
- (void)_resetStartAnalyzeTime;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (unsigned long long)activeChannel;
- (unsigned int)activePhId;
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)getAnalyzedResults;
- (id)getAnalyzedResultsFromAudioChunk:(id)arg1;
- (id)getBestAnalyzedResults;
- (id)getBestAnalyzedResultsFromAudioChunk:(id)arg1;
- (float)getLoggingThreshold;
- (float)getRejectLoggingThreshold;
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (float)getThreshold;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)reset;
- (void)resetBest;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setActivePhId:(unsigned int)arg1;

@end
