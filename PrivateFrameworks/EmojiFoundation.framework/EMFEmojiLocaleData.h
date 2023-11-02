
@interface EMFEmojiLocaleData : NSObject {
    EMFAnchoredSearchManager * _anchoredSearchManager;
    bool  _didTryLoadingSearchEngine;
    struct __EmojiLocaleDataWrapper { } * _localeDataRef;
    NSString * _localeIdentifier;
    EMFEmojiSearchEngine * _searchEngine;
}

@property (nonatomic, readonly, retain) EMFAnchoredSearchManager *anchoredSearchManager;
@property (nonatomic, readonly) const struct __EmojiLocaleDataWrapper { }*emojiLocaleDataRef;
@property (nonatomic, readonly, copy) NSArray *emojiTokens;
@property (nonatomic, readonly, copy) NSString *localeIdentifier;
@property (nonatomic, readonly, retain) EMFEmojiSearchEngine *searchEngine;

+ (id)emojiLocaleDataWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg1;
+ (id)emojiLocaleDataWithLocaleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_rawSearchEngineReference;
- (id)anchoredSearchManager;
- (unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (struct __EmojiLocaleDataWrapper { }*)emojiLocaleDataRef;
- (id)emojiTokens;
- (id)emojiTokensForOptions:(unsigned long long)arg1 presentationStyle:(int)arg2;
- (id)emojiTokensForText:(id)arg1 phoneticReading:(id)arg2 options:(unsigned long long)arg3 searchType:(int)arg4 includePrefixMatches:(bool)arg5;
- (void)enumerateAnchoredReplacementCandidatesForContext:(id)arg1 withOptions:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSearchResultsInText:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 searchType:(int)arg4 usingBlock:(id /* block */)arg5;
- (id)initWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)localeIdentifier;
- (void)preheatSearchEngine;
- (id)searchEngine;

@end
