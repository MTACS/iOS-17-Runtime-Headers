
@interface HMDAuditAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)predicate;

- (void)auditHAPPairings:(id)arg1 forAccessory:(id)arg2;
- (id)getPairingsFromAccessory:(id)arg1;
- (id)getPairingsFromAirPlayAccessory:(id)arg1;
- (id)initWithAccessoryUUID:(id)arg1 accessoryIdentifier:(id)arg2 homeUUIDWhereAccessoryWasPaired:(id)arg3;
- (id)logIdentifier;
- (bool)mainWithError:(id*)arg1;
- (void)scheduleAuditOperations:(id)arg1;

@end
