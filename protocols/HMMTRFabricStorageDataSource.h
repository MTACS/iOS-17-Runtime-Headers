
@protocol HMMTRFabricStorageDataSource <NSObject>

@required

- (NSSet *)allNodeIDs;
- (NSNumber *)fabricID;
- (NSData *)intermediateCertificate;
- (NSDictionary *)keyValueStore;
- (NSNumber *)lastNodeID;
- (NSData *)operationalCertificate;
- (NSData *)rootCertificate;
- (<HMMTRDeviceStorageDataSource> *)storageDataSourceForDeviceWithNodeID:(NSNumber *)arg1;
- (void)updateFabricID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateIntermediateCertificate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateKeyValueStore:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateKeyValueStoreWithBlock:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSMutableDictionary *, NSMutableArray *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)updateLastNodeID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateOperationalCertificate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateRootCertificate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
