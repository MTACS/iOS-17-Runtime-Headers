
@interface FPUIAuthenticationCredentialDescriptor : NSObject {
    NSString * _password;
    unsigned long long  _type;
    NSString * _username;
}

@property (nonatomic, copy) NSString *password;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)password;
- (void)setPassword:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUsername:(id)arg1;
- (unsigned long long)type;
- (id)username;

@end
