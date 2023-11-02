
@protocol HAP2Storage <NSObject>

@required

- (<HAP2StorageDelegate> *)delegate;
- (void)fetchCacheForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)fetchControllerKeyForDeviceId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HAPDeviceID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HAPPairingIdentity *, NSError *, void*
- (void)fetchKeysForIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, void*
- (void)hasKeysForIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, void*
- (void)removeCacheForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeControllerKeyWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeKeysForIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)saveCacheForIdentifier:(void *)arg1 data:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveControllerIdentity:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HAPPairingIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)saveKeysForIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)setDelegate:(id <HAP2StorageDelegate>)arg1;

@optional

- (void)shutDownWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startUpWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
