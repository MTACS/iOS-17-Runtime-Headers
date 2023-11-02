
@protocol HKObserverQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_dataUpdatedInDatabaseForTypes:(NSSet *)arg1 withAnchor:(NSNumber *)arg2 query:(NSUUID *)arg3;

@end
