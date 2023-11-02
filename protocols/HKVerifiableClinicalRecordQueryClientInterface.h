
@protocol HKVerifiableClinicalRecordQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverVerifiableClinicalRecords:(NSArray *)arg1 queryUUID:(NSUUID *)arg2;

@end
