
@interface WEPKeyFormatter : UTF8Formatter

+ (id)sharedWEPKeyFormatter;
+ (id)wepKeyFormatter:(unsigned long long)arg1;

- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;

@end