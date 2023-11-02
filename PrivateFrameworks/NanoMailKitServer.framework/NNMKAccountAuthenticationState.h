
@interface NNMKAccountAuthenticationState : NSObject {
    NSString * _accountId;
    NSString * _displayName;
    NSString * _emailAddressToken;
    unsigned long long  _state;
    NSString * _subsectionId;
}

@property (nonatomic, copy) NSString *accountId;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *emailAddressToken;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSString *subsectionId;

- (void).cxx_destruct;
- (id)accountId;
- (id)displayName;
- (id)emailAddressToken;
- (void)setAccountId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddressToken:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSubsectionId:(id)arg1;
- (unsigned long long)state;
- (id)subsectionId;

@end
