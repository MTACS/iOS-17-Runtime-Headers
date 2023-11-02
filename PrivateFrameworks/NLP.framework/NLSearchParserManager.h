
@interface NLSearchParserManager : NSObject {
    void * _parser;
}

+ (id)availableLanguages;
+ (id)defaultManager;

- (void)dealloc;
- (void)enumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateDateRangeAttributedParseForOptions:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateSearchSuggestions:(id)arg1 options:(id)arg2 withBlock:(id /* block */)arg3;
- (id)initWithLocale:(id)arg1 context:(id)arg2 options:(id)arg3;
- (id)initWithOptions:(id)arg1;
- (id)tokenizeAndEnumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(id /* block */)arg3;

@end
