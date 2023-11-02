
@interface VTSyncKeywordAnalyzerQuasar : NSObject {
    unsigned long long  _numPhrases;
    NSDictionary * _phToPhIdMap;
    bool  _preventDuplicatedReset;
    bool  _requireReset;
    _EARSyncSpeechRecognizer * _syncRecognizer;
}

+ (id)_phToPhIdMapFromTriggerTokensArray:(id)arg1;
+ (void)dumpEARSpeechRecognitionResults:(id)arg1;

- (void).cxx_destruct;
- (id)_getAnalyzedResults:(id)arg1;
- (void)flushAudio;
- (id)getAnalyzedResultsFromFloatAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)getAnalyzedResultsFromInt16AudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)getResultsFromFlushedAudio;
- (id)initWithConfigPath:(id)arg1 triggerTokensArray:(id)arg2 preventDuplicatedReset:(bool)arg3 memoryLock:(bool)arg4;
- (void)reset;

@end
