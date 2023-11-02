
@interface NLLexicon : NSObject {
    const void * _lexicon;
    NSString * _localization;
}

@property (readonly, copy) NSString *localization;

+ (id)lexiconWithOptions:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_enumerateEntriesForString:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)description;
- (id)entryForString:(id)arg1;
- (id)entryForTokenID:(unsigned int)arg1;
- (void)enumerateCompletionsForPrefix:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)getProbabilityForString:(id)arg1 probability:(double*)arg2;
- (bool)getProbabilityForTokenID:(unsigned int)arg1 probability:(double*)arg2;
- (id)initWithLocalization:(id)arg1;
- (id)initWithLocalization:(id)arg1 error:(id*)arg2;
- (id)language;
- (id)languages;
- (struct _LXLexicon { }*)lexicon;
- (long long)lexiconType;
- (id)localization;

@end
