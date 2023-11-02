
@interface PLSecurity : NSObject

+ (id)_secTask:(struct __SecTask { }*)arg1 grantedEntitlements:(id)arg2;
+ (bool)auditToken:(struct { unsigned int x1[8]; })arg1 hasEntitlement:(id)arg2;
+ (id)connection:(id)arg1 grantedEntitlements:(id)arg2;
+ (bool)connection:(id)arg1 hasEntitlement:(id)arg2;
+ (id)connection:(id)arg1 valueForEntitlement:(id)arg2;
+ (id)connection:(id)arg1 valuesForEntitlements:(id)arg2;
+ (bool)connectionIsEntitledForPhotoKit:(id)arg1;
+ (bool)containsPhotoKitEntitlement:(id)arg1;
+ (bool)hasXPCStoreEntitlementOptInForToken:(struct { unsigned int x1[8]; })arg1;
+ (bool)isEntitledForPhotoKit;
+ (bool)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(struct { unsigned int x1[8]; })arg1;
+ (bool)secTask:(struct __SecTask { }*)arg1 hasEntitlement:(id)arg2;

@end
