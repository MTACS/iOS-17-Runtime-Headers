
@interface CNTCCVersion2 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation> {
    NSNumber * _isUnitTestingCachedValue;
    NSObject<OS_tcc_message_options> * _messageOptionsForAsyncPrompt;
    NSObject<OS_tcc_message_options> * _messageOptionsForSyncNoPrompt;
    NSObject<OS_tcc_server> * _server;
    NSObject<OS_tcc_service> * _service;
    NSNumber * _simulateStatus;
}

@property (nonatomic, retain) NSNumber *isUnitTestingCachedValue;
@property (nonatomic, readonly) NSObject<OS_tcc_message_options> *messageOptionsForAsyncPrompt;
@property (nonatomic, readonly) NSObject<OS_tcc_message_options> *messageOptionsForSyncNoPrompt;
@property (nonatomic, readonly) NSObject<OS_tcc_server> *server;
@property (nonatomic, readonly) NSObject<OS_tcc_service> *service;
@property (nonatomic, retain) NSNumber *simulateStatus;

+ (id)os_log;

- (void).cxx_destruct;
- (id)authorizationRecordForBundleIdentifier:(id)arg1;
- (id)authorizationRecords;
- (long long)checkAuthorizationStatusOfAuditToken:(id)arg1 assumedIdentity:(id)arg2;
- (long long)checkAuthorizationStatusOfCurrentProcess;
- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(id)arg1;
- (id)credentialForAuditToken:(id)arg1 assumedIdentity:(id)arg2;
- (id)init;
- (bool)isAuthorizationRestricted;
- (bool)isUnitTesting;
- (id)isUnitTestingCachedValue;
- (id)isUnitTestingImpl;
- (id)messageOptionsForAsyncPrompt;
- (id)messageOptionsForSyncNoPrompt;
- (void)requestAuthorization:(long long)arg1 auditToken:(id)arg2 assumedIdentity:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestAuthorizationWithCredential:(id)arg1 messageOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveAuthorizationRecord:(id)arg1;
- (id)server;
- (id)service;
- (void)setIsUnitTestingCachedValue:(id)arg1;
- (void)setSimulateStatus:(id)arg1;
- (id)simulateStatus;
- (void)simulateStatus:(long long)arg1;
- (void)stopSimulation;

@end
