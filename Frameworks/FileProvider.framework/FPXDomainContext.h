
@interface FPXDomainContext : NSObject {
    NSFileProviderDomain * _domain;
    unsigned long long  _extensionCapabilities;
    FPXExtensionContext * _extensionContext;
    NSFileProviderDomainVersion * _lastKnownDomainVersion;
    NSDictionary * _lastKnownUserInfo;
    NSObject<OS_os_log> * _log;
    FPProviderDomain * _providerDomain;
    int  _selfPid;
    long long  _sequenceNumber;
    FPSpotlightIndexer * _spotlightIndexer;
    bool  _usesFPFS;
    NSObject<NSFileProviderReplicatedExtension> * _vendorInstance;
}

@property (nonatomic, readonly) NSFileProviderDomain *domain;
@property (nonatomic, readonly) NSFileProviderDomainVersion *domainVersion;
@property (nonatomic, readonly) unsigned long long extensionCapabilities;
@property (nonatomic, readonly) FPXExtensionContext *extensionContext;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) FPProviderDomain *providerDomain;
@property (nonatomic, readonly) FPSpotlightIndexer *spotlightIndexer;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) bool usesFPFS;
@property (nonatomic, readonly) NSFileProviderExtension *v2Instance;
@property (nonatomic, readonly) NSObject<NSFileProviderReplicatedExtension> *vendorInstance;

- (void).cxx_destruct;
- (id)currentResponseWithRequest:(id)arg1;
- (id)domain;
- (id)domainVersion;
- (unsigned long long)extensionCapabilities;
- (id)extensionContext;
- (id)initWithVendorInstance:(id)arg1 domain:(id)arg2 extensionContext:(id)arg3 providerDomain:(id)arg4 domainVersion:(id)arg5;
- (id)instanceWithPrivateSelector:(SEL)arg1;
- (id)internalErrorFromVendorError:(id)arg1 callerDescription:(id)arg2;
- (void)invalidate;
- (id)itemFromVendorItem:(id)arg1;
- (id)itemIDFromVendorItemID:(id)arg1;
- (id)itemIDsFromVendorItemIDs:(id)arg1;
- (id)itemsFromVendorItems:(id)arg1;
- (id)log;
- (void)prepareForDomainRemovalWithCompletionHandler:(id /* block */)arg1;
- (id)providerDomain;
- (void)retrieveUserInfoFromExtension;
- (void)setLog:(id)arg1;
- (bool)shouldIngestDomainUserInfoUpdateWithOldVersion:(id)arg1 newVersion:(id)arg2;
- (id)spotlightIndexer;
- (void)updateCapabilities;
- (id)userInfo;
- (bool)usesFPFS;
- (id)v2Instance;
- (id)vendorInstance;

@end
