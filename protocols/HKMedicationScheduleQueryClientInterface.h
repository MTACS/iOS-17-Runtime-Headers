
@protocol HKMedicationScheduleQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverSchedules:(NSArray *)arg1 queryUUID:(NSUUID *)arg2;

@end
