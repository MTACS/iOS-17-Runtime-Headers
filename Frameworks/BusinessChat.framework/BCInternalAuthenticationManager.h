
@interface BCInternalAuthenticationManager : NSObject {
    <ACAccountProtocol> * _account;
    <ACAccountStoreProtocol> * _accountStore;
    BCInternalAuthenticationRequest * _authenticationRequest;
}

@property (nonatomic, readonly, copy) NSString *action;
@property (nonatomic, readonly) BCInternalAuthenticationRequest *authenticationRequest;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly) bool isUserSignedIn;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *middleName;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *username;

- (void).cxx_destruct;
- (id)action;
- (id)authenticationRequest;
- (void)fetchCredentials:(id /* block */)arg1;
- (id)firstName;
- (id)initWithAuthenticationRequest:(id)arg1;
- (bool)isUserSignedIn;
- (id)lastName;
- (id)middleName;
- (long long)state;
- (id)subtitle;
- (id)title;
- (id)username;

@end
