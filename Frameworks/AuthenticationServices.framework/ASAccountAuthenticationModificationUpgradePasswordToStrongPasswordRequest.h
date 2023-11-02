
@interface ASAccountAuthenticationModificationUpgradePasswordToStrongPasswordRequest : ASAccountAuthenticationModificationRequest {
    NSExtension * _extension;
    NSString * _password;
    ASCredentialServiceIdentifier * _serviceIdentifier;
    NSString * _user;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) ASCredentialServiceIdentifier *serviceIdentifier;
@property (nonatomic, readonly) NSString *user;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)extension;
- (id)initWithUser:(id)arg1 password:(id)arg2 extension:(id)arg3 serviceIdentifier:(id)arg4 userInfo:(id)arg5;
- (id)initWithUser:(id)arg1 serviceIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)password;
- (id)serviceIdentifier;
- (id)user;
- (id)userInfo;

@end
