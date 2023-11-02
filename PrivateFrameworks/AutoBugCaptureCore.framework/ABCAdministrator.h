
@interface ABCAdministrator : NSObject <ABCPersistentStoreControllerDelegate> {
    bool  _autoBugCaptureAdministrativelyEnabled;
    int  _autoBugCaptureState;
    AutoBugCaptureCacheDelete * _cacheDeleteHandler;
    DiagnosticCaseManager * _caseManager;
    ABCConfigurationManager * _configurationManager;
    DiagnosticExtensionController * _diagExtensionController;
    DiagnosticLiaison * _diagnosticLiaison;
    DiagnosticStorageManager * _storageManager;
    ABCPersistentStoreController * _storeController;
    CloudKitUploadController * _uploadController;
    NSObject<OS_dispatch_queue> * adminQueue;
    DiagCollectionTransport * diagCollectionTransport;
    DiagnosticsTransport * diagTransport;
}

@property (nonatomic) int autoBugCaptureState;
@property (nonatomic, retain) AutoBugCaptureCacheDelete *cacheDeleteHandler;
@property (nonatomic, retain) DiagnosticCaseManager *caseManager;
@property (nonatomic, retain) CloudKitUploadController *ckUploadController;
@property (nonatomic, retain) ABCConfigurationManager *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DiagnosticExtensionController *diagExtensionController;
@property (nonatomic, retain) DiagnosticLiaison *diagnosticLiaison;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DiagnosticStorageManager *storageManager;
@property (nonatomic, retain) ABCPersistentStoreController *storeController;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)administrativelyDiableAutoBugCapture;
- (void)administrativelyEnableAutoBugCapture;
- (id)autoBugCaptureConfig;
- (int)autoBugCaptureState;
- (id)cacheDeleteHandler;
- (id)caseManager;
- (id)ckUploadController;
- (id)configurationManager;
- (void)continueStartingAutoBugCapture;
- (void)deregisterIDS;
- (id)diagExtensionController;
- (id)diagnosticLiaison;
- (id)getDiagnosticLiaison;
- (id)init;
- (id)internalStateDictionary;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)persistentStoreControllerReadyForUse:(id)arg1;
- (void)prepareLogArchiveDirectory:(id)arg1 uid:(id)arg2 gid:(id)arg3;
- (void)registerIDS;
- (void)scheduleDiagnosticsMaintenanceActivity;
- (void)setAutoBugCaptureState:(int)arg1;
- (void)setCacheDeleteHandler:(id)arg1;
- (void)setCaseManager:(id)arg1;
- (void)setCkUploadController:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setDiagExtensionController:(id)arg1;
- (void)setDiagnosticLiaison:(id)arg1;
- (void)setStorageManager:(id)arg1;
- (void)setStoreController:(id)arg1;
- (void)shutdown;
- (void)startAutoBugCaptureAdministrative:(bool)arg1;
- (void)startAutoBugCaptureAdministrative:(bool)arg1 parameters:(id)arg2;
- (void)startEssentialServices;
- (void)startMaintenanceServices;
- (void)startUploadTaskScheduler;
- (void)startup;
- (void)stopAutoBugCapture:(bool)arg1;
- (void)stopEssentialServices;
- (void)stopMaintenanceServices;
- (void)stopUploadTaskScheduler;
- (id)storageManager;
- (id)storeController;

@end
