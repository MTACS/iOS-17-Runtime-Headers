
@interface AMSUIWebVerifyCredentialsAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    ACAccount * _account;
    NSString * _authenticationType;
    NSString * _buttonText;
    bool  _ephemeral;
    NSString * _serviceIdentifier;
    long long  _serviceType;
    NSString * _subtitle;
    NSString * _title;
    bool  _usernameEditable;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSString *authenticationType;
@property (nonatomic, retain) NSString *buttonText;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool ephemeral;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) long long serviceType;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) bool usernameEditable;

+ (id)_authenticationTypeFromStringedType:(id)arg1;
+ (long long)_serviceTypeFromType:(long long)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)authenticationType;
- (id)buttonText;
- (bool)ephemeral;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (id)serviceIdentifier;
- (long long)serviceType;
- (void)setAccount:(id)arg1;
- (void)setAuthenticationType:(id)arg1;
- (void)setButtonText:(id)arg1;
- (void)setEphemeral:(bool)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsernameEditable:(bool)arg1;
- (id)subtitle;
- (id)title;
- (bool)usernameEditable;

@end
