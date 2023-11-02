
@protocol HKProfileStoreServer <NSObject>

@required

- (void)remote_createProfileOfType:(void *)arg1 displayName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKProfileIdentifier *, NSError *, void*
- (void)remote_deleteProfile:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKProfileIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_fetchDisplayImageData:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)remote_fetchDisplayNameWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)remote_fetchSharingInformationForProfileIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: HKProfileIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSString *, NSError *, void*
- (void)remote_getAllProfilesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_profileIdentifierForNRDeviceUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKProfileIdentifier *, NSError *, void*
- (void)remote_profileIdentifierForNRDeviceUUID:(void *)arg1 ownerAppleID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKProfileIdentifier *, NSError *, void*
- (void)remote_setDisplayFirstName:(void *)arg1 lastName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setDisplayImageData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_startObservingWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
