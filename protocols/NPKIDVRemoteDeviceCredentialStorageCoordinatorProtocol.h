
@protocol NPKIDVRemoteDeviceCredentialStorageCoordinatorProtocol <DCBioBindingProtocol>

@required

- (void)createCredentialInPartition:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, DCCredentialOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)credentialIdentifiersInPartitions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)deleteCredential:(void *)arg1 withConfiguredPartitions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteGlobalAuthACLWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)generateKeyWithType:(void *)arg1 credentialIdentifier:(void *)arg2 withConfiguredPartitions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: unsigned long long, NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialCryptoKey *, NSError *, void*
- (void)generatePresentmentKeysForCredential:(void *)arg1 numKeys:(void *)arg2 withConfiguredPartitions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, long long, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getCASDCertificateWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)propertiesOfCredential:(void *)arg1 withConfiguredPartitions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DCCredentialProperties *, NSError *, void*

@end
