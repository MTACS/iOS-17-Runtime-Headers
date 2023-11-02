
@interface AKAuthorizationPresentationContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    AKCredentialRequestContext * _credentialRequestContext;
    NSData * _iconData;
    NSString * _iconName;
    NSNumber * _iconScale;
    NSString * _localizedAppName;
    NSArray * _loginChoices;
    bool  _signInAllowsPCSKeyAccess;
    AKUserInformation * _userInformation;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, retain) AKCredentialRequestContext *credentialRequestContext;
@property (nonatomic, readonly, copy) NSData *iconData;
@property (nonatomic, readonly, copy) NSString *iconName;
@property (nonatomic, readonly, copy) NSNumber *iconScale;
@property (nonatomic, copy) NSString *localizedAppName;
@property (nonatomic, copy) NSArray *loginChoices;
@property (nonatomic) bool signInAllowsPCSKeyAccess;
@property (nonatomic, retain) AKUserInformation *userInformation;

+ (id)presentationContextForRequestContext:(id)arg1 client:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addPresentationParametersForContext:(id)arg1;
- (void)_addPresenterParameters;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialRequestContext;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconData;
- (id)iconName;
- (id)iconScale;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 bundleID:(id)arg2;
- (id)initWithContext:(id)arg1 client:(id)arg2;
- (id)initWithUsername:(id)arg1;
- (id)localizedAppName;
- (id)loginChoices;
- (void)setBundleID:(id)arg1;
- (void)setCredentialRequestContext:(id)arg1;
- (void)setLocalizedAppName:(id)arg1;
- (void)setLoginChoices:(id)arg1;
- (void)setSignInAllowsPCSKeyAccess:(bool)arg1;
- (void)setUserInformation:(id)arg1;
- (bool)signInAllowsPCSKeyAccess;
- (id)userInformation;

@end
