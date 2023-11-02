
@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend> {
    NSNumber * _activeAccountDSID;
    NSNumber * _activeLockerAccountDSID;
    <ICUserIdentityStoreBackendDelegate> * _delegate;
    NSMutableDictionary * _identityProperties;
    ICLocalStoreAccountProperties * _localStoreAccountProperties;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICUserIdentityStoreBackendDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultActiveAccountDSID;
+ (id)defaultActiveLockerAccountDSID;
+ (id)defaultStorefrontIdentifier;
+ (void)setDefaultActiveAccountDSID:(id)arg1;
+ (void)setDefaultActiveLockerAccountDSID:(id)arg1;
+ (void)setDefaultStorefrontIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_propertiesToSaveForProperties:(id)arg1;
- (id)activeAccountDSIDWithError:(id*)arg1;
- (id)activeLockerAccountDSIDWithError:(id*)arg1;
- (id)allManageableStoreAccountDSIDsWithError:(id*)arg1;
- (id)allStoreAccountDSIDsWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (bool)disableLockerAccountDSID:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)identityPropertiesForDSID:(id)arg1 error:(id*)arg2;
- (id)identityPropertiesForPrimaryICloudAccountWithError:(id*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localStoreAccountPropertiesWithError:(id*)arg1;
- (void)removeIdentityForDSID:(id)arg1 completion:(id /* block */)arg2;
- (bool)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (bool)setIdentityProperties:(id)arg1 forDSID:(id)arg2 error:(id*)arg3;
- (bool)setLocalStoreAccountProperties:(id)arg1 error:(id*)arg2;
- (void)synchronize;
- (bool)updateActiveAccountDSID:(id)arg1 error:(id*)arg2;
- (bool)updateActiveLockerAccountDSID:(id)arg1 error:(id*)arg2;
- (id)verificationContextForAccountEstablishmentWithError:(id*)arg1;
- (id)verificationContextForDSID:(id)arg1 error:(id*)arg2;

@end
