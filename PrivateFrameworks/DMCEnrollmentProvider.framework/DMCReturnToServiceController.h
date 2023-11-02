
@interface DMCReturnToServiceController : NSObject <DMCEnrollmentFlowPresenter> {
    DMCEnrollmentFlowController * _enrollmentFlowController;
    DMCObliterationShelter * _obliterationShelter;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DMCEnrollmentFlowController *enrollmentFlowController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DMCObliterationShelter *obliterationShelter;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workerQueue;

- (void).cxx_destruct;
- (id)_ORGONotSupportedError;
- (id)_cloudConfigMissingError;
- (id)_configurationURLMissingError;
- (void)_fetchAndInstallMDMProfileIfNeededWithCloudConfig:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchAndStoreCloudConfigurationIfNeededWithCompletionHandler:(id /* block */)arg1;
- (void)_handleORGOEnrollmentWithCompletionHandler:(id /* block */)arg1;
- (void)_markWiFiProfileAsManagedIfNeeded;
- (id)_webURLNotSupportedError;
- (void)configureMDMWithCompletionHandler:(id /* block */)arg1;
- (id)enrollmentFlowController;
- (id)init;
- (bool)installWiFiProfileIfNeeded:(id*)arg1;
- (id)languageStrings;
- (id)localeString;
- (id)obliterationShelter;
- (void)requestMAIDAuthenticationWithManagedAppleID:(id)arg1 personaID:(id)arg2 ephemeral:(bool)arg3 requireAppleMAID:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)requestMAIDSignInWithAuthenticationResults:(id)arg1 personaID:(id)arg2 makeiTunesAccountActive:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)returnToServiceFlowCompleted;
- (void)setEnrollmentFlowController:(id)arg1;
- (void)setObliterationShelter:(id)arg1;
- (void)setWorkerQueue:(id)arg1;
- (bool)shouldDoReturnToService;
- (void)showEnrollmentCompletionScene;
- (void)showEnrollmentFailure:(id)arg1;
- (id)workerQueue;

@end
