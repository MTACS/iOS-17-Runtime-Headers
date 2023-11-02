
@interface AISAppleIDSignInConfiguration : NSObject {
    void aidaServiceContext;
    void allowSkip;
    void canEditUsername;
    void isProximitySetupEnabled;
    void privacyLinkIdentifiers;
    void serviceTypes;
    void shouldShowSystemBackButton;
    void signInFlowType;
    void username;
}

@property (nonatomic, retain) AIDAServiceContext *aidaServiceContext;
@property (nonatomic) bool allowSkip;
@property (nonatomic) bool canEditUsername;
@property (nonatomic) bool isProximitySetupEnabled;
@property (nonatomic, copy) NSArray *privacyLinkIdentifiers;
@property (nonatomic, copy) NSArray *serviceTypes;
@property (nonatomic) bool shouldShowSystemBackButton;
@property (nonatomic) long long signInFlowType;
@property (nonatomic, copy) NSString *username;

+ (id)defaultPrivacyIdentifier;
+ (id)defaultServiceTypes;

- (void).cxx_destruct;
- (id)aidaServiceContext;
- (bool)allowSkip;
- (bool)canEditUsername;
- (id)init;
- (bool)isProximitySetupEnabled;
- (id)privacyLinkIdentifiers;
- (id)serviceTypes;
- (void)setAidaServiceContext:(id)arg1;
- (void)setAllowSkip:(bool)arg1;
- (void)setCanEditUsername:(bool)arg1;
- (void)setIsProximitySetupEnabled:(bool)arg1;
- (void)setPrivacyLinkIdentifiers:(id)arg1;
- (void)setServiceTypes:(id)arg1;
- (void)setShouldShowSystemBackButton:(bool)arg1;
- (void)setSignInFlowType:(long long)arg1;
- (void)setUsername:(id)arg1;
- (bool)shouldShowSystemBackButton;
- (long long)signInFlowType;
- (id)username;

@end
