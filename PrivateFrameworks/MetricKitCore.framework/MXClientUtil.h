
@interface MXClientUtil : NSObject <MXClientUtilProtocol> {
    NSDictionary * _clientDictionary;
    NSDictionary * _clientTeamIDs;
    NSObject<OS_os_log> * _logHandle;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) NSDictionary *clientDictionary;
@property (nonatomic, retain) NSDictionary *clientTeamIDs;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (bool)_hasClientInClientDictionary;
- (void)_initClientCollection;
- (void)_initTeamCollection;
- (bool)_isClientAvailableFromPersistence;
- (void)_persistClientAvailability;
- (void)_persistClientAvailabilityWithAvailability:(bool)arg1;
- (void)_persistClientDictionary;
- (void)_persistTeamIDsDictionary;
- (void)_randomReportClientRegistrationForBundleID:(id)arg1;
- (id)_retrieveClientAvailablity;
- (id)_retrieveClientDictionary;
- (id)_retrieveTeamIDsDictionary;
- (void)_updateClientAsAvailableFromPersistence;
- (void)_updateClientAsNotAvailableFromPersistence;
- (void)_updateClientDictionaryWithBundleID:(id)arg1;
- (void)_updateTeamIDsDictionaryWithTeamID:(id)arg1 forBundleID:(id)arg2;
- (id)allClients;
- (id)clientDictionary;
- (id)clientTeamIDs;
- (bool)hasAnyClient;
- (bool)hasClientForBundleID:(id)arg1;
- (id)init;
- (bool)isClientAvailableForBundleID:(id)arg1;
- (bool)isClientAvailableFromPersistence;
- (id)logHandle;
- (void)persistAllClients;
- (void)registerClientForBundleID:(id)arg1;
- (void)registerTeamForBundleID:(id)arg1 andTeamID:(id)arg2;
- (void)removeClientFromPersistenceForBundleID:(id)arg1;
- (void)reportMetricKitUsageForBundleID:(id)arg1;
- (void)reportPayloadDeliveriesSuccessWithSuccessCount:(unsigned long long)arg1;
- (void)setClientDictionary:(id)arg1;
- (void)setClientTeamIDs:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (id)teamIDForBundleID:(id)arg1;
- (void)updateClientAsAvailableFromPersistence;
- (void)updateClientAsNotAvailableFromPersistence;
- (id)userDefaults;

@end
