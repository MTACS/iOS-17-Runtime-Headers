
@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization> {
    bool  _analyticsCacheReadEntitled;
    bool  _analyticsCacheWriteEntitled;
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    bool  _clientIsSandboxed;
    bool  _clientLimitedLibraryCapable;
    PLSandboxedURL * _clientMainBundleSandboxedURL;
    int  _clientProcessIdentifier;
    bool  _cloudInternalEntitled;
    bool  _directDatabaseAccessAuthorized;
    bool  _directDatabaseWriteAuthorized;
    NSString * _fetchFilterIdentifier;
    bool  _internalDataReadWriteAuthorized;
    bool  _isEntitledForPhotoKitOrPrivatePhotosTCC;
    bool  _libraryUpgradeAuthorized;
    bool  _photoKitEntitled;
    NSSet * _photoKitEntitlements;
    NSNumber * _photosAccessAllowed;
    NSNumber * _photosAddAccessAllowed;
    bool  _photosDataVaultEntitled;
    bool  _smartSharingCacheReadEntitled;
    bool  _smartSharingCacheWriteEntitled;
    NSString * _trustedCallerBundleID;
    NSString * _trustedCallerDisplayName;
    NSString * _trustedCallerPhotoLibraryUsageDescription;
}

@property (nonatomic, readonly) bool analyticsCacheReadEntitled;
@property (nonatomic, readonly) bool analyticsCacheWriteEntitled;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } clientAuditToken;
@property (getter=isClientAuthorizedForTCCServicePhotos, nonatomic, readonly) bool clientAuthorizedForTCCServicePhotos;
@property (getter=isClientAuthorizedForTCCServicePhotosAdd, nonatomic, readonly) bool clientAuthorizedForTCCServicePhotosAdd;
@property (nonatomic, readonly) bool clientIsSandboxed;
@property (getter=isClientLimitedLibraryCapable, nonatomic, readonly) bool clientLimitedLibraryCapable;
@property (nonatomic, readonly) int clientProcessIdentifier;
@property (nonatomic, readonly) bool cloudInternalEntitled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool directDatabaseAccessAuthorized;
@property (nonatomic, readonly) bool directDatabaseWriteAuthorized;
@property (nonatomic, readonly) NSString *fetchFilterIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool internalDataReadWriteAuthorized;
@property (nonatomic, readonly) bool limitedLibraryMode;
@property (nonatomic, readonly) bool photoKitEntitled;
@property (nonatomic, readonly) bool photosDataVaultEntitled;
@property (nonatomic, readonly) bool smartSharingCacheReadEntitled;
@property (nonatomic, readonly) bool smartSharingCacheWriteEntitled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *trustedCallerBundleID;
@property (nonatomic, readonly) NSString *trustedCallerDisplayName;
@property (nonatomic, readonly) NSString *trustedCallerPhotoLibraryUsageDescription;

- (void).cxx_destruct;
- (bool)_shouldTrackEventForBundle:(id)arg1;
- (void)_trackCAConnectionEvent;
- (bool)analyticsCacheReadEntitled;
- (bool)analyticsCacheWriteEntitled;
- (struct { unsigned int x1[8]; })clientAuditToken;
- (bool)clientIsSandboxed;
- (int)clientProcessIdentifier;
- (bool)cloudInternalEntitled;
- (id)description;
- (bool)directDatabaseAccessAuthorized;
- (bool)directDatabaseWriteAuthorized;
- (id)fetchFilterIdentifier;
- (id)initWithConnection:(id)arg1;
- (bool)internalDataReadWriteAuthorized;
- (void)invalidateClientAuthorizationCache;
- (bool)isClientAuthorizedForLibraryUpgrade;
- (bool)isClientAuthorizedForSandboxExtensions;
- (bool)isClientAuthorizedForTCCServicePhotos;
- (bool)isClientAuthorizedForTCCServicePhotosAdd;
- (bool)isClientEntitledForPhotoKitOrPrivatePhotosTCC;
- (bool)isClientInFullLibraryMode;
- (bool)isClientInLimitedLibraryMode;
- (bool)isClientInRestrictedMode;
- (bool)isClientLimitedLibraryCapable;
- (bool)isPhotosClient;
- (bool)limitedLibraryMode;
- (bool)photoKitEntitled;
- (bool)photoKitEntitledFor:(id)arg1;
- (bool)photosDataVaultEntitled;
- (void)setClientLimitedLibraryCapable:(bool)arg1;
- (void)setClientMainBundleSandboxedURL:(id)arg1;
- (void)setupFromConnection:(id)arg1;
- (bool)smartSharingCacheReadEntitled;
- (bool)smartSharingCacheWriteEntitled;
- (id)trustedCallerBundleID;
- (id)trustedCallerDisplayName;
- (id)trustedCallerPhotoLibraryUsageDescription;

@end
