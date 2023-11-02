
@interface CVNLPDecodingLexicon : NSObject {
    struct _LXCursor { } * __rootCursor;
    struct _LXLexicon { } * _lexicon;
    unsigned long long  _priority;
}

@property (nonatomic, readonly) struct _LXCursor { }*_rootCursor;
@property (nonatomic, readonly) struct _LXLexicon { }*lexicon;
@property (nonatomic, readonly) unsigned long long priority;

+ (struct _LXLexicon { }*)_createLexiconForLocale:(id)arg1;
+ (id)decodingLexiconForLocale:(id)arg1;
+ (id)decodingLexiconForLocale:(id)arg1 priority:(unsigned long long)arg2;

- (struct _LXCursor { }*)_rootCursor;
- (void)dealloc;
- (id)initWithLexicon:(struct _LXLexicon { }*)arg1;
- (id)initWithLexicon:(struct _LXLexicon { }*)arg1 priority:(unsigned long long)arg2;
- (struct _LXLexicon { }*)lexicon;
- (unsigned long long)priority;

@end
