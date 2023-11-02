
@protocol NPKIDVRemoteDeviceCredentialStorage <NSObject>

@required

- (void)configureWithPartition:(void *)arg1 ackHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)createCredentialInPartition:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, DCCredentialOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)credentialIdentifiersInPartitions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)deleteCredential:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)generateKeyWithType:(void *)arg1 credentialIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialCryptoKey *, NSError *, void*
- (void)generatePresentmentKeysForCredential:(void *)arg1 numKeys:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)propertiesOfCredential:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialProperties *, NSError *, void*

@end
