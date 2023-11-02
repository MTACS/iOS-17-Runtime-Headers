
@interface PLAssetsdServicePermissions : NSObject <NSCopying> {
    bool  _allowsAuthorizationWithPhotoKitEntitlement;
    long long  _requiredAuthorization;
    NSArray * _requiredEntitlements;
}

@property (nonatomic) bool allowsAuthorizationWithPhotoKitEntitlement;
@property (nonatomic) long long requiredAuthorization;
@property (nonatomic, copy) NSArray *requiredEntitlements;

- (void).cxx_destruct;
- (id)_errorForMissingEntitlements:(id)arg1 withContext:(id)arg2;
- (bool)_isAuthorizedForReadWriteWithContext:(id)arg1;
- (bool)_isAuthorizedForWriteOnlyWithContext:(id)arg1;
- (bool)_isAuthorizedViaPhotoKitEntitlementWithContext:(id)arg1;
- (bool)_isAuthorizedViaTCCWithContext:(id)arg1;
- (id)_verifyAuthorizationWithContext:(id)arg1;
- (id)_verifyEntitlementsWithContext:(id)arg1;
- (bool)allowsAuthorizationWithPhotoKitEntitlement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPermissions:(id)arg1;
- (void)refreshCachedAuthorizationsWithContext:(id)arg1;
- (long long)requiredAuthorization;
- (id)requiredEntitlements;
- (void)setAllowsAuthorizationWithPhotoKitEntitlement:(bool)arg1;
- (void)setRequiredAuthorization:(long long)arg1;
- (void)setRequiredEntitlements:(id)arg1;
- (id)verifyPermissionsWithContext:(id)arg1;

@end
