
@protocol MTSDevicePairingServerInterface

@required

- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)openCommissioningWindowForSystemCommissionerPairingUUID:(void *)arg1 duration:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSUUID *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)readCommissioningWindowStatusForSystemCommissionerPairingUUID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeDevicePairingWithUUID:(void *)arg1 forSystemCommissionerPairingUUID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
