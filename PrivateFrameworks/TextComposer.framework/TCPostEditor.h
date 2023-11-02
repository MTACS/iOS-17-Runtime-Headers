
@interface TCPostEditor : NSObject {
    NSMutableDictionary * _editors;
    NSDictionary * _options;
    TCSentenceCache * _sentenceCache;
    TCTagger * _tagger;
    TCXPCClient * _xpcClient;
}

+ (bool)checkingEnabledForLanguage:(id)arg1;
+ (bool)deviceHasSuitableANE;
+ (id)enabledLanguages;
+ (void)logIgnoredSentence:(id)arg1 taggerFlags:(unsigned long long)arg2;
+ (id)sharedEditor;

- (void).cxx_destruct;
- (id)allEditorTypes;
- (void)checkString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tagger:(id)arg3 offset:(unsigned long long)arg4 options:(id)arg5 mutableResults:(id)arg6;
- (void)clearTagger;
- (id)combinedResultsForResults:(id)arg1 useAutocorrection:(bool)arg2;
- (id)conditionalFinalResultsFromCheckingString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 options:(id)arg4;
- (void)controlRepeatedAutocorrectionResultsForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 offset:(unsigned long long)arg4 mutableResults:(id)arg5;
- (bool)controlRepeatedAutocorrectionsWithOptions:(id)arg1;
- (void)dealloc;
- (id)defaultEditorTypesForAppKit;
- (id)defaultLocalEditorTypes;
- (id)defaultRemoteEditorTypes;
- (id)editorOfType:(id)arg1;
- (id)enabledLanguageForLanguage:(id)arg1;
- (id)finalResultsFromCheckingString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 conditionalOnTerminationEstimation:(bool)arg4 options:(id)arg5;
- (id)finalResultsFromCheckingString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 options:(id)arg4;
- (id)grammarDetailForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 sentenceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 tagger:(id)arg4;
- (id)grammarDetailForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3;
- (id)initWithChecker:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)localAndCachedResultsFromCheckingString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 offset:(unsigned long long)arg4 options:(id)arg5;
- (void)localRecordResponse:(long long)arg1 toGrammarDetail:(id)arg2 language:(id)arg3 appIdentifier:(id)arg4;
- (id)localResultsFromCheckingString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 offset:(unsigned long long)arg4 options:(id)arg5;
- (bool)performPhraseAnalysis;
- (void)recordResponse:(long long)arg1 toGrammarDetail:(id)arg2 language:(id)arg3;
- (void)recordResponse:(long long)arg1 toResult:(id)arg2 language:(id)arg3;
- (void)remoteCheckString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tagger:(id)arg3 offset:(unsigned long long)arg4 options:(id)arg5 mutableResults:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)requestCheckingOfString:(id)arg1 language:(id)arg2 offset:(unsigned long long)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)requestCheckingOfString:(id)arg1 language:(id)arg2 offset:(unsigned long long)arg3 optionsData:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)requestCheckingOfString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 offset:(unsigned long long)arg4 options:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)requestCheckingOfString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)requireANE;
- (bool)requiredANENotPresent;
- (void)resetCache;
- (void)resetEditors;
- (void)resetRepeatedAutocorrectionCache;
- (id)resultByCombiningCorrectionResultsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromResults:(id)arg2 alreadyAddedResults:(id)arg3;
- (id)resultByCombiningGrammarResultsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromResults:(id)arg2;
- (id)resultsFromCheckingString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 options:(id)arg4;
- (void)retrieveCachedResultsForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 offset:(unsigned long long)arg4 mutableResults:(id)arg5 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6;
- (id)reversionForString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3;
- (void)storeCachedResults:(id)arg1 forString:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 language:(id)arg4 offset:(unsigned long long)arg5;
- (bool)suppressTelemetryWithOptions:(id)arg1;
- (id)taggerWithString:(id)arg1 language:(id)arg2;
- (bool)useAutocorrectionWithOptions:(id)arg1;
- (bool)useCacheWithOptions:(id)arg1;
- (bool)useServer;
- (void)warmEditorsInBackground:(bool)arg1;
- (id)xpcClient;

@end
