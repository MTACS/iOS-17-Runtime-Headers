
@protocol MKFHAPAccessoryPrivateExtensions

@required

- (void)maybeFixUpCharacteristicWriteActionsInContext:(NSManagedObjectContext *)arg1;
- (_MKFService *)serviceWithID:(NSNumber *)arg1 context:(NSManagedObjectContext *)arg2;

@end
