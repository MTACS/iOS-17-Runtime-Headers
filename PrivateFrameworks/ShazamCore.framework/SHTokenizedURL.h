
@interface SHTokenizedURL : NSObject <NSCopying> {
    NSString * _host;
    NSString * _originalURLPath;
    NSMutableDictionary * _tokenDictionary;
}

@property (nonatomic, copy) NSString *host;
@property (nonatomic, copy) NSString *originalURLPath;
@property (nonatomic, retain) NSMutableDictionary *tokenDictionary;
@property (nonatomic, readonly, copy) NSString *tokenURLPath;

+ (id)replaceToken:(long long)arg1 withValue:(id)arg2 urlString:(id)arg3;
+ (id)tokenForTokenType:(long long)arg1;

- (void).cxx_destruct;
- (id)URLRepresentation;
- (bool)containsToken:(long long)arg1;
- (bool)containsTokens;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)host;
- (id)initWithHost:(id)arg1 URLPath:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)originalURLPath;
- (void)setHost:(id)arg1;
- (void)setOriginalURLPath:(id)arg1;
- (void)setTokenDictionary:(id)arg1;
- (id)tokenDictionary;
- (id)tokenURLPath;
- (bool)updateToken:(long long)arg1 withValue:(id)arg2;

@end
