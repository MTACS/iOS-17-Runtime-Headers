
@protocol HKMedicationExposableDoseEventControlServerInterface <HKUnitTestingTaskServerInterface>

@required

- (void)remote_deleteDoseEventWithPersistentUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_doseEventsForDateInterval:(void *)arg1 medicationIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDateInterval *, HKMedicationIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_writeDoseEvents:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
