
@interface PLNLP : NSObject

+ (id)_englishStopWords;
+ (id)_frenchStopWords;
+ (id)dateFilterForCMMWithAttributes:(id)arg1 withReferenceDate:(id)arg2;
+ (id)dateIntervalsFromMessage:(id)arg1 onDate:(id)arg2;
+ (id)lemmasForToken:(id)arg1 locale:(id)arg2 options:(long long)arg3;
+ (id)ngramsFromTokens:(id)arg1 ofSize:(unsigned long long)arg2 usingSeparator:(id)arg3;
+ (bool)nlpSearchSupportsLocale:(id)arg1;
+ (id)stopWordsForLanguageCode:(id)arg1;
+ (id)stringWithoutDiacriticsFromString:(id)arg1;
+ (id)tokensFromString:(id)arg1 options:(long long)arg2;

@end
