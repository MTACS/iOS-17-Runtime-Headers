
@protocol HMMTRStorageDelegate <NSObject>

@optional

- (void)fetchCommissioningCertificatesFromOwnerForPublicKey:(void *)arg1 fabricID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: NSData *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSData *, NSNumber *, NSData *, void*
- (void)handleDeviceNoLongerPrimaryResidentWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)handlePrimaryResidentDataReady;
- (void)storageDidBecomeAvailable:(HMMTRStorage *)arg1;
- (void)storageDidUpdateData:(HMMTRStorage *)arg1 isLocalChange:(bool)arg2;

@end
