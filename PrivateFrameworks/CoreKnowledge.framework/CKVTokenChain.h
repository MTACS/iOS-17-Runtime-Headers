
@interface CKVTokenChain : NSObject <KVTokenChain, NSCopying, NSSecureCoding> {
    NSLocale * _locale;
    NSString * _normalizedString;
    NSArray * _tokens;
}

@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) NSString *normalizedString;
@property (nonatomic, readonly) NSArray *tokens;

+ (bool)supportsSecureCoding;
+ (id)tokenChainBuilderForString:(id)arg1 locale:(id)arg2;

- (void).cxx_destruct;
- (id)cleanText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateTokensUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 locale:(id)arg2 tokens:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTokenChain:(id)arg1;
- (id)locale;
- (id)normalizedString;
- (id)tokens;

@end
