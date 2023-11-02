
@protocol ICUserIdentityStoreBackend <NSObject, NSCopying, NSSecureCoding>

@required

- (NSNumber *)activeAccountDSIDWithError:(id*)arg1;
- (NSNumber *)activeLockerAccountDSIDWithError:(id*)arg1;
- (NSArray *)allManageableStoreAccountDSIDsWithError:(id*)arg1;
- (NSArray *)allStoreAccountDSIDsWithError:(id*)arg1;
- (<ICUserIdentityStoreBackendDelegate> *)delegate;
- (bool)disableLockerAccountDSID:(NSNumber *)arg1 error:(id*)arg2;
- (ICUserIdentityProperties *)identityPropertiesForDSID:(NSNumber *)arg1 error:(id*)arg2;
- (ICUserIdentityProperties *)identityPropertiesForPrimaryICloudAccountWithError:(id*)arg1;
- (ICLocalStoreAccountProperties *)localStoreAccountPropertiesWithError:(id*)arg1;
- (void)removeIdentityForDSID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)replaceIdentityProperties:(ICUserIdentityProperties *)arg1 forDSID:(NSNumber *)arg2 error:(id*)arg3;
- (void)setDelegate:(id <ICUserIdentityStoreBackendDelegate>)arg1;
- (bool)setIdentityProperties:(ICUserIdentityProperties *)arg1 forDSID:(NSNumber *)arg2 error:(id*)arg3;
- (bool)setLocalStoreAccountProperties:(ICLocalStoreAccountProperties *)arg1 error:(id*)arg2;
- (void)synchronize;
- (bool)updateActiveAccountDSID:(NSNumber *)arg1 error:(id*)arg2;
- (bool)updateActiveLockerAccountDSID:(NSNumber *)arg1 error:(id*)arg2;
- (ICUserVerificationContext *)verificationContextForAccountEstablishmentWithError:(id*)arg1;
- (ICUserVerificationContext *)verificationContextForDSID:(NSNumber *)arg1 error:(id*)arg2;

@end
