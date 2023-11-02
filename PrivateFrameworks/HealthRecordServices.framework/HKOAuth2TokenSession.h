
@interface HKOAuth2TokenSession : NSObject <NSCopying, NSSecureCoding> {
    NSString * _code;
    NSString * _pkceVerifier;
    NSString * _query;
    NSString * _requestedScope;
    NSUUID * _state;
}

@property (nonatomic, readonly, copy) NSString *code;
@property (nonatomic, readonly, copy) NSString *pkceVerifier;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly, copy) NSString *requestedScope;
@property (nonatomic, readonly, copy) NSUUID *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCode:(id)arg1 query:(id)arg2 requestedScope:(id)arg3 state:(id)arg4;
- (id)initWithCode:(id)arg1 query:(id)arg2 requestedScope:(id)arg3 state:(id)arg4 pkceVerifier:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pkceVerifier;
- (id)query;
- (id)requestedScope;
- (id)state;

@end
