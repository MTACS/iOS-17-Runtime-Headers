
@interface DSFaceIDController : DSOBWelcomeController <BKUIPearlEnrollControllerDelegate, DSController> {
    CIDVUIBiometricBindingFlowManager * __biometricBindingFlowManager;
    LAContext * _authContext;
    OBBoldTrayButton * _boldButton;
    <DSNavigationDelegate> * _delegate;
    UINavigationController * _faceIDEnrollmentNavigationController;
}

@property (nonatomic, retain) CIDVUIBiometricBindingFlowManager *_biometricBindingFlowManager;
@property (nonatomic, retain) LAContext *authContext;
@property (nonatomic, retain) OBBoldTrayButton *boldButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UINavigationController *faceIDEnrollmentNavigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)hasAlternateAppearance;
+ (bool)isPearlEnrolled;
+ (id)pearlIdentities;
+ (bool)supportsPearl;

- (void).cxx_destruct;
- (id)_biometricBindingFlowManager;
- (void)_didTapCancelButton;
- (id)authContext;
- (void)beginFaceIDEnrollment;
- (id)boldButton;
- (void)configurePeriocularEnabled:(bool)arg1;
- (id)delegate;
- (void)deleteAllIdentities;
- (void)deleteGlobalAuthACL;
- (id)faceIDEnrollmentNavigationController;
- (id)init;
- (void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2;
- (void)resetFaceID;
- (void)setAuthContext:(id)arg1;
- (void)setBoldButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFaceIDEnrollmentNavigationController:(id)arg1;
- (void)set_biometricBindingFlowManager:(id)arg1;
- (void)shouldShowWithCompletion:(id /* block */)arg1;
- (void)updateFaceIDPaneConfiguration;
- (void)viewDidLoad;

@end
