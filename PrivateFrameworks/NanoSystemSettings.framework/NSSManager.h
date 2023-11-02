
@interface NSSManager : NSObject {
    NSObject<OS_dispatch_queue> * _externalQueue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *externalQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)cannotUseNSSError;
+ (void)displayAirplaneModeMirroringUserEducationAlert:(bool)arg1;
+ (void)displayAlertFailedRemoteAirplaneMode:(bool)arg1;
+ (void)displayAlertWithTitle:(id)arg1 body:(id)arg2 icon:(id)arg3;

- (void).cxx_destruct;
- (void)_updateBetaEnrollmentStatus:(id)arg1 requiresUnenroll:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)cancelDiagnosticLogTranfer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)cancelFileTransfersInProgress;
- (id)connection;
- (void)dealloc;
- (void)deleteDiagnosticLogFile:(id)arg1 withResult:(id /* block */)arg2;
- (void)enableAirplaneMode:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)externalQueue;
- (void)fetchBetaEnrollmentStatus:(id /* block */)arg1;
- (bool)fileTransferInProgress:(id)arg1;
- (void)getAboutInfo:(id /* block */)arg1;
- (void)getAccountsInfo:(id /* block */)arg1;
- (void)getAccountsInfoForAccountType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getDiagnosticLogFileFromGizmo:(id)arg1 withResults:(id /* block */)arg2;
- (void)getDiagnosticLogsInfo:(id /* block */)arg1;
- (void)getDiagnosticLogsInfoByCateogry:(id /* block */)arg1;
- (void)getFullProfileInfoWithIdentifier:(id)arg1 includeManagedPayloads:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getLegalDocuments:(id /* block */)arg1;
- (void)getLocalesInfo:(id /* block */)arg1;
- (void)getProfileWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getProfilesInfo:(id /* block */)arg1;
- (void)getUsage:(id /* block */)arg1;
- (void)getUsageData:(id /* block */)arg1;
- (void)getWatchFaces:(id /* block */)arg1;
- (void)getiCloudInfo:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)installProfile:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)internalQueue;
- (void)invalidate;
- (void)obliterateGizmo:(id /* block */)arg1;
- (void)obliterateGizmoPreservingeSIM:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)protocol;
- (void)purgeUsageBundle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)purgeUsageBundleWithId:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)rebootDevice;
- (void)recordSoftwareUpdateSpaceFailure:(id)arg1 osBeingUpdatedTo:(id)arg2 completion:(id /* block */)arg3;
- (void)removeProfileWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)retrieveAirplaneModeSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)retrieveDiagnosticLogTransferProgress:(id)arg1 withProgress:(id /* block */)arg2;
- (void)setAirplaneModeSettings:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDeviceName:(id)arg1;
- (void)setExternalQueue:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setSafetyXpcInterruptionHandlerBlock:(id /* block */)arg1;
- (void)setWatchFaceIdentifier:(id)arg1 forFocusModeIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setXpcConnection:(id)arg1;
- (void)unenrollFromBetaUpdatesWithCompletion:(id /* block */)arg1;
- (void)unsafe_invalidate;
- (void)updateBetaEnrollmentStatus:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)xpcConnection;

@end
