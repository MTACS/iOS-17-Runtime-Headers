
@interface UTF8Formatter : APFormatter {
    unsigned long long  _maxByteCount;
}

+ (id)afpFormatter:(unsigned long long)arg1;
+ (id)afpSet;
+ (id)utf8Formatter;
+ (id)utf8Formatter:(unsigned long long)arg1;
+ (id)utf8FormatterWithMaxByteCount:(unsigned long long)arg1 maxLength:(unsigned long long)arg2;

- (id)initAFPFormatterWithLength:(unsigned long long)arg1;
- (id)initWithMaxByteCount:(unsigned long long)arg1 maxLength:(unsigned long long)arg2;
- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (unsigned long long)maxByteCount;
- (void)setMaxByteCount:(unsigned long long)arg1;

@end
