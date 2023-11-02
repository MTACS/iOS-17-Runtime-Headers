
@interface DMCEnrollmentInterface : NSObject {
    DMCAccountSpecifierProvider * _accountSpecifierProvider;
    DMCEnrollmentFlowController * _enrollmentFlowController;
    id /* block */  _enrollmentResultBlock;
    bool  _isUpdatingEnrollment;
    <DMCEnrollmentFlowMCBridge> * _mcHelper;
    UIViewController * _parentViewController;
    DMCUnenrollmentFlowController * _unenrollmentFlowController;
}

@property (nonatomic, retain) DMCAccountSpecifierProvider *accountSpecifierProvider;
@property (nonatomic, retain) DMCEnrollmentFlowController *enrollmentFlowController;
@property (nonatomic, copy) id /* block */ enrollmentResultBlock;
@property (nonatomic) bool isUpdatingEnrollment;
@property (nonatomic, retain) <DMCEnrollmentFlowMCBridge> *mcHelper;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) DMCUnenrollmentFlowController *unenrollmentFlowController;

+ (id)accountControllerFromSpecifier:(id)arg1 baseViewController:(id)arg2 preferiCloudAccount:(bool)arg3;
+ (Class)preferredViewControllerClassForAccount:(id)arg1 preferiCloudAccount:(bool)arg2;

- (void).cxx_destruct;
- (id)_specifiersForManagedAccountSignIn;
- (id)accountSpecifierProvider;
- (id)enrollmentFlowController;
- (id /* block */)enrollmentResultBlock;
- (id)initFromViewController:(id)arg1 enrollmentResultBlock:(id /* block */)arg2;
- (id)initFromViewController:(id)arg1 enrollmentResultBlock:(id /* block */)arg2 managedConfigurationHelper:(id)arg3;
- (bool)isUpdatingEnrollment;
- (id)mcHelper;
- (id)parentViewController;
- (void)setAccountSpecifierProvider:(id)arg1;
- (void)setEnrollmentFlowController:(id)arg1;
- (void)setEnrollmentResultBlock:(id /* block */)arg1;
- (void)setIsUpdatingEnrollment:(bool)arg1;
- (void)setMcHelper:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setUnenrollmentFlowController:(id)arg1;
- (id)specifiersForManagedAccounts;
- (void)startBYODEnrollment;
- (void)startReauthWithRMAccountID:(id)arg1;
- (void)startUnenrollmentWithAltDSID:(id)arg1 silent:(bool)arg2;
- (id)unenrollmentFlowController;

@end
