
@protocol EMVIPManager <EMVIPReader, NSObject>

@required

- (EAEmailAddressSet *)allVIPEmailAddresses;
- (NSSet *)allVIPs;
- (void)getAllVIPsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)removeVIPsWithEmailAddresses:(EAEmailAddressSet *)arg1;
- (void)removeVIPsWithIdentifiers:(NSSet *)arg1;
- (void)saveVIPs:(NSSet *)arg1;
- (EMVIP *)vipWithIdentifier:(NSString *)arg1;

@end
