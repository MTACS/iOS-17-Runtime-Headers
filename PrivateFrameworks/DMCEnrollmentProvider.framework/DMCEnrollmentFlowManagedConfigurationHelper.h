
@interface DMCEnrollmentFlowManagedConfigurationHelper : NSObject <DMCEnrollmentFlowMCBridge, MCInteractionDelegate> {
    NSString * _devicePasscode;
    NSData * _installingProfileData;
    DMCBYODEnrollmentFlowUIPresenter * _presenter;
    id /* block */  _profileInstallationCompletionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *devicePasscode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *installingProfileData;
@property DMCBYODEnrollmentFlowUIPresenter *presenter;
@property (nonatomic, copy) id /* block */ profileInstallationCompletionHandler;
@property (readonly) Class superclass;

+ (id)_createProfileInvalidError;
+ (id)_mdmProfileInfo;
+ (id)organizationNameFromProfile:(id)arg1 payload:(id)arg2;

- (void).cxx_destruct;
- (void)_handleUserInputRequest:(id)arg1;
- (void)blockAppInstallsWithCompletion:(id /* block */)arg1;
- (id)detailsFromMDMProfile:(id)arg1 error:(id*)arg2;
- (id)devicePasscode;
- (id)getMachineInfoForEnrollmentType:(unsigned long long)arg1 enrollmentMethod:(unsigned long long)arg2;
- (void)installEnrollmentProfile:(id)arg1 devicePasscode:(id)arg2 personaID:(id)arg3 rmAccountIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)installEnrollmentProfile:(id)arg1 devicePasscode:(id)arg2 personaID:(id)arg3 rmAccountIdentifier:(id)arg4 isESSO:(bool)arg5 essoAppITunesStoreID:(id)arg6 managedProfileIdentifiers:(id)arg7 installationSource:(id)arg8 completionHandler:(id /* block */)arg9;
- (void)installEnrollmentProfile:(id)arg1 devicePasscode:(id)arg2 personaID:(id)arg3 rmAccountIdentifier:(id)arg4 managedProfileIdentifiers:(id)arg5 installationSource:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)installingProfileData;
- (bool)isDeviceMDMEnrolled;
- (bool)isDevicePasscodeSet;
- (bool)isDeviceSharediPad;
- (bool)isDeviceSupervised;
- (bool)isMDMProfileLocked;
- (void)manageApplicationWithBundleID:(id)arg1 iTunesItemID:(id)arg2 organization:(id)arg3 personaID:(id)arg4 associatedDomains:(id)arg5 associatedDomainsEnableDirectDownloads:(id)arg6 configuration:(id)arg7 completionHandler:(id /* block */)arg8;
- (id)presenter;
- (void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (void)profileConnection:(id)arg1 didRequestMAIDSignIn:(id)arg2 personaID:(id)arg3;
- (void)profileConnection:(id)arg1 didRequestManagedRestoreWithManagedAppleID:(id)arg2 personaID:(id)arg3;
- (void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
- (void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
- (void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
- (id /* block */)profileInstallationCompletionHandler;
- (void)reauthenticationComplete;
- (void)removeApplicationWithBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)removeProfileAssociatedWithPersonaID:(id)arg1;
- (void)removeProfileWithIdentifier:(id)arg1 async:(bool)arg2;
- (void)requestEnrollmentFlowMonitorWithPersonaID:(id)arg1;
- (void)setDevicePasscode:(id)arg1;
- (void)setInstallingProfileData:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setProfileInstallationCompletionHandler:(id /* block */)arg1;
- (void)stopEnrollmentFlowMonitor;
- (void)unblockAppInstallsWithCompletion:(id /* block */)arg1;
- (bool)validateESSOConfigurationProfile:(id)arg1 error:(id*)arg2;

@end
