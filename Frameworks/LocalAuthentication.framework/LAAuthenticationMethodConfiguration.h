
@interface LAAuthenticationMethodConfiguration : NSObject {
    NSArray * _allowedUsers;
    LAContext * _authenticationContext;
}

@property (nonatomic, readonly) NSArray *allowedUsers;
@property (nonatomic, readonly) LAContext *authenticationContext;

- (void).cxx_destruct;
- (id)allowedUsers;
- (id)authenticationContext;
- (id)initWithAllowedUsers:(id)arg1 authenticationContext:(id)arg2;

@end
