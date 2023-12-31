
@interface SGRe2Lazy : SGRe2 {
    NSData * _regexp;
}

- (void).cxx_destruct;
- (int)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)description;
- (id)existsInUtf8:(const char *)arg1;
- (id)hashId;
- (id)initWithRegexp:(id)arg1;
- (id)initWithRegexpData:(id)arg1;
- (id)matchesUtf8:(const char *)arg1;

@end
