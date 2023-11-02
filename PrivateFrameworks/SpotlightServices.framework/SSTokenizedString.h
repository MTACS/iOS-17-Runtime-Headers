
@interface SSTokenizedString : NSObject {
    NSString * _locale;
    NSString * _original;
    bool  _shouldTokenize;
    NSArray * _tokens;
}

@property (retain) NSString *locale;
@property (retain) NSString *original;
@property (retain) NSArray *tokens;

- (void).cxx_destruct;
- (bool)hasPrefixForMatchInfoToken:(id)arg1;
- (id)initWithString:(id)arg1 locale:(id)arg2;
- (id)locale;
- (id)original;
- (void)setLocale:(id)arg1;
- (void)setOriginal:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)tokenMatchForMatchInfoToken:(id)arg1;
- (id)tokenize;
- (id)tokens;

@end
