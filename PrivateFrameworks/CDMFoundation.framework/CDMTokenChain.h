
@interface CDMTokenChain : NSObject <NSCopying> {
    NSMutableArray * _characterToTokenIndexMapping;
    NSString * _locale;
    NSString * _string;
    NSMutableArray * _tokens;
}

@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSArray *tokens;

+ (id)convertCDMTokenChainToProtoTokenChain:(id)arg1;

- (void).cxx_destruct;
- (void)addToken:(id)arg1;
- (id)cleanStringFromToken:(long long)arg1 toToken:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dropInsignificantTokens;
- (id)dropWhitespaceTokens;
- (id)extractTokens;
- (id)initWithProtoTokenChain:(id)arg1;
- (id)initWithString:(id)arg1 locale:(id)arg2;
- (id)initWithString:(id)arg1 locale:(id)arg2 tokens:(id)arg3;
- (id)locale;
- (unsigned int)nonWhiteSpaceCountFromToken:(long long)arg1 toToken:(long long)arg2;
- (id)normalizedString;
- (id)string;
- (int)tokenIndexFromCharacterIndex:(long long)arg1;
- (id)tokens;

@end
