
@interface TTSRegex : NSObject {
    struct pcre2_real_code_8 { } * _compiledPCRERegex;
}

@property (nonatomic) struct pcre2_real_code_8 { }*compiledPCRERegex;

- (id)_matchFromOvector:(unsigned long long*)arg1 matches:(int)arg2 string:(const char *)arg3 length:(unsigned long long)arg4;
- (struct pcre2_real_code_8 { }*)compiledPCRERegex;
- (void)dealloc;
- (void)enumerateMatchesInCString:(const char *)arg1 length:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateMatchesInCString:(const char *)arg1 ranges:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateMatchesInCString:(const char *)arg1 startOffset:(unsigned long long)arg2 length:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)initWithCStringPattern:(const char *)arg1;
- (id)initWithCStringPattern:(const char *)arg1 options:(unsigned long long)arg2;
- (id)initWithPattern:(id)arg1;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithPerlPattern:(id)arg1;
- (id)matchesInCString:(const char *)arg1 length:(unsigned long long)arg2;
- (void)setCompiledPCRERegex:(struct pcre2_real_code_8 { }*)arg1;

@end
