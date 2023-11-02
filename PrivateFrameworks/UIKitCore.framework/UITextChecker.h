
@interface UITextChecker : NSObject {
    NSString * _checkerWarmingLanguage;
    long long  _usdt;
}

@property (nonatomic, retain) NSArray *ignoredWords;

+ (id)_dictionaryEntryForName:(id)arg1;
+ (bool)_forgetWord:(id)arg1 inDictionary:(id)arg2;
+ (bool)_isWord:(id)arg1 inDictionary:(id)arg2;
+ (bool)_learnWord:(id)arg1 inDictionary:(id)arg2;
+ (void)_setDictionaryEntry:(id)arg1 forName:(id)arg2;
+ (void)_setWords:(id)arg1 inDictionary:(id)arg2;
+ (id)_wordsInDictionary:(id)arg1;
+ (id)availableLanguages;
+ (id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3;
+ (id)bestLanguageForString:(id)arg1 fromAlternatives:(id)arg2 currentLanguage:(id)arg3 insertionPointIndex:(unsigned long long)arg4 scriptForBestLanguage:(id*)arg5;
+ (struct __CFSet { }*)createDictHashTable:(bool)arg1;
+ (id)dictionaryInfo:(id)arg1;
+ (id)grammarAutocorrectionForWord:(id)arg1;
+ (bool)grammarCheckingEnabled;
+ (bool)grammarCheckingEnabledForLanguage:(id)arg1;
+ (void)handleGrammarCorrectionEntries:(id)arg1;
+ (bool)hasLearnedWord:(id)arg1;
+ (id)keyboardLanguages;
+ (void)learnWord:(id)arg1;
+ (void)noteTextReplacement:(id)arg1;
+ (void)noteWordTerminator:(id)arg1 replacement:(id)arg2;
+ (id)openUserDictionary:(id)arg1;
+ (void)performFinalGrammarChecking;
+ (id)postEditor;
+ (void)setString:(id)arg1 isExemptFromChecker:(bool)arg2;
+ (long long)uniqueSpellDocumentTag;
+ (void)unlearnWord:(id)arg1;

- (void).cxx_destruct;
- (id)_checker;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_chunkAndCheckGrammarInString:(id)arg1 language:(id)arg2 usingChecker:(id)arg3 details:(id*)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_chunkAndFindMisspelledWordInString:(id)arg1 languages:(id)arg2 learnedDictionaries:(id)arg3 wordCount:(long long*)arg4 correction:(id*)arg5 usingChecker:(id)arg6;
- (bool)_doneLoading;
- (id)_initWithAsynchronousLoading:(bool)arg1;
- (id)_nameOfDictionaryForDocumentTag:(long long)arg1;
- (void)_setDocumentDictionaryName:(id)arg1;
- (void)_setLanguageDictionaryName:(id)arg1;
- (long long)adjustOffsetToNextWordBoundaryInString:(id)arg1 startingAt:(long long)arg2;
- (id)alternativesForPinyinInputString:(id)arg1;
- (bool)canChangeCaseOfFirstLetterInString:(id)arg1 toUpperCase:(bool)arg2 language:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })checkGrammarOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(bool)arg4 details:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(bool)arg4 correction:(id*)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 languages:(id)arg3 wrap:(bool)arg4 correction:(id*)arg5;
- (id)checkString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 types:(unsigned long long)arg3 languages:(id)arg4 options:(id)arg5;
- (id)completionsForPartialWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (id)correctionForWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (void)dealloc;
- (id)finalResultsFromCheckingString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 options:(id)arg4;
- (id)grammarAlternativesForString:(id)arg1;
- (id)grammarGuessesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (id)guessesForWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (void)ignoreWord:(id)arg1;
- (id)ignoredWords;
- (id)init;
- (void)initGlobalsWithAsynchronousLoading:(bool)arg1;
- (void)initPostEditingWithAsynchronousLoading:(bool)arg1;
- (void)initUserDictionaries;
- (bool)isWordInUserDictionaries:(id)arg1 caseSensitive:(bool)arg2;
- (id)postEditor;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfMisspelledWordInString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 startingAt:(long long)arg3 wrap:(bool)arg4 language:(id)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfMisspelledWordInString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 startingAt:(long long)arg3 wrap:(bool)arg4 languages:(id)arg5;
- (void)recordResponse:(unsigned long long)arg1 toGrammarDetailInAnnotatedString:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)releaseAllLexicons;
- (long long)requestGrammarCheckingOfString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 options:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)resetAllLanguageModels;
- (void)setIgnoredWords:(id)arg1;
- (id)stringForInputString:(id)arg1 language:(id)arg2;
- (id)suggestWordInLanguage:(id)arg1;

@end
