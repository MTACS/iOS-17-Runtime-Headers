
@interface PRLexicon : NSObject {
    const void * _lexicon;
    NSString * _localization;
    NSString * _name;
    NSString * _unigramsPath;
}

@property (readonly) NSString *name;

+ (id)lexiconWithLexicon:(const void*)arg1;
+ (id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2;
+ (id)lexiconWithName:(id)arg1 words:(id)arg2;

- (id)createCursor;
- (void)dealloc;
- (id)description;
- (void)enumerateCompletionEntriesForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateCorrectionEntriesForWord:(id)arg1 maxCorrections:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateEntriesForString:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)getProbabilityForString:(id)arg1 probability:(double*)arg2;
- (bool)getProbabilityForTokenID:(unsigned int)arg1 probability:(double*)arg2;
- (id)initWithLexicon:(const void*)arg1;
- (id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2;
- (id)initWithName:(id)arg1 words:(id)arg2;
- (struct _LXLexicon { }*)lexicon;
- (id)name;
- (id)stringForTokenID:(unsigned int)arg1;
- (unsigned int)tokenIDForString:(id)arg1;

@end
