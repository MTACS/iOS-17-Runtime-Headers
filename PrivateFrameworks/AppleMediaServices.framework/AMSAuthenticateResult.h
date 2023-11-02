
@interface AMSAuthenticateResult : NSObject <NSSecureCoding> {
    ACAccount * _account;
    AMSAuthKitUpdateResult * _authKitUpdateResult;
    NSDictionary * _serverResponse;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, retain) AMSAuthKitUpdateResult *authKitUpdateResult;
@property (nonatomic, readonly) NSDictionary *authenticationResults;
@property (nonatomic, readonly) NSDictionary *serverResponse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)authKitUpdateResult;
- (id)authenticationResults;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serverResponse;
- (void)setAuthKitUpdateResult:(id)arg1;

@end
