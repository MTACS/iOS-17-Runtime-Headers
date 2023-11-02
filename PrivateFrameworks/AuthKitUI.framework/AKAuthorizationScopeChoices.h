
@interface AKAuthorizationScopeChoices : NSObject {
    unsigned long long  _emailCount;
    unsigned long long  _indexOfChosenEmail;
    unsigned long long  _indexOfChosenLogin;
    NSArray * _scopes;
    <AKCredentialRequestProtocol> * _selectedRequest;
    AKUserInformation * _userInformation;
    bool  _wantsPrivateEmail;
}

@property (nonatomic, readonly) NSString *chosenEmail;
@property (nonatomic, readonly) unsigned long long emailCount;
@property (nonatomic, readonly) NSString *forwardingEmail;
@property (nonatomic) unsigned long long indexOfChosenEmail;
@property (nonatomic) unsigned long long indexOfChosenLogin;
@property (nonatomic, readonly) NSString *localizedChosenEmail;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) unsigned long long personNameComponentsOrder;
@property (nonatomic, copy) NSArray *scopes;
@property (nonatomic, retain) <AKCredentialRequestProtocol> *selectedRequest;
@property (nonatomic, copy) AKUserInformation *userInformation;
@property (nonatomic, readonly) AKAuthorizationUserResponse *userResponse;
@property (nonatomic) bool wantsPrivateEmail;

+ (id)_dotsWithLength:(unsigned long long)arg1;
+ (id)localizedFamilyNameLabel;
+ (id)localizedGivenNameLabel;
+ (id)obfuscatedEmail:(id)arg1;

- (void).cxx_destruct;
- (id)_personNameComponents;
- (id)_userSelection;
- (id)chosenEmail;
- (id)description;
- (id)emailAtIndex:(unsigned long long)arg1;
- (unsigned long long)emailCount;
- (id)forwardingEmail;
- (unsigned long long)indexOfChosenEmail;
- (unsigned long long)indexOfChosenLogin;
- (id)initWithScopes:(id)arg1 userInformation:(id)arg2;
- (id)localizedChosenEmail;
- (id)localizedName;
- (unsigned long long)personNameComponentsOrder;
- (id)scopes;
- (id)selectedRequest;
- (void)setGivenName:(id)arg1 familyName:(id)arg2;
- (void)setIndexOfChosenEmail:(unsigned long long)arg1;
- (void)setIndexOfChosenLogin:(unsigned long long)arg1;
- (void)setScopes:(id)arg1;
- (void)setSelectedRequest:(id)arg1;
- (void)setUserInformation:(id)arg1;
- (void)setWantsPrivateEmail:(bool)arg1;
- (id)userInformation;
- (id)userResponse;
- (bool)wantsPrivateEmail;

@end
