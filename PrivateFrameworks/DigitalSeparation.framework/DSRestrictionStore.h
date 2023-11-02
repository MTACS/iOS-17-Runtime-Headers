
@interface DSRestrictionStore : NSObject

+ (bool)hasRestriction;
+ (void)initialize;
+ (bool)isAppRemovalRestricted;
+ (bool)isFingerprintModificationRestricted;
+ (bool)isPasscodeModificationRestricted;
+ (bool)isPermissionRestricted:(id)arg1;
+ (bool)isPrivateRelayRestricted;
+ (bool)isSourceRestricted:(id)arg1;

@end
