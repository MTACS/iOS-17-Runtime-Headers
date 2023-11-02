
@protocol SAMonitoringSessionManagerServiceProtocol

@required

- (void)addClient:(id <SAMonitoringSessionManagerClientProtocol>)arg1;
- (long long)earlyVehicularTriggerForDeviceUUID:(NSUUID *)arg1;
- (void)removeClient:(id <SAMonitoringSessionManagerClientProtocol>)arg1;
- (unsigned long long)scenarioClassForDeviceUUID:(NSUUID *)arg1;
- (unsigned long long)stateForDeviceUUID:(NSUUID *)arg1;

@end
