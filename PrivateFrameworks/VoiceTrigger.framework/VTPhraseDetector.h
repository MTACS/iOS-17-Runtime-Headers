
@interface VTPhraseDetector : NSObject {
    bool  _isSecondChance;
    unsigned long long  _nearMissCandidateDetectedSamples;
    unsigned long long  _nearMissDelayTimeout;
    NSMutableArray * _phraseDetectorInfos;
    NSMutableArray * _phraseResult;
    VTKeywordAnalyzerNDAPI * _syncKeywordAnalyzerNDAPI;
    VTSyncKeywordAnalyzerQuasar * _syncKeywordAnalyzerQuasar;
}

@property (nonatomic) bool isSecondChance;
@property (nonatomic) unsigned long long nearMissCandidateDetectedSamples;
@property (nonatomic) unsigned long long nearMissDelayTimeout;
@property (nonatomic, retain) NSMutableArray *phraseDetectorInfos;
@property (nonatomic, retain) NSMutableArray *phraseResult;
@property (nonatomic, retain) VTKeywordAnalyzerNDAPI *syncKeywordAnalyzerNDAPI;
@property (nonatomic, retain) VTSyncKeywordAnalyzerQuasar *syncKeywordAnalyzerQuasar;

- (void).cxx_destruct;
- (id)_getResultWithPhId:(unsigned long long)arg1 phraseDetectorInfo:(id)arg2 ndapiResult:(id)arg3 quasarResult:(id)arg4 forceMaximized:(bool)arg5;
- (bool)_isSecondChanceCandidateWithScore:(float)arg1 effectiveThreshold:(float)arg2 secondChanceThreshold:(float)arg3;
- (id)_phraseDetectorResultFromNDAPIResults:(id)arg1 quasarResult:(id)arg2 forceMaximized:(bool)arg3;
- (id)_resultCopyWithKeywordDetectorDecision:(unsigned long long)arg1 bestPhId:(unsigned long long)arg2 phraseResult:(id)arg3;
- (void)dealloc;
- (id)getAnalyzedResultFromFloatAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)getAnalyzedResultFromFlushedAudio;
- (id)getAnalyzedResultFromInt16AudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)init;
- (bool)isSecondChance;
- (unsigned long long)nearMissCandidateDetectedSamples;
- (unsigned long long)nearMissDelayTimeout;
- (id)phraseDetectorInfoFromPhId:(unsigned long long)arg1;
- (id)phraseDetectorInfos;
- (id)phraseResult;
- (void)reset;
- (void)setConfig:(id)arg1;
- (void)setIsSecondChance:(bool)arg1;
- (void)setNearMissCandidateDetectedSamples:(unsigned long long)arg1;
- (void)setNearMissDelayTimeout:(unsigned long long)arg1;
- (void)setPhraseDetectorInfos:(id)arg1;
- (void)setPhraseResult:(id)arg1;
- (void)setRunAsSecondChance:(bool)arg1;
- (void)setSyncKeywordAnalyzerNDAPI:(id)arg1;
- (void)setSyncKeywordAnalyzerQuasar:(id)arg1;
- (id)syncKeywordAnalyzerNDAPI;
- (id)syncKeywordAnalyzerQuasar;

@end
