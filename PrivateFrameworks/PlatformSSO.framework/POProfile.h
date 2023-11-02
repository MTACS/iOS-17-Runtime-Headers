
@interface POProfile : NSObject {
    NSArray * _URLPrefix;
    NSString * _accountDisplayName;
    NSArray * _administratorGroups;
    int  _authenticationMethod;
    bool  _authorizationEnabled;
    NSDictionary * _authorizationGroups;
    bool  _createUsersEnabled;
    NSString * _extensionBundleIdentifier;
    NSDictionary * _extensionData;
    NSNumber * _loginFrequency;
    long long  _newUserAuthorizationMode;
    NSArray * _otherGroups;
    SOFullProfile * _profile;
    NSString * _registrationToken;
    NSDictionary * _tokenToUserMapping;
    bool  _useSharedDeviceKeys;
    long long  _userAuthorizationMode;
}

@property (nonatomic, readonly) NSArray *URLPrefix;
@property (nonatomic, readonly) NSString *accountDisplayName;
@property (nonatomic, readonly) NSArray *administratorGroups;
@property (readonly) int authenticationMethod;
@property bool authorizationEnabled;
@property (nonatomic, readonly) NSDictionary *authorizationGroups;
@property bool createUsersEnabled;
@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *extensionData;
@property (nonatomic, retain) NSNumber *loginFrequency;
@property (readonly) long long newUserAuthorizationMode;
@property (nonatomic, readonly) NSArray *otherGroups;
@property (nonatomic, copy) SOFullProfile *profile;
@property (nonatomic, readonly) NSString *registrationToken;
@property (nonatomic, readonly) NSDictionary *tokenToUserMapping;
@property bool useSharedDeviceKeys;
@property (readonly) long long userAuthorizationMode;

- (void).cxx_destruct;
- (id)URLPrefix;
- (id)accountDisplayName;
- (id)administratorGroups;
- (int)authenticationMethod;
- (bool)authorizationEnabled;
- (id)authorizationGroups;
- (bool)createUsersEnabled;
- (id)extensionBundleIdentifier;
- (id)extensionData;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)loginFrequency;
- (long long)newUserAuthorizationMode;
- (id)otherGroups;
- (id)profile;
- (id)registrationToken;
- (void)setAuthorizationEnabled:(bool)arg1;
- (void)setCreateUsersEnabled:(bool)arg1;
- (void)setLoginFrequency:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setUseSharedDeviceKeys:(bool)arg1;
- (id)tokenToUserMapping;
- (bool)useSharedDeviceKeys;
- (long long)userAuthorizationMode;

@end
