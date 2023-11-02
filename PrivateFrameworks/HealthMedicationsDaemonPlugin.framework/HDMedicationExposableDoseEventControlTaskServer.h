
@interface HDMedicationExposableDoseEventControlTaskServer : HDStandardTaskServer <HKMedicationExposableDoseEventControlServerInterface>

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_deleteDoseEventWithPersistentUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_doseEventsForDateInterval:(id)arg1 medicationIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_writeDoseEvents:(id)arg1 completion:(id /* block */)arg2;

@end
