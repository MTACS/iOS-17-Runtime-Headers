
@interface CSSyncKeywordAnalyzerQuasar : NSObject {
    unsigned long long  _activeChannel;
    unsigned long long  _numPhrases;
    NSDictionary * _phToPhIdMap;
    bool  _preventDuplicatedReset;
    bool  _requireReset;
    _EARSyncSpeechRecognizer * _syncRecognizer;
}

@property (nonatomic) unsigned long long activeChannel;

+ (id)_phToPhIdMapFromTriggerTokensArray:(id)arg1;
+ (void)dumpEARSpeechRecognitionResults:(id)arg1;

- (void).cxx_destruct;
- (id)_getAnalyzedResults:(id)arg1;
- (unsigned long long)activeChannel;
- (void)flushAudio;
- (id)getAnalyzedResultsFromAudioChunk:(id)arg1;
- (id)getResultsFromFlushedAudio;
- (id)initWithConfigPath:(id)arg1 triggerTokensArray:(id)arg2 preventDuplicatedReset:(bool)arg3 memoryLock:(bool)arg4;
- (void)processAudioChunk:(id)arg1;
- (void)reset;
- (void)setActiveChannel:(unsigned long long)arg1;

@end
