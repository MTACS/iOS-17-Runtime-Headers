
@interface HostnameFormatter : APFormatter

+ (id)hostnameFormatter:(unsigned long long)arg1;
+ (id)hostnameSet;

- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;

@end
