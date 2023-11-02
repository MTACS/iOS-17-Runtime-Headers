
@interface UNCPushRegistration : NSObject <NSCopying> {
    NSString * _environment;
    NSData * _token;
    NSString * _tokenIdentifier;
}

@property (nonatomic, readonly, copy) NSString *environment;
@property (nonatomic, readonly, copy) NSData *token;
@property (nonatomic, readonly, copy) NSString *tokenIdentifier;

+ (id)pushRegistrationWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environment;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithEnvironment:(id)arg1 tokenIdentifier:(id)arg2 token:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)token;
- (id)tokenIdentifier;

@end
