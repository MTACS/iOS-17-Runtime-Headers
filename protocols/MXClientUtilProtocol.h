
@protocol MXClientUtilProtocol

@required

- (NSArray *)allClients;
- (bool)hasAnyClient;
- (bool)hasClientForBundleID:(NSString *)arg1;
- (bool)isClientAvailableForBundleID:(NSString *)arg1;
- (bool)isClientAvailableFromPersistence;
- (void)persistAllClients;
- (void)registerClientForBundleID:(NSString *)arg1;
- (void)registerTeamForBundleID:(NSString *)arg1 andTeamID:(NSString *)arg2;
- (void)removeClientFromPersistenceForBundleID:(NSString *)arg1;
- (void)reportMetricKitUsageForBundleID:(NSString *)arg1;
- (void)reportPayloadDeliveriesSuccessWithSuccessCount:(unsigned long long)arg1;
- (NSString *)teamIDForBundleID:(NSString *)arg1;
- (void)updateClientAsAvailableFromPersistence;
- (void)updateClientAsNotAvailableFromPersistence;

@end
