
@interface CNUICoreEditAuthorizationCheck : NSObject {
    CNContact * _contact;
    bool  _ignoresParentalRestrictions;
    <CNUICoreParentContainerProvider> * _linkedParentContainerProvider;
    CNContainer * _parentContainer;
    <CNUICoreScreentimePasscodeCheck> * _screenTimePasscodeStatusCheck;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) bool ignoresParentalRestrictions;
@property (nonatomic, readonly) <CNUICoreParentContainerProvider> *linkedParentContainerProvider;
@property (nonatomic, readonly) CNContainer *parentContainer;
@property (nonatomic, readonly) <CNUICoreScreentimePasscodeCheck> *screenTimePasscodeStatusCheck;

+ (id)containerProviderWithContactStore:(id)arg1;
+ (bool)isAuthorizationPasscodeEnabledOnDevice;
+ (id)log;

- (void).cxx_destruct;
- (bool)authorizationPasscodeEnabledOnDevice;
- (bool)canPerformValidAuthorizationCheck;
- (id)contact;
- (bool)editAltersRestrictedInformation;
- (bool)ignoresParentalRestrictions;
- (id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(bool)arg3;
- (id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(bool)arg3 linkedParentContainerProvider:(id)arg4;
- (id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(bool)arg3 screenTimePasscodeStatusCheck:(id)arg4 linkedParentContainerProvider:(id)arg5;
- (id)linkedParentContainerProvider;
- (id)parentContainer;
- (id)screenTimePasscodeStatusCheck;
- (bool)shouldBypassRestrictionsGivenAuthorizationResult:(long long)arg1;
- (bool)shouldPromptForPasscodeAuthorization;
- (bool)shouldRespectParentalRestrictions;

@end
