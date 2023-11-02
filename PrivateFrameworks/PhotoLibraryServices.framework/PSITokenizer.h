
@interface PSITokenizer : NSObject {
    NSMutableDictionary * _cache;
    NSLocale * _locale;
    void * _tagger;
    bool  _useCache;
}

@property (nonatomic, retain) NSLocale *locale;

+ (id)fts5StringFromString:(id)arg1 forMatchType:(unsigned long long)arg2;
+ (id)fts5StringFromString:(id)arg1 useWildcard:(bool)arg2;
+ (id)ftsTokenizerName;

- (void).cxx_destruct;
- (void)_tokenizeString:(id)arg1 withContext:(struct { struct __CFString {} *x1; long long x2; struct tokenOutput_t {} *x3; unsigned short *x4; unsigned short *x5; long long x6; }*)arg2;
- (void)dealloc;
- (id)initWithLocale:(id)arg1 useCache:(bool)arg2;
- (id)locale;
- (id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id*)arg3 error:(id*)arg4;
- (id)normalizeString:(id)arg1;
- (int)registerFTS5TokenizerForDatabase:(struct sqlite3 { }*)arg1;
- (void)setLocale:(id)arg1;
- (void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(struct tokenOutput_t { id x1; id x2; id x3; struct { /* ? */ } *x4; long long x5; long long x6; struct { /* ? */ } *x7; long long x8; long long x9; }*)arg3;

@end
