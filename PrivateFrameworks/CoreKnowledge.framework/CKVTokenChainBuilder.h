
@interface CKVTokenChainBuilder : NSObject {
    NSLocale * _locale;
    NSString * _normalizedString;
    NSMutableArray * _tokens;
}

- (void).cxx_destruct;
- (void)addToken:(id)arg1;
- (id)build;
- (id)init;
- (id)initWithString:(id)arg1 locale:(id)arg2;

@end
