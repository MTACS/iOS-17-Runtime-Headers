
@protocol PLClientAuthorization <PLClientIdentification>

@required

- (bool)analyticsCacheReadEntitled;
- (bool)analyticsCacheWriteEntitled;
- (bool)clientIsSandboxed;
- (bool)cloudInternalEntitled;
- (bool)directDatabaseAccessAuthorized;
- (bool)directDatabaseWriteAuthorized;
- (NSString *)fetchFilterIdentifier;
- (bool)internalDataReadWriteAuthorized;
- (bool)isClientAuthorizedForTCCServicePhotos;
- (bool)isClientAuthorizedForTCCServicePhotosAdd;
- (bool)isClientLimitedLibraryCapable;
- (bool)limitedLibraryMode;
- (bool)photoKitEntitled;
- (bool)photoKitEntitledFor:(NSString *)arg1;
- (bool)photosDataVaultEntitled;
- (bool)smartSharingCacheReadEntitled;
- (bool)smartSharingCacheWriteEntitled;
- (NSString *)trustedCallerDisplayName;
- (NSString *)trustedCallerPhotoLibraryUsageDescription;

@end
