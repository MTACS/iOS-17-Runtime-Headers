
@protocol PLAssetsdServiceContext <NSObject>

@required

- (void)awaitLibraryState:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSString *)clientDebugDescription;
- (bool)hasEntitlement:(NSString *)arg1;
- (void)invalidateClientAuthorizationCache;
- (bool)isClientAuthorizedForTCCServicePhotos;
- (bool)isClientAuthorizedForTCCServicePhotosAdd;
- (NSError *)shutdownReason;

@end
