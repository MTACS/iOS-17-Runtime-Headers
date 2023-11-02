
@interface PKAccountWebServiceUpdateAccountUserPreferencesRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    unsigned long long  _accountUserAccessLevel;
    NSString * _accountUserAltDSID;
    PKAccountUserPreferences * _accountUserPreferences;
    NSURL * _baseURL;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) unsigned long long accountUserAccessLevel;
@property (nonatomic, copy) NSString *accountUserAltDSID;
@property (nonatomic, retain) PKAccountUserPreferences *accountUserPreferences;
@property (nonatomic, retain) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (unsigned long long)accountUserAccessLevel;
- (id)accountUserAltDSID;
- (id)accountUserPreferences;
- (id)baseURL;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountUserAccessLevel:(unsigned long long)arg1;
- (void)setAccountUserAltDSID:(id)arg1;
- (void)setAccountUserPreferences:(id)arg1;
- (void)setBaseURL:(id)arg1;

@end
