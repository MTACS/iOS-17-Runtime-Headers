
@interface FMOwnerAccount : NSObject <FMOwnerAccountIdentity> {
    ACAccount * _account;
    NSString * _authToken;
    NSString * _firstName;
    NSString * _hostName;
    NSString * _lastName;
    bool  _legacyBehavior;
    NSString * _personId;
    NSString * _username;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly, copy) NSString *authToken;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *hostName;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic) bool legacyBehavior;
@property (nonatomic, copy) NSString *personId;
@property (nonatomic, copy) NSString *username;

+ (id)authTokenForSubAccount:(id)arg1 type:(long long)arg2 error:(id*)arg3;
+ (id)hostNameForAccount:(id)arg1 type:(long long)arg2;
+ (id)ownerAccount;
+ (id)ownerAccountWithType:(long long)arg1;
+ (id)personIdForAccount:(id)arg1 error:(id*)arg2;
+ (id)primaryAccountWithStore:(id)arg1 error:(id*)arg2;
+ (void)renewCredentialsWithBundleId:(id)arg1 force:(bool)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
+ (id)sharedInstance;
+ (id)subAccountForAccount:(id)arg1 type:(long long)arg2;

- (void).cxx_destruct;
- (id)account;
- (void)accountChanged;
- (id)authToken;
- (void)dealloc;
- (id)description;
- (id)firstName;
- (id)hostName;
- (id)hostNameOfType:(long long)arg1;
- (id)init;
- (id)initWithAuthToken:(id)arg1 personId:(id)arg2;
- (void)initializeAccount;
- (id)lastName;
- (bool)legacyBehavior;
- (id)personId;
- (void)setAccount:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setHostName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLegacyBehavior:(bool)arg1;
- (void)setPersonId:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)tokenOfType:(long long)arg1;
- (id)username;

@end
