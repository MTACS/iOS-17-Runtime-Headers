
@interface ASAuthorizationSingleSignOnRequest : ASAuthorizationOpenIDRequest {
    NSArray * _authorizationOptions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    bool  _userInterfaceEnabled;
}

@property (nonatomic, copy) NSArray *authorizationOptions;
@property (getter=isUserInterfaceEnabled, nonatomic) bool userInterfaceEnabled;

- (void).cxx_destruct;
- (id)authorizationOptions;
- (id)initWithProvider:(id)arg1;
- (bool)isUserInterfaceEnabled;
- (void)setAuthorizationOptions:(id)arg1;
- (void)setUserInterfaceEnabled:(bool)arg1;
- (bool)supportsStyle:(long long)arg1;

@end
