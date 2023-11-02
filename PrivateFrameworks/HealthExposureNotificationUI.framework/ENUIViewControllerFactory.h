
@interface ENUIViewControllerFactory : NSObject {
    void inflightOnboardingStack;
    void inflightPreAuthorizationStack;
    void inflightVerificationStack;
}

@property (nonatomic) UIViewController *inflightOnboardingStack;
@property (nonatomic) UIViewController *inflightPreAuthorizationStack;
@property (nonatomic) UIViewController *inflightVerificationStack;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)createAnalyticsConsentStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 completion:(id /* block */)arg3;
- (id)createKeyReleaseDialogueWithBundleIdentifier:(id)arg1 region:(id)arg2 completion:(id /* block */)arg3;
- (id)createOnboardingStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 fromAvailabilityAlert:(bool)arg3 fromDeepLink:(bool)arg4 subsequentFlow:(long long)arg5 completion:(id /* block */)arg6;
- (id)createPreApprovalDialogueWithBundleIdentifier:(id)arg1 region:(id)arg2 completion:(id /* block */)arg3;
- (id)createPreAuthorizationStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 completion:(id /* block */)arg3;
- (id)createTurndownStackWithEnteredFromMainScreen:(bool)arg1 completion:(id /* block */)arg2;
- (id)createVerificationStackForAgencyModel:(id)arg1 exposureManager:(id)arg2 sessionIdentifier:(id)arg3 reportType:(unsigned int)arg4 enteredFromMainScreen:(bool)arg5 completion:(id /* block */)arg6;
- (id)inflightOnboardingStack;
- (id)inflightPreAuthorizationStack;
- (id)inflightVerificationStack;
- (id)init;
- (void)setInflightOnboardingStack:(id)arg1;
- (void)setInflightPreAuthorizationStack:(id)arg1;
- (void)setInflightVerificationStack:(id)arg1;

@end
