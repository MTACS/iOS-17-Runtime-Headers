
@interface DMCUnenrollmentFlowController : DMCEnrollmentFlowControllerBase {
    NSString * _altDSID;
    bool  _isAppleMAID;
    <DMCEnrollmentFlowMCBridge> * _managedConfigurationHelper;
    NSString * _personaID;
    <DMCUnenrollmentFlowPresenter> * _presenter;
    NSString * _profileIdentifier;
    id /* block */  _unenrollmentCompletionHandler;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic) bool isAppleMAID;
@property (nonatomic, retain) <DMCEnrollmentFlowMCBridge> *managedConfigurationHelper;
@property (nonatomic, copy) NSString *personaID;
@property (nonatomic, retain) <DMCUnenrollmentFlowPresenter> *presenter;
@property (nonatomic, retain) NSString *profileIdentifier;
@property (nonatomic, copy) id /* block */ unenrollmentCompletionHandler;

- (void).cxx_destruct;
- (void)_askForPasscodeIfNeeded;
- (void)_askForUserConfirmationIsAppleMAID:(bool)arg1;
- (void)_flowTerminatedWithError:(id)arg1 canceled:(bool)arg2;
- (id)_interactiveUnenrollmentSteps;
- (id)_nameForStep:(unsigned long long)arg1;
- (void)_preflightUnenrollmentWithAccoutAltDSID:(id)arg1;
- (void)_resetToInitialStepsWithSilent:(bool)arg1;
- (id)_silentUnenrollmentSteps;
- (void)_uninstallEnrollmentProfileWithIdentifier:(id)arg1 personaID:(id)arg2 altDSID:(id)arg3 isAppleMAID:(bool)arg4;
- (void)_workerQueue_flowCompleted;
- (void)_workerQueue_performFlowStep:(unsigned long long)arg1;
- (id)altDSID;
- (id)initWithPresenter:(id)arg1 managedConfigurationHelper:(id)arg2;
- (bool)isAppleMAID;
- (id)managedConfigurationHelper;
- (id)personaID;
- (id)presenter;
- (id)profileIdentifier;
- (void)setAltDSID:(id)arg1;
- (void)setIsAppleMAID:(bool)arg1;
- (void)setManagedConfigurationHelper:(id)arg1;
- (void)setPersonaID:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setUnenrollmentCompletionHandler:(id /* block */)arg1;
- (void)unenrollAccountWithAltDSID:(id)arg1 silent:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)unenrollmentCompletionHandler;

@end
