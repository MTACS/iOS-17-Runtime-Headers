
@interface AMSAuthKitUpdateResult : NSObject <NSSecureCoding> {
    ACAccount * _account;
    NSDictionary * _authenticationResults;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSDictionary *authenticationResults;
@property (nonatomic, readonly) unsigned long long credentialSource;

+ (id)_createUpdatedAccount:(id)arg1 usingAuthenticationResults:(id)arg2 options:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)authenticationResults;
- (unsigned long long)credentialSource;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 credentialSource:(unsigned long long)arg3 options:(id)arg4;
- (id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 options:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end
