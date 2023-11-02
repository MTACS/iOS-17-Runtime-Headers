
@interface SGRe2Basic : SGRe2 {
    bool  _isTrivial;
    void * _pattern;
    NSData * _patternData;
}

- (void).cxx_destruct;
- (int)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)dealloc;
- (id)description;
- (void)enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)existsInUtf8:(const char *)arg1;
- (id)hashId;
- (id)initWithRegexp:(id)arg1;
- (id)initWithRegexpData:(id)arg1;
- (id)matchesUtf8:(const char *)arg1;

@end
