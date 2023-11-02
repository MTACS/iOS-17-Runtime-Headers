
@interface IPFeatureSentence : IPFeature {
    NSArray * _fragments;
    bool  _hasCheckedEventVocabularyIgnoreDateKeyword;
    bool  _hasCheckedEventVocabularyKeyword;
    NSString * _languageID;
    RKText * _responseKitSentence;
    NSString * _storedEventVocabularyIgnoreDateKeyword;
    NSString * _storedEventVocabularyRejectionKeyword;
    unsigned long long  _storedPolarity;
}

@property (readonly) unsigned long long clusterType;
@property (readonly, copy) NSString *eventVocabularyIgnoreDateKeyword;
@property (readonly, copy) NSString *eventVocabularyRejectionKeyword;
@property (copy) NSArray *fragments;
@property (copy) NSString *languageID;
@property (readonly) unsigned long long polarity;
@property (getter=isQuoteAttributionLine, readonly) bool quoteAttributionLine;
@property (retain) RKText *responseKitSentence;
@property (copy) NSString *storedEventVocabularyIgnoreDateKeyword;
@property (copy) NSString *storedEventVocabularyRejectionKeyword;
@property unsigned long long storedPolarity;

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeExcludingLeadingAndTrailingCharacters:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 ofString:(id)arg3;
+ (id)_substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofString:(id)arg2 removingCharactersFromSet:(id)arg3;
+ (id)bestLanguageIDFromText:(id)arg1;
+ (id)bestLanguageIDFromText:(id)arg1 linesElided:(unsigned long long)arg2;
+ (id)buildRegexForType:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularyIgnoreDateKeywordInString:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularyIgnoreDateRegexForLanguageID:(id)arg1;
+ (id)eventVocabularyPositiveRegexForLanguageID:(id)arg1;
+ (id)eventVocabularyRegexForType:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularyRejectionKeywordInString:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularyRejectionRegexForLanguageID:(id)arg1;
+ (id)eventVocabularySubjectTitleInString:(id)arg1 languageID:(id)arg2;
+ (id)eventVocabularySubjectTitleRegexForLanguageID:(id)arg1;
+ (id)humanReadableFeaturePolarity:(unsigned long long)arg1;
+ (unsigned long long)numberOfMatchesForEventVocabularySubjectTitleInString:(id)arg1 languageID:(id)arg2;
+ (id)regexArrayForType:(id)arg1 languageID:(id)arg2;

- (void).cxx_destruct;
- (void)addFragment:(id)arg1;
- (void)checkEventVocabularyKeywordsIfNeeded;
- (unsigned long long)clusterType;
- (id)description;
- (id)descriptionForFragment:(id)arg1;
- (id)descriptionForFragmentAtIndex:(unsigned long long)arg1;
- (id)eventVocabularyIgnoreDateKeyword;
- (id)eventVocabularyRejectionKeyword;
- (id)fragments;
- (id)initWithLanguageID:(id)arg1 responseKitSentence:(id)arg2;
- (bool)isQuoteAttributionLine;
- (id)languageID;
- (unsigned long long)polarity;
- (unsigned long long)polarityForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)polarityForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 confidence:(double*)arg2;
- (id)responseKitSentence;
- (void)setFragments:(id)arg1;
- (void)setLanguageID:(id)arg1;
- (void)setResponseKitSentence:(id)arg1;
- (void)setStoredEventVocabularyIgnoreDateKeyword:(id)arg1;
- (void)setStoredEventVocabularyRejectionKeyword:(id)arg1;
- (void)setStoredPolarity:(unsigned long long)arg1;
- (id)storedEventVocabularyIgnoreDateKeyword;
- (id)storedEventVocabularyRejectionKeyword;
- (unsigned long long)storedPolarity;

@end
