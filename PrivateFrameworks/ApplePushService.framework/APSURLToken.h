
@interface APSURLToken : NSObject <NSCopying, NSSecureCoding> {
    NSData * _token;
    NSString * _tokenURL;
}

@property (nonatomic, retain) NSData *token;
@property (nonatomic, retain) NSString *tokenURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTokenURL:(id)arg1 token:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setTokenURL:(id)arg1;
- (id)token;
- (id)tokenURL;

@end
