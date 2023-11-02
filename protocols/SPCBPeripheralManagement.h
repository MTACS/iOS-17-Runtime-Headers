
@protocol SPCBPeripheralManagement <NSObject>

@required

- (void)enableSystemWakesForUpdate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (id /* block */)peripheralsUpdatedCallback:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSArray *, void*, id, SEL
- (void)setPeripheralsUpdatedCallback:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)startSessionForUserIdentifier:(void *)arg1 bundleId:(void *)arg2 vendorIdentifierList:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSUUID *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopSessionForUserIdentifier:(void *)arg1 bundleId:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)successfulConnectionForPeripheral:(void *)arg1 leMAC:(void *)arg2 ltk:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: SPPeripheral *, NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
