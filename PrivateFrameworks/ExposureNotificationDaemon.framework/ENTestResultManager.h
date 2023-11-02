
@interface ENTestResultManager : NSObject {
    NSURLSession * _URLBackupSession;
    NSURLSession * _URLSession;
    ENChaffTestResultSession * _chaffSession;
    ENRegion * _chaffingRegion;
    ENXPCTimer * _chaffingTimer;
    ENConfigurationStore * _configurationStore;
    <ENTestResultManagerDelegate> * _delegate;
    ENExposureDatabase * _exposureDatabase;
    unsigned long long  _maxRetryTime;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sessionsByUUID;
    ENTemporaryExposureKeyManager * _temporaryExposureKeyManager;
}

@property (nonatomic, readonly) ENConfigurationStore *configurationStore;
@property (nonatomic) <ENTestResultManagerDelegate> *delegate;
@property (nonatomic, readonly) ENExposureDatabase *exposureDatabase;
@property (nonatomic, readonly) ENTemporaryExposureKeyManager *temporaryExposureKeyManager;

+ (bool)checkValidNonce:(id)arg1 size:(unsigned long long)arg2;
+ (id)generateSecureNonce:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_activateAutomatedChaffingWithRegion:(id)arg1;
- (id)_configurationForRegion:(id)arg1 error:(id*)arg2;
- (id)_createSessionWithVerificationCode:(id)arg1 proxyEnabled:(bool)arg2 region:(id)arg3 maxRetryTime:(unsigned long long)arg4 error:(id*)arg5;
- (id)_createURLSessionWithSecondaryIdentifier:(bool)arg1;
- (void)_deactivateAutomatedChaffing;
- (id)_existingSessionForVerificationCode:(id)arg1 region:(id)arg2;
- (void)_finishSessionWithUUID:(id)arg1 userDidConsent:(bool)arg2 metadata:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)_getRevisionToken:(id*)arg1 forSession:(id)arg2 error:(id*)arg3;
- (id)_getTemporaryExposureKeysForUpload:(bool)arg1 requireConsentForRegion:(id)arg2 error:(id*)arg3;
- (void)_invalidate;
- (void)_invalidateSession:(id)arg1;
- (id)_metadataForSessionWithUUID:(id)arg1 error:(id*)arg2;
- (id)_revisionTokenKeyForSession:(id)arg1;
- (id)_serverConfigurationForRegion:(id)arg1 error:(id*)arg2;
- (id)_sessionWithUUID:(id)arg1 error:(id*)arg2;
- (bool)_setRevisionToken:(id)arg1 forSession:(id)arg2 error:(id*)arg3;
- (void)_startChaffTestVerficationSessionForRegion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_startSelfReportWebSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_startTestVerficationSessionWithCode:(id)arg1 proxyEnabled:(bool)arg2 region:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_updateChaffingTimerBlock;
- (void)activateAutomatedChaffingWithRegion:(id)arg1;
- (void)activateWebSession:(id)arg1 verificationTimestamp:(double)arg2 nonceTimestamp:(double)arg3;
- (id)configurationStore;
- (void)deactivateAutomatedChaffing;
- (void)deactivateWebSession;
- (id)delegate;
- (id)exposureDatabase;
- (void)finishSessionWithUUID:(id)arg1 userDidConsent:(bool)arg2 metadata:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithConfigurationStore:(id)arg1 exposureDatabase:(id)arg2 temporaryExposureKeyManager:(id)arg3 queue:(id)arg4;
- (void)invalidate;
- (id)metadataForSessionWithUUID:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMaxRetryTime:(unsigned long long)arg1;
- (void)startChaffTestVerficationSessionForRegion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startSelfReportWebSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startTestVerficationSessionWithCode:(id)arg1 proxyEnabled:(bool)arg2 region:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)temporaryExposureKeyManager;

@end
