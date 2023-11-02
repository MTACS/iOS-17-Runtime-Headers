
@protocol EMVIPManagerInterface <NSObject>

@required

- (void)cancelObservation:(EMObjectID *)arg1;
- (void)registerObserver:(id <EMVIPManagerObserver>)arg1 observationIdentifier:(EMObjectID *)arg2;
- (void)removeVIPsWithEmailAddresses:(EAEmailAddressSet *)arg1;
- (void)removeVIPsWithIdentifiers:(NSSet *)arg1;
- (void)saveVIPs:(NSSet *)arg1;

@end
