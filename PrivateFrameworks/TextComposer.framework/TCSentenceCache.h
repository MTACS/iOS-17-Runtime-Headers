
@interface TCSentenceCache : NSObject {
    NSMutableSet * _cachedAutocorrectedSentences;
    NSMutableArray * _cachedCorrectionArray;
    NSMutableDictionary * _cachedResultsDictionary;
    NSMutableDictionary * _cachedReversionsDictionary;
    NSMutableArray * _cachedSentenceArray;
    unsigned long long  _capacity;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly) unsigned long long capacity;

- (void).cxx_destruct;
- (void)_controlRepeatedAutocorrectionResultsForSentence:(id)arg1 offset:(unsigned long long)arg2 mutableResults:(id)arg3;
- (bool)_detailRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inSentence:(id)arg2 matchesRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inString:(id)arg4 sentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (void)_inSerialQueueAddCachedReversion:(id)arg1 forCorrections:(id)arg2;
- (void)_inSerialQueueAddCachedReversionsForResults:(id)arg1 sentence:(id)arg2;
- (id)_retrieveCachedGrammarDetailForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 sentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 matchingSentence:(id)arg4;
- (bool)_retrieveCachedResultsForSentence:(id)arg1 offset:(unsigned long long)arg2 mutableResults:(id)arg3;
- (void)_storeCachedResults:(id)arg1 forSentence:(id)arg2;
- (void)addGrammarDetailsForSentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 result:(id)arg2 mutableDetails:(id)arg3;
- (unsigned long long)capacity;
- (void)controlRepeatedAutocorrectionResultsForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tagger:(id)arg3 offset:(unsigned long long)arg4 mutableResults:(id)arg5;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)reset;
- (void)resetRepeatedAutocorrectionCache;
- (id)retrieveCachedGrammarDetailForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 sentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 tagger:(id)arg4;
- (void)retrieveCachedResultsForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tagger:(id)arg3 offset:(unsigned long long)arg4 ignoreTermination:(bool)arg5 mutableResults:(id)arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (void)retrieveCachedResultsForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tagger:(id)arg3 offset:(unsigned long long)arg4 mutableResults:(id)arg5 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6;
- (id)retrieveCachedReversionsForString:(id)arg1;
- (void)storeCachedResults:(id)arg1 forString:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 tagger:(id)arg4 offset:(unsigned long long)arg5;

@end
