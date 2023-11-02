
@interface WFPasswordAccount : WFAccount {
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *username;

+ (id)accountWithUsername:(id)arg1 password:(id)arg2;

- (void).cxx_destruct;
- (bool)isValid;
- (id)localizedName;
- (id)password;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
