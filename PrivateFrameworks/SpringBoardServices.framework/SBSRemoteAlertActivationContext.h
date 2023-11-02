
@interface SBSRemoteAlertActivationContext : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, NSCopying, NSSecureCoding> {
    NSSet * _actions;
    bool  _activatingForSiri;
    NSUUID * _activityContinuationIdentifier;
    unsigned long long  _initialSupportedInterfaceOrientations;
    NSDictionary * _legacyAlertOptions;
    long long  _presentationMode;
    SBSRemoteAlertPresentationTarget * _presentationTarget;
    NSString * _reason;
    bool  _shouldDismissPresentedBanners;
    bool  _shouldInvalidateWhenDeactivated;
    bool  _shouldStashPictureInPictureIfNeeded;
    bool  _switcherEligible;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSSet *actions;
@property (getter=isActivatingForSiri, nonatomic) bool activatingForSiri;
@property (nonatomic, copy) NSUUID *activityContinuationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long initialSupportedInterfaceOrientations;
@property (nonatomic, copy) NSDictionary *legacyAlertOptions;
@property (nonatomic) long long presentationMode;
@property (nonatomic, retain) SBSRemoteAlertPresentationTarget *presentationTarget;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) bool shouldDismissPresentedBanners;
@property (nonatomic) bool shouldInvalidateWhenDeactivated;
@property (nonatomic) bool shouldStashPictureInPictureIfNeeded;
@property (readonly) Class superclass;
@property (getter=isSwitcherEligible, nonatomic) bool switcherEligible;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)activationContextWithLegacyAlertOptions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)activityContinuationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithActions:(id)arg1;
- (id)initWithActions:(id)arg1 presentationTarget:(id)arg2;
- (id)initWithActions:(id)arg1 presentationTarget:(id)arg2 userInfo:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned long long)initialSupportedInterfaceOrientations;
- (bool)isActivatingForSiri;
- (bool)isSwitcherEligible;
- (id)legacyAlertOptions;
- (long long)presentationMode;
- (id)presentationTarget;
- (id)reason;
- (void)setActions:(id)arg1;
- (void)setActivatingForSiri:(bool)arg1;
- (void)setActivityContinuationIdentifier:(id)arg1;
- (void)setInitialSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)setLegacyAlertOptions:(id)arg1;
- (void)setPresentationMode:(long long)arg1;
- (void)setPresentationTarget:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setShouldDismissPresentedBanners:(bool)arg1;
- (void)setShouldInvalidateWhenDeactivated:(bool)arg1;
- (void)setShouldStashPictureInPictureIfNeeded:(bool)arg1;
- (void)setSwitcherEligible:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldDismissPresentedBanners;
- (bool)shouldInvalidateWhenDeactivated;
- (bool)shouldStashPictureInPictureIfNeeded;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userInfo;

@end
