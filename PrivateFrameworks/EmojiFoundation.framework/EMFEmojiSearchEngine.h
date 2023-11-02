
@interface EMFEmojiSearchEngine : NSObject {
    <EMFAutocompleteCandidateProvider> * _autocompleteProvider;
    bool  _enableAutocomplete;
    EMFIndexManager * _indexManager;
    NSLocale * _locale;
    struct __EmojiLocaleDataWrapper { } * _localeData;
    EMFQueryResultOverrideList * _overrideList;
    EMFQueryLogger * _queryLogger;
    EMFStringStemmer * _stringStemmer;
}

@property (nonatomic, readonly) <EMFAutocompleteCandidateProvider> *autocompleteProvider;
@property (nonatomic) bool enableAutocomplete;
@property (nonatomic, readonly) EMFIndexManager *indexManager;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) EMFQueryResultOverrideList *overrideList;
@property (nonatomic, readonly) EMFStringStemmer *stringStemmer;

+ (bool)isLocaleSupported:(id)arg1;

- (void).cxx_destruct;
- (id)_performAutocompletedQueryForQuery:(id)arg1 usingIndex:(id)arg2;
- (id)_performStringQuery:(id)arg1 usingIndex:(id)arg2 shouldAutocomplete:(bool)arg3 shouldStem:(bool)arg4;
- (id)_performStringQueryOverride:(id)arg1 usingIndex:(id)arg2;
- (id)_performStringQueryUntokenized:(id)arg1 usingIndex:(id)arg2;
- (id)autocompleteProvider;
- (void)dealloc;
- (bool)enableAutocomplete;
- (id)indexManager;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 andAssetBundle:(id)arg2;
- (id)initWithLocale:(id)arg1 andIndexManager:(id)arg2 andStringStemmer:(id)arg3 andAutocompleteProvider:(id)arg4;
- (id)locale;
- (id)overrideList;
- (id)performQuery:(id)arg1 usingIndex:(id)arg2;
- (id)performStringQuery:(id)arg1;
- (void)preheat;
- (void)setEnableAutocomplete:(bool)arg1;
- (id)stringStemmer;

@end
