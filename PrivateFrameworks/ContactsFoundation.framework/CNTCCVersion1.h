
@interface CNTCCVersion1 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation> {
    NSNumber * _isUnitTestingCachedValue;
    NSNumber * _simulateStatus;
}

@property (nonatomic, retain) NSNumber *isUnitTestingCachedValue;
@property (nonatomic, retain) NSNumber *simulateStatus;

+ (id)createAppAuthorizationRecordFromTCCAppInfo:(id)arg1 bundleIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)authorizationRecordForBundleIdentifier:(id)arg1;
- (id)authorizationRecords;
- (long long)checkAuthorizationStatusOfAuditToken:(struct { unsigned int x1[8]; })arg1;
- (long long)checkAuthorizationStatusOfAuditToken:(id)arg1 assumedIdentity:(id)arg2;
- (long long)checkAuthorizationStatusOfCurrentProcess;
- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(id)arg1;
- (bool)isAuthorizationRestricted;
- (bool)isUnitTesting;
- (id)isUnitTestingCachedValue;
- (id)isUnitTestingImpl;
- (void)requestAuthorization:(long long)arg1 auditToken:(id)arg2 assumedIdentity:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)saveAuthorizationRecord:(id)arg1;
- (void)setIsUnitTestingCachedValue:(id)arg1;
- (void)setSimulateStatus:(id)arg1;
- (id)simulateStatus;
- (void)simulateStatus:(long long)arg1;
- (void)stopSimulation;

@end
