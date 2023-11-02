
@protocol KVTokenChain

@required

- (NSString *)cleanText;
- (void)enumerateTokensUsingBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<KVToken> *, unsigned long long, bool*, void*
- (NSLocale *)locale;

@end
