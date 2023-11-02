
@protocol HKDatabaseChangesQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverQueryAnchor:(HKQueryAnchor *)arg1 sampleTypeChanges:(NSDictionary *)arg2 queryUUID:(NSUUID *)arg3;

@end
