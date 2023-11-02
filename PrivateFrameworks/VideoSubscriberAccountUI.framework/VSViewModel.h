
@interface VSViewModel : NSObject {
    bool  _authenticationShare;
    NSError * _error;
    VSIdentityProvider * _identityProvider;
    bool  _preValidate;
    NSString * _title;
    long long  _userInterfaceStyle;
    unsigned long long  _validationState;
    unsigned long long  _viewState;
}

@property (getter=isInAuthenticationShareFlow, nonatomic) bool authenticationShare;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) VSIdentityProvider *identityProvider;
@property (getter=shouldPreValidate, nonatomic) bool preValidate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) unsigned long long validationState;
@property (nonatomic) unsigned long long viewState;

- (void).cxx_destruct;
- (void)configureWithRequest:(id)arg1;
- (id)error;
- (id)identityProvider;
- (id)init;
- (bool)isInAuthenticationShareFlow;
- (void)setAuthenticationShare:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setPreValidate:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)setValidationState:(unsigned long long)arg1;
- (void)setViewState:(unsigned long long)arg1;
- (bool)shouldPreValidate;
- (id)title;
- (long long)userInterfaceStyle;
- (unsigned long long)validationState;
- (unsigned long long)viewState;

@end
