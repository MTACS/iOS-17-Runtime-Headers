
@interface CSPhraseDetector : NSObject {
    bool  _isSecondChance;
    unsigned long long  _nearMissCandidateDetectedSamples;
    unsigned long long  _nearMissDelayTimeout;
    NSMutableArray * _phraseDetectorInfos;
    NSMutableArray * _phraseResult;
    unsigned long long  _processedSampleCount;
    unsigned long long  _quasarCheckerCutOffSamplesCount;
    NSArray * _quasarCheckerResultAtCutOff;
    CSKeywordAnalyzerNDAPI * _syncKeywordAnalyzerNDAPI;
    CSSyncKeywordAnalyzerQuasar * _syncKeywordAnalyzerQuasar;
}

@property (nonatomic) bool isSecondChance;
@property (nonatomic) unsigned long long nearMissCandidateDetectedSamples;
@property (nonatomic) unsigned long long nearMissDelayTimeout;
@property (nonatomic, retain) NSMutableArray *phraseDetectorInfos;
@property (nonatomic, retain) NSMutableArray *phraseResult;
@property (nonatomic) unsigned long long processedSampleCount;
@property (nonatomic) unsigned long long quasarCheckerCutOffSamplesCount;
@property (nonatomic, retain) NSArray *quasarCheckerResultAtCutOff;
@property (nonatomic, retain) CSKeywordAnalyzerNDAPI *syncKeywordAnalyzerNDAPI;
@property (nonatomic, retain) CSSyncKeywordAnalyzerQuasar *syncKeywordAnalyzerQuasar;

- (void).cxx_destruct;
- (id)_getResultWithPhId:(unsigned long long)arg1 phraseDetectorInfo:(id)arg2 ndapiResult:(id)arg3 quasarResult:(id)arg4 forceMaximized:(bool)arg5;
- (bool)_isSecondChanceCandidateWithScore:(float)arg1 effectiveThreshold:(float)arg2 secondChanceThreshold:(float)arg3;
- (id)_phraseDetectorResultFromNDAPIResults:(id)arg1 quasarResult:(id)arg2 forceMaximized:(bool)arg3;
- (id)_resultCopyWithKeywordDetectorDecision:(unsigned long long)arg1 bestPhId:(unsigned long long)arg2 phraseResult:(id)arg3;
- (void)dealloc;
- (id)getAnalyzedResultFromAudioChunk:(id)arg1;
- (id)getAnalyzedResultFromFlushedAudio;
- (id)getLosingPhraseResultsWithDetectedPhId:(unsigned long long)arg1;
- (id)init;
- (bool)isSecondChance;
- (unsigned long long)nearMissCandidateDetectedSamples;
- (unsigned long long)nearMissDelayTimeout;
- (id)phraseDetectorInfoFromPhId:(unsigned long long)arg1;
- (id)phraseDetectorInfos;
- (id)phraseResult;
- (unsigned long long)processedSampleCount;
- (unsigned long long)quasarCheckerCutOffSamplesCount;
- (id)quasarCheckerResultAtCutOff;
- (void)reset;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setConfig:(id)arg1;
- (void)setIsSecondChance:(bool)arg1;
- (void)setNearMissCandidateDetectedSamples:(unsigned long long)arg1;
- (void)setNearMissDelayTimeout:(unsigned long long)arg1;
- (void)setPhraseDetectorInfos:(id)arg1;
- (void)setPhraseResult:(id)arg1;
- (void)setProcessedSampleCount:(unsigned long long)arg1;
- (void)setQuasarCheckerCutOffSamplesCount:(unsigned long long)arg1;
- (void)setQuasarCheckerResultAtCutOff:(id)arg1;
- (void)setRunAsSecondChance:(bool)arg1;
- (void)setSyncKeywordAnalyzerNDAPI:(id)arg1;
- (void)setSyncKeywordAnalyzerQuasar:(id)arg1;
- (id)syncKeywordAnalyzerNDAPI;
- (id)syncKeywordAnalyzerQuasar;

@end
